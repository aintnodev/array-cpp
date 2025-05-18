#include <iostream>

int partition(int *arr, int min, int max) {
  int pivot = arr[max];
  int i = min - 1;

  for (int j = min; j < max; j++) {
    if (arr[j] < arr[max]) {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }

  std::swap(arr[i + 1], arr[max]);
  return i + 1;
}

void quicksort(int *arr, int min, int max) {
  while (min < max) {
    int pi = partition(arr, min, max);

    if (pi - min < max - pi) {
      quicksort(arr, min, pi - 1);
      min = pi + 1;
    } else {
      quicksort(arr, pi + 1, max);
      max = pi - 1;
    }
  }
}

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 1, 3, 9, 7};
  quicksort(arr, 0, ARR_SIZE - 1);

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << arr[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

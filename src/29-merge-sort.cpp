#include <iostream>

void merge(int *arr, int left, int mid, int right) {
  int sl = mid - left + 1;
  int sr = right - mid;

  int *larr = new int[sl];
  int *rarr = new int[sr];

  for (int i = 0; i < sl; i++) {
    larr[i] = arr[left + i];
  }
  for (int j = 0; j < sr; j++) {
    rarr[j] = arr[mid + 1 + j];
  }

  int i = 0, j = 0, k = left;
  while (i < sl && j < sr) {
    if (larr[i] <= rarr[j])
      arr[k++] = larr[i++];
    else
      arr[k++] = rarr[j++];
  }

  while (i < sl)
    arr[k++] = larr[i++];
  while (j < sr)
    arr[k++] = rarr[j++];

  delete[] larr;
  delete[] rarr;
}

void mergesort(int *arr, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }
}

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 1, 3, 9, 7};
  mergesort(arr, 0, ARR_SIZE - 1);

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << arr[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

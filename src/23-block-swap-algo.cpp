#include <iostream>

void swap(int *arr, int a, int b, int size) {
  for (int i = 0; i < size; i++) {
    std::swap(arr[a + i], arr[b + i]);
  }
}

void rotate(int *arr, int d, int n) {
  if (d == 0 || d == n) {
    return;
  }

  int i = d, j = n - d;

  while (i != j) {
    if (i < j) {
      swap(arr, d - i, d + j - i, i);
      j -= i;
    } else {
      swap(arr, d - i, d, j);
      i -= j;
    }
  }

  swap(arr, d - i, d, j);
};

int main() {
  const int ARR_SIZE = 7;
  int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7};
  int d = 2, n = ARR_SIZE;
  rotate(arr, d, n);

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << arr[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

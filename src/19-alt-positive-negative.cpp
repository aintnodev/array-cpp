#include <iostream>

int main() {
  const int ARR_SIZE = 9;
  int arr[ARR_SIZE] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
  int pos = 0, res[ARR_SIZE];

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] >= 0) {
      pos++;
    }
  }

  int *pos_arr = new int[pos];
  int *neg_arr = new int[ARR_SIZE - pos];

  int i = 0, j = 0;

  for (int k = 0; k < ARR_SIZE; k++) {
    if (arr[k] >= 0) {
      pos_arr[i++] = arr[k];
    } else {
      neg_arr[j++] = arr[k];
    }
  }

  i = 0, j = 0;
  int k = 0;

  while (i < pos && j < ARR_SIZE - pos) {
    res[k++] = pos_arr[i++];
    res[k++] = neg_arr[j++];
  }

  while (i < pos)
    res[k++] = pos_arr[i++];

  while (j < ARR_SIZE - pos)
    res[k++] = neg_arr[j++];

  delete[] pos_arr;
  delete[] neg_arr;

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << res[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

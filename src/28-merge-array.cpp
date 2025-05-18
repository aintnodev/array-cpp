#include <iostream>

int main() {
  const int ARR_SIZE = 3, BRR_SIZE = 3;
  const int NRR_SIZE = ARR_SIZE + BRR_SIZE;
  int arr[NRR_SIZE] = {1, 2, 3, 0, 0, 0};
  int nrr[NRR_SIZE], brr[BRR_SIZE] = {2, 5, 6};

  int i = 0, j = 0, k = 0;
  while (i < ARR_SIZE && j < BRR_SIZE) {
    if (arr[i] < brr[j]) {
      nrr[k] = arr[i++];
    } else {
      nrr[k] = brr[j++];
    }

    k++;
  }

  while (i < ARR_SIZE) {
    nrr[k++] = arr[i++];
  }
  while (j < BRR_SIZE) {
    nrr[k++] = brr[j++];
  }

  for (int i = 0; i < NRR_SIZE; i++) {
    std::cout << nrr[i];
    if (i == NRR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

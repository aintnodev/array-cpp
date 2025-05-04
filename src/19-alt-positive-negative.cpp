#include <iostream>
#include <vector>

int main() {
  const int ARR_SIZE = 9;
  int arr[ARR_SIZE] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
  std::vector<int> pos_arr, neg_arr, res_arr;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] >= 0) {
      pos_arr.push_back(arr[i]);
    } else {
      neg_arr.push_back(arr[i]);
    }
  }

  int i = 0, j = 0;
  while (i < pos_arr.size() && j < neg_arr.size()) {
    res_arr.push_back(pos_arr[i++]);
    res_arr.push_back(neg_arr[j++]);
  }

  while (i < pos_arr.size())
    res_arr.push_back(pos_arr[i++]);

  while (j < neg_arr.size())
    res_arr.push_back(neg_arr[j++]);

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << res_arr[i];
    if (i == res_arr.size() - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

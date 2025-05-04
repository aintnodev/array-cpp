#include <iostream>
#include <vector>

int main() {
  const int ARR_SIZE = 4;
  int k = 34, sum = 0;
  int arr[ARR_SIZE] = {1, 2, 0, 0};
  std::vector<int> num;

  for (int i = 0; i < ARR_SIZE; i++) {
    sum = sum * 10 + arr[i];
  }

  sum += k;

  while (sum > 0) {
    num.push_back(sum % 10);
    sum /= 10;
  }

  for (int i = 0; i < num.size(); i++) {
    std::cout << arr[i];
    if (i == num.size() - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

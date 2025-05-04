#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> arr;

  for (int i = 2; i * i <= num; i++) {
    while (num % i == 0) {
      arr.push_back(i);
      num /= i;
    }
  }

  if (num > 2) {
    arr.push_back(num);
  }

  return arr;
}

int add(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int sum = 0;
  int num = 666;
  std::vector<int> arr = factor(num);

  if (arr.size() > 1) {
    for (int i = 0; i < arr.size(); i++) {
      sum += add(arr[i]);
    }

    if (add(num) == sum) {
      std::cout << "YESS\n";
    } else {
      std::cout << "NOO\n";
    }
  } else {
    std::cout << "NOO\n";
  }
}

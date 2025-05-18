#include <iostream>

int factor(int num) {
  int sum = 0;

  for (int i = 2; i * i <= num; i++) {
    while (num % i == 0) {
      sum += i;
      num /= i;
    }
  }

  if (num > 2) {
    sum += num;
  }

  return sum;
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
  int num = 13;
  int fac = factor(num);

  if (add(num) != add(fac) || num == fac) {
    std::cout << "NOO\n";
  } else {
    std::cout << "YESS\n";
  }
}

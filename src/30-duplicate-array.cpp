#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {2, 3, 1, 2, 3};
  std::unordered_map<int, int> freq;
  std::vector<int> kate;

  for (int i = 0; i < ARR_SIZE; i++) {
    freq[arr[i]]++;
  }

  for (auto i = freq.begin(); i != freq.end(); ++i) {
    if (i->second > 1) {
      kate.push_back(i->first);
    }
  }

  for (int i = 0; i < kate.size(); i++) {
    std::cout << kate[i];
    if (i == kate.size() - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}

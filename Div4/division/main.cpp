#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n;
  int rating;
  std::cin >> n;
  while (n--) {
    std::cin >> rating;
    if (rating > 1900) {
      std::cout << "Division 1"
                << "\n";
    } else if (rating >= 1600 && rating <= 1899) {
      std::cout << "Division 2"
                << "\n";
    } else if (rating >= 1400 && rating <= 1599) {
      std::cout << "Division 3"
                << "\n";
    } else if (rating <= 1399) {
      std::cout << "Division 4"
                << "\n";
    }
  }
}

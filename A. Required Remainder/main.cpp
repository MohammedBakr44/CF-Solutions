#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cout.tie(0);
  std::cin.sync_with_stdio(0);
  long long t, x, y, n;
  std::cin >> t;
  while (t--) {
    std::cin >> x >> y >> n;
    long long q = n / x;
    long long r = n % x;
    if (r >= y) {
      std::cout << q * x + y << "\n";
    } else {
      std::cout << (q - 1) * x + y << "\n";
    }
  }
}

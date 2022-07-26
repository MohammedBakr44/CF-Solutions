#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int drink = k * l;
  int toasts = drink / nl;
  int limes = c * d;
  int salt = p / np;
  int mintl = std::min(toasts, limes);
  std::cout << std::min(mintl, salt) / n << "\n";
}

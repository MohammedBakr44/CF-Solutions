#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n;
  int even = 0;
  int odd = 0;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  if (even > odd) {
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 != 0) {
        std::cout << i + 1 << "\n";
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
        std::cout << i + 1 << "\n";
      }
    }
  }
}

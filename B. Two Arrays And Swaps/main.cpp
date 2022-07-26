#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int t, n, k;
  std::cin >> t;
  while (t--) {
    int count = 0, sum = 0;
    std::cin >> n >> k;
    long long arr1[n];
    long long arr2[n];
    for (int i = 0; i < n; i++) {
      std::cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> arr2[i];
    }
    std::sort(arr1, arr1 + n);
    std::sort(arr2, arr2 + n);
    for (int i = n - 1; i >= 0; i--) {
      int temp = arr1[(n - 1) - i];
      if (arr1[(n - 1) - i] < arr2[i] && count < k) {
        arr1[(n - 1) - i] = arr2[i];
        arr2[i] = temp;
        count++;
      }
    }
    /*for (int i = 0; i < n; i++) {
      std::cout << arr1[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++) {
      std::cout << arr2[i] << " ";
    }*/
    for (int i = 0; i < n; i++) {
      sum += arr1[i];
    }
    std::cout << sum << "\n";
  }
}

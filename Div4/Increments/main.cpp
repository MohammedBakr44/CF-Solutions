#include <bits/stdc++.h>

std::string checkParity(int arr[], int na) {
  bool isOdd = false;
  bool isEven = false;
  for (int i = 0; i < na; i++) {
    // Check if all even
    if (arr[i] % 2 == 0 && !isOdd) {
      isEven = true;
    } else {
      isOdd = true;
    }
  }
  return isEven || isOdd ? "YES" : "NO";
}

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n;
  int na;
  std::cin >> n;
  while (n--) {
    std::cin >> na;
    bool isOdd = false;
    bool isEven = false;
    int arr[na];
    for (int i = 0; i < na; i++) {
      std::cin >> arr[i];
    }
    if (checkParity(arr, na) == "YES") {
      break;
    }

    for (int i = 0; i < na; i += 2) {
      arr[i] += 1;
    }

    if (checkParity(arr, na) == "YES") {
      break;
    }

    for (int i = 1; i < na; i += 2) {
      arr[i] += 1;
    }
    if (checkParity(arr, na) == "YES") {
      break;
    } else {
      std::cout << "NO"
                << "\n";
    }
  }
}

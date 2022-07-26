#include <bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n = 0;
  int h = 0;
  int i = 0;
  int result = 0;
  std::cin >> n >> h;
  while(n--) {
	std::cin >> i;
	i > h ? result += 2 : result++;
  }
  std:: cout << result << std::endl;
  return 0;

}

#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);

  int n;
  long long i, sum = 0;
  std::cin >> n;
  while(n--) {
	std::cin >> i;
	sum += i;
  }
  if(sum < 0) std::cout << sum * -1 << "\n";
  else std::cout << sum << "\n";
}

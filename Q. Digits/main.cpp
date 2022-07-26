#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  short t;
  long long n;
  std::cin>>t;
  while(t--) {
	std::cin >> n;
	if(n == 0) std::cout << 0;
	while(n != 0) {
	  std::cout << n % 10 << " ";
	  n /= 10;
	}
	std::cout << "\n";
  }
	std::cout << "\n";
}

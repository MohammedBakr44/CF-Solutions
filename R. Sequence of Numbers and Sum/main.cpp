#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int m = 1, n = 1;
  int sum = 0;
  while(m > 0 && n > 0) {
	std::cin >> m >> n;
	if(m <= 0 || n <= 0) {
	  break;
	} 
	if(m > n) {
	  for(int i = n; i <= m; i++) {
		std::cout << i << " ";
		sum += i;
	  }
	  std::cout << "sum =" << sum << "\n";
	  sum = 0;
	} else if(m < n) {
	  for(int i = m; i <= n; i++) {
		std::cout << i << " ";
		sum += i;
	  }
	  std::cout << "sum =" << sum << "\n";
	  sum = 0;
	} else if(m == n) {
	  std::cout << m << " sum =" << m << "\n";
	}
  }
}

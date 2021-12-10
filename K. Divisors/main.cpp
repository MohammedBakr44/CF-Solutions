#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n;
  std::cin >> n;
  for(int i = 1; i <= n; i++) {
	if(n % i == 0) {
	  std::cout << i << "\n";
	} else {
	  continue;
	}
  }
}

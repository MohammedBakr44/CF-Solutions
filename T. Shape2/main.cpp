#include <bits/stdc++.h>
//you should really read the stuff at the bottom

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	short n, k = 1;
	std::cin >> n;
	short sp = n-1;
	for(int i = 0; i < n; i++) {
	  for(int t = sp; t > 0; t--) {
		std::cout << " ";
	  }
	  sp--;
	  for(int j = 1; j <= k; j++) {
		std::cout << "*";
	  }
	  k += 2;
	  std::cout << "\n";
	}
}

	
/*
* don't be lazy in thinking ya 3l2
* Think twice, code once
* Think of diferent approaches to tackle a problem: write them down.
* Think of different views of the problem. don't look from only one side.
* don't get stuck in one approach.
* common mistakes: over_flow
*                	- out_of_bound index
*                  -infinite loop
*                  -corner cases
*                  -double counting.
*/


#include <bits/stdc++.h>
typedef  long long ll;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

void solve() {
		
}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	int t;
	int x, even, odd, positive, negative;
	even = odd = positive = negative = 0;
	std::cin>>t;
	while(t--) {
		std::cin >> x;
		if(x % 2 == 0) {
		  even++;
		}
		if(x % 2 != 0) {
		  odd++;
		}

		if(x > 0) {
		  positive++;
		}

		if(x < 0) {
		  negative++;
		}
		
		solve();
	}

	std::cout << "Even: " << even << "\n";
	std::cout << "Odd: " << odd << "\n";
	std::cout << "Positive: " << positive << "\n";
	std::cout << "Negative: " << negative << "\n";
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


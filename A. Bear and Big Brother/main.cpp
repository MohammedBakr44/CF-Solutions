#include <bits/stdc++.h>
typedef  long long ll;
//using cd = complex<double>;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

void solve() {
		
}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	int a, b, c = 0;
	std::cin >> a >> b;
	while(a <= b) {
	  a *= 3;
	  b *= 2;
	  c++;
	}
	std::cout << c << "\n";
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


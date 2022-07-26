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
	int tc;
	int p, v, t;
	int r = 0;
	std::cin>>tc;
	while(tc--) {
		std::cin>> p >> v >> t;
		r += (p+v+t>=2);
	}
	std::cout<< r << "\n";

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


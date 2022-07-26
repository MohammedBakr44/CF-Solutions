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
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if(c >= a && c <= b) {
	  if(d >= b) {
		std::cout << c << " " << b << "\n";
	  } else if(b >= d) {
		std::cout << c << " " << d;	
	  }
	} else if(a >= c && a <= d) {
		if(b >= d) {
		  std::cout << a << " " << d << "\n";
		} else if(d >= b) {
		  std::cout << a << " " << b;
		}
	  } else {
		std::cout << -1 << "\n";
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


#include <bits/stdc++.h>
#include <string>
#include<cmath>
typedef  long long ll;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

void solve(std::string arr[5]) {
}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	int x;
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) {
			std::cin >> x;
			if(x == 1) { 
				std::cout <<abs(i - 3) + abs(j - 3) << "\n";
				break;
			}
		}
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


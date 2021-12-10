#include <bits/stdc++.h>
typedef  long long ll;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

void solve() {
		
}

long long divide(long long arr[]) {
	int n = (int)sizeof(arr)/sizeof(arr[0]);
	long long sum = 0;
	for(int i = 0; i < n-1; i++) {
		if(arr[i] >= 1 && i % 2 == 0) {
			arr[i] = arr[i] / 2;
			arr[n-1] = arr[n-1] * 2;
		} else {
		    divide(arr);
		}
	}

	for(int i = 0; i < n; i++) {
		std::cout << arr[i] << "\n";
	}

	return sum;
}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	long long t, sum = 0;
	std::cin >> t;
	int n;
	long long m;
	while(t--) {
	  std::cin >> n;
	  long long arr[n];
	  for(int i = 0; i < n; i++) {
		std::cin >> m;
		arr[i] = m;
	  //std::cout << sum << "\n";
	}
	std::sort(arr, arr + n);
	sum = divide(arr);
	//for(int i = 0; i < n; i++) {
		//std::cout << arr[i] << "\n";
	//}
	std::cout << sum << "\n";
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


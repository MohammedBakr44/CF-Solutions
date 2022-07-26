#include <bits/stdc++.h>

typedef  long long ll;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

void solve(std::string name) {	
	int n = name.length() + 1;
	char str[n];
	strcpy(str, name.c_str());
	std::sort(str, str + n);
	if(n==0) {
	  std::cout << "CHAT WITH HER!" << "\n";
	} else if(n == 1) {
	  std::cout << "IGNORE HIM!" << "\n";
	}

	std::string temp;

	int j = 0;
	
	for(int i = 0; i < n-1; i++) {
	  if(str[i] != str[i+1]) {
		temp += str[i];
		j++;
	  }
	}
	temp += str[n-1];
	j++;


	int d = (temp.length() - 1) % 2;

	std::cout << (d == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	std::string name;
	std::cin >> name;
	solve(name);

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


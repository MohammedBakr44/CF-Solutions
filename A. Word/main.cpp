#include <bits/stdc++.h>
typedef  long long ll;
const double PI = acos(-1);
#define all(x) x.begin(), x.end()
//you should really read the stuff at the bottom

using namespace std;

void solve(string s) {
  int upper = 0, lower = 0;
  for(int i = 0; i < s.length(); i++) {
	if( (int)s[i] >= 97) {
	  lower++;
	} else {
	  upper++;
	}
  }
  if(lower >= upper ) {
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << "\n";
  } else {
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << "\n";
  }

}

int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);
	string s;
	cin >> s;
	solve(s);

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


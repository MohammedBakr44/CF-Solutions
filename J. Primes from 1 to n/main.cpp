#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);
  int n; 
  std::cin >> n;
  for(int i = 2; i <= n; i++) {
		bool p = 0;
		for(int j = 2; j < i; j++) {
		  if(i % j == 0) {
		    p = 1;
		}
	  }
	  if(p == 0) {
		std::cout << i << " ";
	  }	
  }
}

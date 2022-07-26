#include <iostream>
#include <bits/stdc++.h>

int main() {
  int t = 0, l = 0, r = 0, n = 0;
  std:: cin >> t;
  int result = (1 << 32) - 1;
  while(t--) {
	std::cin >> n;
	int ith = n;
	int S[n];
	while(n) {
	  int i;
	  std::cin >> i;
	  result &= i;
	  S[ith - n] = i;
	  n--;
	}

	
	std::cout << result << std::endl;
	std::sort(S, S + (sizeof(S) / sizeof(S[0])));
	l = S[0];
	r = S[ith - 1];
	//std::cout << "l, r: " << l << "," << r << std::endl;
	for(int i = 0; i < ith; i++) {
		  S[(l+i) - 1] = (S[(l+i) - 1] & S[(r-i) - 1]);
		  //result &= (S[(l+i) - 1] & S[(r-i) - 1]);
		  //result &= S[(l+i) - 1];
		  //std::cout << " i: " << i << std::endl;
		  //std::cout << "l+i: " << l+i << " r-i: " << r-i << std::endl;
		  //std::cout << "array: " << S[i] << std::endl;
	  }

	//std::cout << result << std::endl;
	std::sort(S, S + (sizeof(S) / sizeof(S[0])));
	//std::cout << S[0] << std::endl;
  }

  return 0;
}

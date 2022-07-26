#include<bits/stdc++.h>

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);

  short n, m, c, mr = 0, cr = 0;
  std::cin >> n;
  while(n--) {
	std::cin >> m >> c;
	if(m > c) mr++;
	else if(c > m) cr++;
	else {
	  mr++;
	  cr++;
	}
  }
  if(mr > cr) std::cout << "Mishka" << "\n";
  else if(mr == cr) std::cout << "Friendship is magic!^^" << "\n";
  else std::cout << "Chris" << "\n";
}

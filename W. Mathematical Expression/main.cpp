#include<bits/stdc++.h>
#include<string>

int main() {
  long long a; char s; long long b; char q; long long c;
  long long result;
  std::cin >> a >> s >> b >> q >> c;

  switch(s) {
	case '+':
	  result = a + b;
	  break;
	case '-':
	  result = a - b;
	  break;
	case '*':
	  result = a * b;
	  break;
  }

  if(result == c) std::cout << "Yes" << "\n";
  else std::cout << result << "\n";

  //std::cout << (result == c) ? "Yes" : result;

}

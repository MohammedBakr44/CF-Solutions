#include<bits/stdc++.h>

long long remove_zeros(long long n) {
  while( (n % 10) == 0) {
	n = (int) n / 10;
  }
  return n;
}

int main() {
  std::cin.tie(0);
  std::cin.sync_with_stdio(0);

  long long n;
  int l;
  std::string rev;
  std::string x = "";
  std::cin >> n;
  //n =  remove_zeros(n);
  x = std::to_string(n);
  l = x.length();

  for(int i = (l - 1); i >= 0; i--) {
	rev += x[i];
  }

  long long r = stol(rev);

  std::cout << r << "\n";
  std::cout << (rev == x ? "YES" : "NO") << "\n";
}

#include<iostream>
#include<climits>
#include<cmath>
#include <bits/stdc++.h>


int main() {
  long long a, b, c, d;
  std::cin >> a >> b >> c >> d;
  if( (b * log10(a)) > (d * log10(c))) std::cout << "YES" << "\n";
  else std::cout << "NO" << "\n";

}

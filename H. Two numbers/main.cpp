#include<iostream>

int main() {
  double a, b;
  std::cin >> a >> b;
  double r = a / b;
  //std::cout << r << "\n";

  std::cout << "floor " << a << " / " << b << " = " << (int)(r * 10) / 10 << "\n";
  // Ceil
  if( r == (int)r) std::cout << "ceil " << a << " / " << b << " = " << (int)((r * 10) / 10) << "\n";
  else std::cout << "ceil " << a << " / " << b << " = " << (int)((r * 10) / 10) + 1 << "\n";
  // Round
  if( ( ((int)(r * 10) % 10 )) >= 5) std::cout << "round " << a << " / " << b << " = " <<  (int)((r * 10) / 10) + 1 << "\n";
  else std::cout << "round " << a << " / " << b << " = " <<  (int)((r * 10) / 10) << "\n";
  
}


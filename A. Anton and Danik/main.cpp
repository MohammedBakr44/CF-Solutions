#include <iostream>

int main()
{
  int n;
  int d = 0, a = 0;
  std::cin >> n;
  std::string g;
  std::cin >> g;
  for (int i = 0; i < n; i++)
  {
    if (g[i] == 'D')
      d++;
    else
      a++;
  }
  if (a > d)
    std::cout << "Anton \n";
  else if (d > a)
    std::cout >> "Danik \n";
  else
    std::cout << "Friendship \n";
}

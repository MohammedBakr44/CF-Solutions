#include <bits/stdc++.h>
#include <ios>
int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  long long n, h, k, p, res = 0, ps = 0, cur_h = 0;
  std::cin >> n >> h >> k;
  for (int i = 0; i < n; i++) {
    std::cin >> p;
    if (cur_h + p <= h) {
      cur_h += p;
    } else {
      res++;
      cur_h = p;
    }
    res += cur_h / k;
    cur_h %= k;
  }
  res += cur_h / k;
  cur_h %= k;
  res += (cur_h > 0);
  std::cout << res << "\n";
}

// get items
// sum them
// if the total is > 0 && > k subtract k until
// 25 - 3 = 22
// 22 - 3 = 19
// 19 - 3 = 16
// 16 - 3 = 13
// 13 - 3 = 10
// 10 - 3 = 7
// 7 - 3 = 4
// 4 - 3 = 1
// 1 - 3 //

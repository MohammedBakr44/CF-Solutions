#include <iostream>

void solve() {
	int n;
	std::cin >> n;
	int a[n];
	int ans = (1 << 32) - 1;

	for(int i = 0; i < n; i++) {
		std::cin >> a[i];
		ans &= a[i];
	}

	std::cout << ans << std::endl;

}

int main() {
	std::cin.tie(0);
	std::cin.sync_with_stdio(0);
	int t;
	std::cin>> t;
	while(t--) {
		solve();
	}
}

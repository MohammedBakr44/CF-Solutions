#include<bits/stdc++.h>

int main() {
  int t, c, n = 0;
  std::cin>>t;
  int arr[t];
  while(t--) {
	std::cin >> c;
	arr[n] = c;
	n++;
  }
  std::sort(arr, arr+(sizeof(arr)/sizeof(arr[0])));
  for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); ++i) {
	std::cout << arr[i] << " ";
  }
}

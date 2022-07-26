#include<iostream>

void insertionSort(long long arr[], int n) {
  long long i, j, key;
  for(i = 1; i < n; i++) {
	key = arr[i];
	j = i - 1;

	while(j >= 0 && arr[j] > key) {
	  arr[j + 1] = arr[j];
	  j = j - 1;
	}
	arr[j+1] = key;
  }
}

int main() {
  long long a, b, c;
  std::cin >> a >> b >> c;
  long long arr[] = {a, b, c};
  long long arr1[] = {a, b, c};
  int n = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr, n);
  for(int i = 0; i < n; i++) {
	std::cout << arr[i] << "\n";
  }

  std::cout << "\n";

  for(int i = 0; i < n; i++) {
	std::cout << arr1[i] << "\n";
  }
}


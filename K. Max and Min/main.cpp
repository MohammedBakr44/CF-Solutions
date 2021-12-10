#include<iostream>

void insertionSort(long long arr[], int n) {
  
  long long i, key, j;

  for(i = 1; i < n; i++) {
	key = arr[i]; // marker i.e the element to be compared with past elements.
	j = i - 1; // the elemenet before the marker.

	// checking if j is not out of range and if the element before the marker is sorted or not, while it's not sorted i.e arr[5] > arr[6], then swap the elements so arr[5] < arr[6] hence sorted.
	while(j >= 0 && arr[j] > key) {
	  arr[j + 1] = arr[j]; // swap the elements.
	  j = j - 1;
	}
	arr[j + 1] = key; // after sorting the unsorted elements, put the marked element in its right place in its right place.
  }
} 

int main() {
  long long a, b, c;
  std::cin >> a >> b >> c;
  long long arr[] = {a, b, c};
  int n = (sizeof(arr)/sizeof(arr[0]));
  // insertion sort
  insertionSort(arr, n);
  std::cout << arr[0] << " " << arr[n - 1] << "\n";
}

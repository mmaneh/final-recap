#include <stdio.h>
int findMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int findMax(int arr[], int n) {
	int max  = arr[0];
	
	for (int i = 0; i < n; ++i) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int main() {
	const int n = 10;
	int arr[n];
	printf("Enter the elements of the array");
	for(int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	int min = findMin(arr,n);
	printf("%d", min);

	int max = findMax(arr, n);
	printf("%d", max);

}

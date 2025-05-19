#include <stdio.h>
int* replaceArray(int * arr, int n) {
	int idx = 0;
	for (int i = 0; i < n; ++i) {
		if(arr[i] % 2 == 0) {
			arr[idx++] = arr[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (arr[i] % 2) {
			arr[idx++] = arr[i];
		}
	}

	return arr;
}
int main() {
	const int n = 5;
	int arr[n];
	printf("Enter the elements of the array: ");
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	
	int * ptr = replaceArray(arr, n);
	printf("After the changes\n");

	for (int i = 0; i < n; ++i) {
		printf("%d", ptr[i]);
	}
}

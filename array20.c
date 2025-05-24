#include <stdio.h>
int missingNumber (int* arr, int size) {
    int sum = 0;
    for (int i = 1; i <= size; ++i) {
        sum += i;
    }
    int sum1 = 0;
    for (int i = 0; i < size - 1; ++i) {
        sum1 += arr[i];
    }
    return sum - sum1;
}
int main() {
    const int n = 10;
    int arr[n - 1];
    printf("Enter the elements: ");
    for (int i = 0; i < n - 1; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("The missing number is %d", missingNumber(arr, n));

}
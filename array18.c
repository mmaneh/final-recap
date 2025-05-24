#include <stdio.h>
int main() {
    const int n = 10;
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= arr[i + 1]) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
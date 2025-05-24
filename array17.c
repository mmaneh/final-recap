#include <stdio.h>
void findTheTarget (int* arr, int size, int target) {
    int flag = 0;
    for (int i = 0; i < size; ++i) {
        if(arr[i] == target) {
            flag = 1;
            printf("%d\n", i);
        }
    }
    if (flag == 0) printf("-1");
}
int main() {
    const int n = 10;
    int target = 7;
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    findTheTarget(arr, n, target);
}
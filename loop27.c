#include <stdio.h>
#include <stdbool.h>

bool containsDigit(int* arr, int size, int a) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) return true;
    }
    return false;
}

bool Increasing(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] <= arr[i - 1]) return true;
    }
    return false;
}

bool notDecreasing(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] <  arr[i - 1]) return true;
    }
    return false;
}

/*bool sum(int* arr, int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    if (s > 20) return true;
    return false;
}

bool product(int* arr, int size) {
    int p = 1;
    for (int i = 0; i < size; i++) {
        p *= arr[i];
    }
    if (p < 30) return true;
    return false;
}*/

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[10];
    int idx = 0;

    while (n) {
        arr[idx++] = n % 10;
        n /= 10;
    }

    
    bool has3 = containsDigit(arr, idx, 3);
    bool has5 = containsDigit(arr, idx, 5);
    bool increasing = Increasing(arr, idx);
    bool decreasing = notDecreasing(arr, idx);
    bool s = sum(arr, idx);
    bool p = product(arr, idx);

    if (has3 && !has5 && increasing && decreasing && s && p) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


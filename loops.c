//task 21
#include <stdio.h>

int main() {
    int n;
    printf("Enter the height of Floyd's Triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= i; j++) {   
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}
//task 28
#include <stdio.h>
#include <stdbool.h>

bool arithmethicProgression(int n) {
    int arr[10];
    int idx = 0;

    while (n > 0) {
        arr[idx++] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < idx / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[idx - i - 1];
        arr[idx - i - 1] = tmp;
    }

    int dif = arr[1] - arr[0];
    for (int i = 2; i < idx; ++i) {
        if (arr[i] - arr[i - 1] != dif)
            return false;
    }

    return true;
}
//task 29
#include <stdbool.h>

bool geoProgression(int n) {
    

    int arr[10];
    int idx = 0;

    while (n > 0) {
        arr[idx++] = n % 10;
        n /= 10;
    }

    for (int i = 1; i < idx; i++) {
        if (arr[i] == 0) return false;
    }

    double q = (double)arr[1] / arr[0];

    for (int i = 2; i < idx; i++) {
        double curr = (double)arr[i] / arr[i - 1];
        if (curr != q) return false;
    }

    return true;
}
 

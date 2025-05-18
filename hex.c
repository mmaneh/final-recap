#include <stdio.h>

void Hex(int num) {
    char arr[20];
    int idx = 0;

    if (num == 0) {
        printf("0000\n");
        return;
    }

    while (num > 0) {
        int rem = num % 16;
        if (rem < 10) {
            arr[idx++] = '0' + rem;
	}else{
            arr[idx++] = 'A' + (rem - 10);
	}
        num /= 16;
    }

    printf("The hexodecimal ");
    for (int i = idx - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    Hex(n); 

    return 0;
}


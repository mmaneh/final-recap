//task 7
#include <stdio.h>

int main() {
    int num = 0;
    int  n = 0;
    printf("Enter the number and the index: ");
    scanf("%d %d", &num, &n);

    num = num | (1 << n); 

    printf("The nuber with reversed bit is:  %d\n", num);
    return 0;
}
//task 8
#include <stdio.h>

int main() {
    int n = 0;
    printf("Enter a number ");
    scanf("%d", &n);

    if (n & (n - 1) == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
//task 9
#include <stdio.h>

int main() {
    int num = 0;
    int  n = 0;
    printf("Enter the number and the index: ");
    scanf("%d %d", &num, &n);

    num = num & ~(1 << n);  

    printf("Number with reversed bit is:  %d\n", num);
    return 0;
}
// task 11
#include <stdio.h>

int main() {
    int num = 0;
    int i = 0;
    int j = 0;

    printf("Enter the number and 2 indexes: ");
    scanf("%d %d %d", &num, &i, &j);
    int bit1 = (num >> i) & 1;
    int bit2 = (num >> j) & 1;
    if(bit1 != bit2){
    num ^= (1 << i);
    num ^= (1 << j);
    }

    printf("Number after swapping %d\n", num);
    return 0;
}
//task 12
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int res = 0;

    for (int i = 0; i < 32; ++i) {
        res <<= 1;          
        res |= (num & 1);   
        num >>= 1;          
    }

    printf("result is: %d\n", res);

    return 0;
}





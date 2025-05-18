#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  
    int num1 = rand() % 100;
    int num2 = 0;

    while (1) {
        printf("Guess the number (0-100): ");
        scanf("%d", &num2);

        if (num1 == num2) {
            printf("Congratulations! You guessed it!\n");
            break;
        } else if (num2 < num1) {
            printf("My number is greater. Try again.\n");
        } else {
            printf("My number is smaller. Try again.\n");
        }
    }

    return 0;
}


#include <stdio.h>
// task 9
int main() {
    float weight = 0;
    float height = 0; 
    float bmi = 0;

    printf("Enter ur weight: ");
    scanf("%f", &weight);

    printf("Enter ur height: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI us: %.2f\n", bmi);
    return 0;
}

// task 10
#include <stdio.h>

int main() {
    int a = 0;
    int	b = 0;
    int c = 0;
    float avg = 0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3.0;

    printf("The average is: %.2f\n", avg);
    return 0;
}
// task 11
#include <stdio.h>

int main() {
    int hours = 0;
    int minutes = 0;

    printf("Enter the hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("The hours' value in minutes is  %d\n", minutes);
    return 0;
}
//task 12
#include <stdio.h>

int main() {
    int age = 0, 
    int days = 0;

    printf("Enter ur age: ");
    scanf("%d", &age);

    days = age * 365;

    printf("Your age in days is %d \n", days);
    return 0;
}
//task 13
#include <stdio.h>

int main() {
    char ch;

    printf("Enter the char: ");
    scanf(" %c", &ch); 

    printf("The value of char is %d\n", ch);
    return 0;
}
//task 14
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num = 0;

    printf("Enter ur number: ");
    scanf("%u", &num);

    printf("ur number is %u\n", num);
    return 0;
}
//task 16
#include <stdio.h>

int main() {
    int a = 0; 
    int b = 0;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0){
        printf("%d\n", a % b);
    }else{
        printf("No division on 0\n");
    }
    return 0;
}







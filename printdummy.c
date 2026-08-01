#include <stdio.h>

int main() {
    int num1 = 7;
    int num2 = 10;
    int num3 = -4;
    int num4 = 0;
    int num5 = 6;
    int num6 = 9;
    int num7 = 15;

    if (num1 % 2 == 0) {
        printf("%d is an even number.\n", num1);
    } else {
        printf("%d is an odd number.\n", num1);
        if (num1 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
            }

    if (num2 % 2 == 0) {
        printf("%d is an even number.\n", num2);
    } else {
        printf("%d is an odd number.\n", num2);
        if (num2 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
    }

    if (num3 % 2 == 0) {
        printf("%d is an even number.\n", num3);
    } else {
        printf("%d is an odd number.\n", num3);
        if (num3 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
    }

    if (num4 % 2 == 0) {
        printf("%d is an even number.\n", num4);
    } else {
        printf("%d is an odd number.", num4);
        if (num4 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
    }

    if (num5 % 2 == 0) {
        printf("%d is an even number.\n", num5);
    } else {
        printf("%d is an odd number.\n", num5);
        if (num5 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
    }

    if (num6 % 2 == 0) {
        printf("%d is an even number.\n", num6);
    } else {
        printf("%d is an odd number.\n", num6);
        if (num6 % 2 == 0) {
            printf(" (Also divisible by 3).\n");
        }
    }

    // return (number % 2 == 0);

    if (num7 % 2 == 0) {
        printf("%d is an even number.\n", num7);
    } else {
        printf("%d is an odd number.\n", num7);
        if (num7 % 2 == 0) {
            printf(" (Also divisible by 2).\n");
        }
    }

    return 0;
}



Function_datatype   function_name(arguments)
{
    // Function body: code to perform the task
    return arguments_if_any; // This line is only present if Function_datatype is not 'void�
}


#include <stdio.h>
#include <stdlib.h>

// 1. Check even or odd
void checkEvenOdd() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
}

// 2. Count digits
void countDigits() {
    int number, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        digits = 1;
    } else {
        while (number != 0) {
            number /= 10;
            digits++;
        }
    }
    printf("The number has %d digit(s).\n", digits);
}

// 3. Reverse a number
void reverseNumber() {
    int number, remainder;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0\n");
        return;
    }

    printf("Reversed number: ");
    while (number != 0) {
        remainder = number % 10;
        printf("%d", remainder);
        number /= 10;
    }
    printf("\n");
}

// 4. Sort three numbers
void sortThreeNumbers() {
    int a, b, c;
    int small, middle, large;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if (a < b) {
        small = a;
        large = b;
    } else {
        small = b;
        large = a;
    }

    if (c < small) {
        middle = small;
        small = c;
    } else if (c > large) {
        middle = large;
        large = c;
    } else {
        middle = c;
    }

    printf("Smallest: %d\n", small);
    printf("Middle: %d\n", middle);
    printf("Largest: %d\n", large);
}

// 5. Multiplication table up to N
void multiplicationTable() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table up to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

// 6. Sum of digits
void sumOfDigits() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) number = -number;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

// 7. Average of N numbers
void averageOfNumbers() {
    int n, number;
    float sum = 0;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid count.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;
    }

    printf("Average: %.2f\n", sum / n);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Number Operations Menu ---\n");
        printf("1. Check even or odd\n");
        printf("2. Count number of digits\n");
        printf("3. Reverse a number\n");
        printf("4. Sort three numbers\n");
        printf("5. Multiplication table up to N\n");
        printf("6. Sum of digits\n");
        printf("7. Average of N numbers\n");
        printf("0. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            checkEvenOdd();
            break;
        case 2:
            countDigits();
            break;
        case 3:
            reverseNumber();
            break;
        case 4:
            sortThreeNumbers();
            break;
        case 5:
            multiplicationTable();
            break;
        case 6:
            sumOfDigits();
            break;
        case 7:
            averageOfNumbers();
            break;
        case 0:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

/*
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int r = 0;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Loop to extract and sum the digits of the number
    while (number > 0) {
        // Get the rightmost digit of the number
        r = number % 10;

        // Add the rightmost digit to the sum
        sum = sum + r;

        // Remove the rightmost digit from the number
        number = number / 10;
    }

    // Print the sum of the digits
    printf("The sum is %d\n", sum);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int original = 0; // Variable to store the original input number
    int number;      // Variable to store the input number
    int reverse = 0; // Variable to store the reversed number

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &number);

    original = number; // Store the original number for comparison later

    // Reverse the number and store it in the 'reverse' variable
    while (number > 0) {
        // Extract the rightmost digit of 'number' and add it to 'reverse'
        reverse = reverse + number % 10;

        // Multiply 'reverse' by 10 to shift its digits left
        reverse = reverse * 10;

        // Remove the rightmost digit from 'number'
        number = number / 10;
    }

    // Remove the extra 0 added during reversal
    reverse = reverse / 10;

    // Print the reversed number
    printf("The reverse is %d\n", reverse);

    // Check if the original number is equal to the reversed number
    if (original == reverse) {
        printf("The number is a Palindrome\n");
    } else {
        printf("The number is not a Palindrome\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

// Function to check if a number is prime (returns 1 if prime, 0 otherwise)
int Prime(int number) {
    if (number <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
            return 0; // If it's divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // If no divisor was found, it's prime
}

int main() {
    int number;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the entered number is prime and display the result
    if (Prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Display all prime numbers in the range from 2 to the entered number
    if (number >= 2) {
        printf("Prime numbers in the range from 2 to %d are:\n", number);
        for (int i = 2; i <= number; i++) {
            if (Prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main() {

int number1;
int number2;
    printf("Enter an number1: ");
    scanf("%d", &number1);
    printf("Enter an number2: ");
    scanf("%d", &number2);

printf("The number is %d",number1);
printf("%d\n",number2);
}
*/
/*
#include <stdio.h>

int main() {
    int number;
    printf("Enter an number: ");
    scanf("%d", &number);
    for(int i = 2;i<=number;i=i*2 ){
        if(number%i!=0 ){
            printf("The number %d not is a power of 2 \n",number);
            return 0;
        }

}
    printf("The number %d is a power of 2\n",number);
    //In your program numbers <= 0 are a power of 2
}
*/
/*
#include <stdio.h>

int main() {
    int number1; // Variable to store the first number
    int number2; // Variable to store the second number

    // Prompt the user to enter the first number
    printf("Enter a number1: ");
    scanf("%d", &number1);

    // Prompt the user to enter the second number
    printf("Enter a number2: ");
    scanf("%d", &number2);

    // Print the values of number1 and number2
    printf("The number1 is %d", number1);
    printf("%d\n", number2);

    return 0;
}
*/

#include <stdio.h>

int main() {
    int n, m;         // Variables to store the number of rows and columns
    char symbol;      // Variable to store the character for drawing

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Prompt the user to enter the number of columns
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    // Prompt the user to enter the character to be used for drawing
    printf("Enter the character to be used for drawing: ");
    scanf(" %c", &symbol);  // Note the space before %c to consume any leading whitespace

    // Nested loops to draw a rectangle with the specified dimensions and character
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 || i == n || j == 1 || j == m) {
                // If it's the first row, last row, first column, or last column, print the specified character
                printf("%c", symbol);
            } else {
                // Otherwise, print a space
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row is complete
    }

    return 0;
}

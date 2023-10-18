/*#include <stdio.h>
#include <stdlib.h>

int operation(char x) {
    int num1, num2, result;
    
    printf("Enter an expression (e.g., 3 + 5): ");
    scanf("%d %c %d", &num1, &x, &num2);

    if (x == '+') {
        result = num1 + num2;
    } else if (x == '-') {
        result = num1 - num2;
    } else if (x == '*') {
        result = num1 * num2;
    } else if (x == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero\n");
            exit(1);
        }
        result = num1 / num2;
    } else {
        printf("Error: Invalid operator\n");
        exit(1);
    }

    return result;
}

int main() {
    char operator;
    int result;

    result = operation(operator);
    printf("Result: %d\n", result);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int operation(char x) {
    int num1, num2, result;

    printf("Enter an expression (e.g., 3 + 5): ");
    scanf("%d %c %d", &num1, &x, &num2);

    switch (x) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                exit(1);
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            exit(1);
    }

    return result;
}

int main() {
    char operator;
    int result;

    result = operation(operator);
    printf("Result: %d\n", result);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int grade;

   while (1){
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);
    if (grade ==-1){
        return 0;
    }
    if (grade >= 0 && grade <= 59) {
        printf("Your letter grade is: F\n");

    } else if (grade >= 60 && grade <= 69) {
        printf("Your letter grade is: D\n");

    } else if (grade >= 70 && grade <= 79) {
        printf("Your letter grade is: C\n");

    } else if (grade >= 80 && grade <= 89) {
        printf("Your letter grade is: B\n");

    } else if (grade >= 90 && grade <= 100) {
        printf("Your letter grade is: A\n");

    }

    else {
        printf("Invalid input. Please enter a grade between 0 and 100.\n");
    }

    }

return 0;

}
*//*
#include <stdio.h>

int sum(int N) {
    int result = 0;

    printf("Enter a number (1-1000): ");
    scanf("%d", &N);

    for (int num = 1; num < N; num++) {
        if (num % 3 == 0 || num % 5 == 0) {
            result += num;
        }
    }

    return result;
}

int main() {
    int N, result;

    result = sum(N);
    printf("Result: %d\n", result);

    return 0;
}
*/
/*
#include<stdio.h>
int sum (int num){
	int result = 0;
    	printf("Enter the number ");
    	scanf("%d", &num);
	for(int i =0;i <num;i++){
		
		result =result+ num%10;
		num = num /10;

}
return result;


}
int main (){
	int num, result;

	result=sum (num);
	printf("The sum of the integers is %d\n", result);
	return 0;

}
*//*
#include<stdio.h>
int inverse (int num){
	int result = 0;
	int innum = 0;
    	printf("Enter the number ");
    	scanf("%d", &num);
 while( i < num ) {
        int digit = num % 10;
        result = result * 10 + digit;
        num = num / 10;
    }return result;


}
int main (){
	int num, result;

	result=inverse (num);
	printf("The sum of the integers is %d\n", result);
	return 0;

}*//*
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i*i  <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

void print_primes(int num) {
    printf("Prime numbers from 1 to %d are:\n", num);
    for (int i = 2; i <= num; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive number greater than 1.\n");
        return 1;
    }

    print_primes(num);

    return 0;
}
*/
#include <stdio.h>
/*
int is_palindrome(int num) {
    int result = 0;
    int orig = num;
    int i = 0; 
    while( i < num ) {
        int digit = num % 10;
        result = result * 10 + digit;
        num = num / 10;
    }
   // printf("%d", result);
//	result = result/10;
    if (orig == result) {
        return 1; // It's a palindrome
    } else {
        return 0; // It's not a palindrome
    }
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (is_palindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
*/


/*
#include <stdio.h>
void sum(char a, char b)
{
char result[3];
result[0]=a;
result[1]=b;
result[2]='\0';


printf("The number is %s", result);
}
int main (){
char a;
char b;
    	printf("Enter the first number: ");
    	scanf("%c\n", &a);
	printf("Enter the second number: ");
    	scanf("%c\n", &b);
sum(a,b);



}
*//*
#include <stdio.h>

int main(){
	int a;
	int b;
	printf("Enter the first number:\n ");
    	scanf("%d", &a);
	printf("Enter the second number:\n");
    	scanf("%d", &b);
	printf("the number is %d",a);
	printf("%d\n",b);
	return 0;

}*/

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
 }
*/
/*
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
}*/
/*
#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

   for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

      for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            printf("*"); // Print asterisks
        }
        printf("\n");
}

    return 0;
}*/
/*
#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);
   for (int i = 1; i <= N/2+1; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("*"); // Print asterisks
        }
        printf("\n");
}

       return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num=-1;
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number in the range of 0 to 100
    int random_number = rand() % 101; // This generates a number between 0 and 100
	while(random_number!=num){
    printf("Enter the number\n");
    scanf("%d", &num);
	if (num>random_number){
	printf("The number is lower\n");
	}else if(num<random_number){
	printf("The number is higher\n");

	}
	
}

	printf("Congratulation !!!\n");
    return 0;
}
*/
#include <stdio.h>
/*
int main() {
    int count = 50;
    char sign;
    int result1 = 0;
    int result2 = 100; // Initialize to 100 to cover the upper range

    for (int i = 1; i <= 6; i++) {
        printf("If the number is lower than %d, print '-'\n", count);
        printf("If the number is higher than %d, print '+'\n", count);
        printf("If the number is %d, print '='\n", count);
        scanf(" %c", &sign); // Note the space before %c to consume any leading whitespace

        if (sign == '-') {
            result2 = count - 1;
            count = (result1 + result2) / 2;
        } else if (sign == '+') {
            result1 = count + 1;
            count = (result1 + result2) / 2;
        }
 	 else if (sign == '=') {
            printf("Invalid input. Please use '-' or '+'.\n");
        }       
	else {
            printf("Invalid input. Please use '-' or '+'.\n");
            i--; // Decrement the loop counter to repeat the same turn
        }
    }

    printf("Congratulations! Your number is %d.\n", count);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 numbers:\n");

    // Input 10 numbers
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    int max = numbers[0];

    // Find the minimum and maximum
    for (i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int counts[10] = {0}; // Initialize an array to store the counts
    int number;

    printf("Enter numbers in the range 1-10 (enter -1 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == -1) {
            break; // Exit the loop when -1 is entered
        }

        if (number >= 1 && number <= 10) {
            counts[number - 1]++; // Increment the count for the entered number
        } else {
            printf("Invalid number. Please enter a number between 1 and 10.\n");
        }
    }

    printf("Number counts:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: %d times\n", i + 1, counts[i]);
    }

    return 0;
}

*/

#include <stdio.h>

/*function declaration
	* name		: getBinary
	* Desc		: to get binary value of decimal number
	* Parameter	: int -integer number
	* return	: void
*/
#include <stdio.h>
/*
void getBinary(int n)
{
	for(int i=15; i>=0; i--)
	{
		if( (1 << i) & n)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main()
{
	int num=0;
	printf("Enter an integer number :");
	scanf("%d",&num);
	printf("\nBinary value of %d is =",num);
	getBinary(num);
	return 0;
}

*/
/*
#include <stdio.h>

int main() {
    char binary[32]; // Assuming a maximum of 32-bit binary number
    int decimal = 0;
    int length, i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate the length of the binary number (number of digits)
    length = 0;
    while (binary[length] != '\0') {
        length++;
    }

    // Convert binary to decimal
    for (i = 0; i < length; i++) {
        int bit = binary[i] - '0'; // Convert character '0' or '1' to an integer (0 or 1)
        decimal = decimal * 2 + bit;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int arr[10];
    int N;

    // Input 10 integers for the array
    printf("Enter 10 integers for the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the integer value N
    printf("Enter the integer value N to search and remove: ");
    scanf("%d", &N);

    int found = 0;

    // Search for N in the array and remove the first occurrence
    for (int i = 0; i < 10; i++) {
        if (arr[i] == N) {
            found = 1;

            // Shift elements to the left to remove N
            for (int j = i; j < 9; j++) {
                arr[j] = arr[j + 1];
            }
            arr[9] = 0; // Add a zero at the end
            break;
        }
    }

    // Print the final array
    if (found) {
        printf("After removing the first occurrence of %d:\n", N);
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("%d not found in the array.\n", N);
    }

    return 0;
}
*/
/*
#include<stdio.h>

int main (){
int arr[9];
int n = 0;
printf("How many numbers you want to enter from 1 -10\n");
scanf("%d", &n);
for(int i =0; i<n; i++){
printf("print the %d element \n", i+1);
scanf("%d",&arr[i]);}

printf("The set is");
for(int i = 0; i<n;i++){
 printf(" %d", arr[i]);
}
printf("\n");
printf("The inverse set is");
for(int i=n-1; i>=0;i--){

 printf(" %d", arr[i]);
}

printf("\n");
return 0;

}
*//*
#include <stdio.h>

int main() {
    int arr[10]; // Assuming a maximum of 10 numbers
    int n;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid input. Please enter a positive number between 1 and 10.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int increasing = 1; // Assume increasing order by default
    int decreasing = 1; // Assume decreasing order by default

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            increasing = 0; // Not in increasing order
        } else if (arr[i] < arr[i + 1]) {
            decreasing = 0; // Not in decreasing order
        }
    }

    if (increasing && !decreasing) {
        printf("The numbers are sorted in ascending order.\n");
    } else if (!increasing && decreasing) {
        printf("The numbers are sorted in descending order.\n");
    } else {
        printf("The numbers are not sorted.\n");
    }

    return 0;
}
*//*
#include <stdio.h>

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements if they are out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10]; // Assuming a maximum of 10 numbers
    int n;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid input. Please enter a positive number between 1 and 10.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort in ascending order
    bubbleSortAscending(arr, n);

    printf("Sorted sequence in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in descending order
    bubbleSortDescending(arr, n);

    printf("Sorted sequence in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int arr[10]; 
    int N, M;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Invalid input. Please enter a positive number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to delete (1-based index): ");
    scanf("%d", &M);

    if (M < 1 || M > N) {
        printf("Invalid index. Please enter an index between 1 and %d.\n", N);
        return 1;
    }

    // Delete the M-th element by shifting elements to the left
    for (int i = M - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the count of elements by one
    N--;

    printf("Sequence after deleting the %d-th element:\n", M);
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*//*
#include <stdio.h>

int main() {
    int arr[100]; // Assuming a maximum of 100 numbers
    int N, M, K;

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &N);

    if (N < 0 || N > 100) {
        printf("Invalid input. Please enter a non-negative number between 0 and 100.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert (K): ");
    scanf("%d", &K);

    int choice;

    printf("Choose where to insert (1 for beginning, 2 for end, 3 for M-th place): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Insert at the beginning
        for (int i = N; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = K;
        N++;
    } else if (choice == 2) {
        // Insert at the end
        arr[N] = K;
        N++;
    } else if (choice == 3) {
        // Insert at the M-th place
        printf("Enter the index to insert the element (1-based index): ");
        scanf("%d", &M);

        if (M < 1 || M > N + 1) {
            printf("Invalid index. Please enter an index between 1 and %d.\n", N + 1);
            return 1;
        }

        for (int i = N; i >= M; i--) {
            arr[i] = arr[i - 1];
        }
        arr[M - 1] = K;
        N++;
    } else {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
        return 1;
    }

    printf("Updated sequence:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/


//26,27,28 I did not write.

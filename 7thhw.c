#include <stdio.h>

// Function to reverse the digits of a number
int reverseDigits(int num) {
    int rev_num = 0;
    while (num > 0) {
        // Extract the last digit of num
        int last_digit = num % 10;
        
        // Append the last digit to rev_num
        rev_num = rev_num * 10 + last_digit;
        
        // Remove the last digit from num
        num = num / 10;
    }
    return rev_num;
}

// Driver code (also known as a test driver or main program)
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calculate the reverse of the input number
    int reversed = reverseDigits(num);
    
    // Output the reversed number
    printf("Reverse of %d is %d\n", num, reversed);
    
    return 0;
}


/* We take an integer num as input from the user.
Inside the while loop:
We extract the last digit of num using the modulo(produces the remainder of an integer division) operator (num % 10).
We append the last digit to rev_num by multiplying it by 10 and adding the last digit.
We remove the last digit from num using integer division (num = num / 10).
The loop continues until num becomes 0.
Finally, we print the reversed number.
*/
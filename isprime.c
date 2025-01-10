#include <stdio.h> // Include the standard input/output header file.

void main(){

    int num,i,ctr=0; // Declare variables for user input, loop control, and a counter.

    printf("Input  a number: "); // Prompt the user to input a number.
    scanf("%d",&num); // Read the input number from the user.

    for(i=2;i<=num/2;i++){ // Start a loop to check for factors of the input number.
        if(num % i==0){ // If the input number is divisible by 'i'.
            ctr++; // Increment the counter.
            break; // Exit the loop since a factor has been found.
        }
    }

    if(ctr==0 && num!= 1) // If no factors were found and the number is not 1.
        printf("%d is a prime number.\n",num); // Print that the number is prime.
    else
        printf("%d is not a prime number",num); // Print that the number is not prime.
}
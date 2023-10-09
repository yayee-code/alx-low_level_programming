#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main() {
    int n;
    
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;
    
    printf("The number %d: ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }
    
    printf("\n");
    
    return 0;
}	

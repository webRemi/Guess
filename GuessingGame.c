#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = rand() % 10;
    printf("Welcome to the guessing game!\nFind number between 1 & 10\n");
    for (int i = 0; i < 5; i++) {
        
        int userNumber;
        //printf("Random number: %d\n", randomNumber);
        printf("Enter a number: ");
        scanf("%d", &userNumber);
        if (userNumber == randomNumber) {
            printf("You won!!!");
            break;
        } 
    } 
}
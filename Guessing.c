#include <stdio.h>
#include <time.h>

int main() {
    // define random number and stock in randomNumber
    srand(time(0));
    int randomNumber = rand() % 100;
    // welcome message
    printf("Welcome to the guessing game!\nFind number between 1 & 100\n");
    // initilize number of try before loose
    for (int i = 0; i < 5; i++) {
        // ask for user a number
        int userNumber;
        printf("Enter a number: ");
        scanf("%d", &userNumber);
        // win condition
        if (userNumber == randomNumber) {
            printf("You won!!!\n");
            break;
        // error handling
        } else if (userNumber > 100 || userNumber < 1) {
            printf("You must choose a number between 1 and 100 include!\n");
        // hints for user
        } else if (userNumber > randomNumber) {
            printf("Too big\n");
        } else if (userNumber < randomNumber) {
            printf("Too small\n");
        }
    } 
}
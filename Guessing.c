#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = rand() % 100;
    printf("Welcome to the guessing game!\nFind number between 1 & 100\n");
    for (int i = 0; i < 5; i++) {
        
        int userNumber;
        printf("Enter a number: ");
        scanf("%d", &userNumber);
        if (userNumber == randomNumber) {
            printf("You won!!!\n");
            break;
        } else if (userNumber > 100 || userNumber < 1) {
            printf("You must choose a number between 1 and 100 include!\n");
        } else if (userNumber > randomNumber) {
            printf("Trop grand\n");
        } else if (userNumber < randomNumber) {
            printf("Trop Petit\n");
        }
    } 
}
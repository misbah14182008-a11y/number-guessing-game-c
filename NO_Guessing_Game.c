#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random , guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("Welcome to random number guessing game\n");
    random=rand() %  100+1;
    do{
        printf("Please enter your guess number between 0 to 100 : \n");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random){
            printf("Guess a larger number\n");
        }
        else if(guess > random){
            printf("Guess a smaller number\n");
        }
        else{
            printf("Congrats!!! U have guessed a correct number in %d attempt",no_of_guess);
        }
    }while(guess!=random);
    return 0;
}
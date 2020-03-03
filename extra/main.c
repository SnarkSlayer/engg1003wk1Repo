#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* compare(int gues, int num);
int change(int num);

srand(time_t);

int main()
{
    //Rules:
    printf("Rules of this game:\n");
    printf("- guess the number (integers only)\n");
    printf("- it's always between 0 and 100\n");
    printf("- you have 20 attempts\n");
    printf("- the number may change each turn\n");
    printf("- you will receive hints\n\n");
    printf("Ok...Go!\n");
    //Initial vars
    int finished = 1;
    int number = rand() % 101;
    int lives = 20; //change
    char* response;
    //Game loop
    while(finished) {
        //Input
        printf("\nEnter your guess: ");
        int guess;
        scanf("%d", &guess);
        //Process/Output
        response = compare(guess, number);
        if (response == "Win") {
            printf("\n\n\nCongrats! You won! God job :)\nHope you had fun I guess...");
            finished = 0;
        } else {
            printf("\n\nYou're currently %s", response);
            lives -= 1;
            number = change(number);
        }
    }
    return 0;
}

char* compare(int gues, int num) {
    //Checks how close the guess was
    if (gues == num) {
        return "Win";
    } else if (gues < num + 8 && gues > num - 8) {
        return "Hot";
    } else if (gues < num + 25 && gues > num - 25) {
        return "Warm";
    } else {
        return "Cold";
    }
}

int change(int num) {
    //Randomly changes number... or not
    int randnum = (rand() % 3) - 1;
    if (randnum != 0) {
        printf("\nThe number has changed!\n");
    }
    num += randnum;
    //Make sure number dosn't fall out of bounds
    switch (num) {
    case -1:
        num = 0;
        break;
    case 101:
        num = 100;
        break;
    }
    return num;
}



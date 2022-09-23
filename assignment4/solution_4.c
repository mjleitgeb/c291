#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkCraps();

int main(void){
    char answer;
    printf("Would you like to play a game of craps/? Type y for yes or n for no:");
    scanf("%c", &answer);
    if(answer=='y')
         checkCraps();
    }

void checkCraps()
{
    int rollDice(int a, int b);
    srand(time(NULL));

    int die_1;
    int die_2;
    int die_3;
    int die_4;
    int first_roll;
    int second_roll;

    die_1=rollDice(1,6);
    die_2=rollDice(1,6);
    first_roll=die_1 + die_2;
    printf("You rolled a %d\n",first_roll);

    if(first_roll==7 || first_roll==11)
        {
            printf("You Win!\n");
            return;
        }
    else if(first_roll==2 || first_roll==3 || first_roll==12){
            printf("You Lose\n");
            return;
        }
    else{
            do{
                die_3=rollDice(1,6);
                die_4=rollDice(1,6);
                second_roll=die_3 + die_4;
                printf("You rolled a %d\n",second_roll);
                if(second_roll==first_roll){
                     printf("You Win");
                     return;
                 }
            }while(second_roll != 7);
        printf("You Lose");
        }
}
int rollDice(int x, int y)
{
    return rand()%(y-x+1)+x;
}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\n\n||---------------------------------WELCOME-TO-GUESS-THE-NUMBER--------------------------------||\n\n");

    int r, guess, max_lim, exit;
    int tries=0, rounds=0, wins=0;

    // max limit input
    do {
        printf("Enter the maximum limit for the guess (minimum limit is 0): ");
        scanf("%d", &max_lim);
    } while (max_lim<1);

    // tries
    do {
        printf("Enter the maximum tries: ");
        scanf("%d", &tries);
    } while (tries<1);


    while (1) 
    {
        printf("\n\n||----------------------------------------GAME-STARTS----------------------------------------||\n\n");

        // random number 
        srand(time(NULL));
        r = rand() % max_lim+1;

        for (int i=0; i<tries; i++)
        {
            printf("Guess the number: ");
            scanf("%d", &guess);

            if (guess==r)
            {
                printf("\n>>> Congrats! You guessed it correct!\n>>> GAME WON!\n");
                wins++;
                printf("\n\n||-------------------------------------------------------------------------------------------||\n\n");
                break;
            }
            else if (i+1==tries)
            {
                printf("\n>>> seems like u ran out of tries! \n>>> GAMEOVER! \n>>> Good Luck next time\n");
            }
            else
            {
                printf("\n>>> wrong guess!\n>>> try again!");
            }
            printf("\n\n||-------------------------------------------------------------------------------------------||\n\n");
        }

        // exit
        printf("\nType 1 to exit: ");
        scanf("%d", &exit);

        if (exit==1)
        {
            break;
        }
        rounds++;
    }

    printf("\n\n||---------------------------------------------STATS-----------------------------------------||\n\n");
    printf(">>> Stats:\n>>> rounds played: %d\n>>> rounds won: %d\n", rounds, wins);
    printf(">>> Always welcome to playagain!\n");

    return 0;
}

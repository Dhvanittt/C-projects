#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // to generate random number between 1 to 100

    int guess, nguesses=1;

        printf("guess the number b/w 1 to 100 : ");
        scanf("%d", &guess);
    do
    {
        if (guess > number)
        {
            printf("please guess lower number : ");
            scanf("%d", &guess);
        }

        if (guess < number)
        {
            printf("Please guess higher number : "); 
            scanf("%d", &guess);
        }

        if(guess == number)
        {
            printf("You Guessed the right number in %d attempts!!\n", nguesses);
        }
        nguesses++;
        
    } while (guess != number);

    return 0;
}
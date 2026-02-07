// Creating a number guessing game between 1 to 100.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));

    int random_no = (rand() %100) + 1;
    int no_of_guesses = 0;
    int guessed_no;

    do 
    {
        printf("Guess the number : ");
        scanf("%d", &guessed_no);

        if(guessed_no>random_no)
        {
            printf("Lower number please.\n");
        }
        else if(guessed_no<random_no) 
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("Congrats!\nThe number was %d\n", random_no);
        }
        no_of_guesses++;
    }while(guessed_no!=random_no);

    printf("You guessed the number in %d attempts.", no_of_guesses);

    return 0;
}

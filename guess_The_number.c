#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,nguess=1;
    srand(time(0));
    num=rand()%1000+1;
    do
    {
        printf("guess the number between 1 to 1000 \n");
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("lower number please!\n");
        }
        else if(guess<num)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guessed the number correct in %d attempts",nguess);
        }
        nguess ++;
    }while(guess!=num);

    return 0 ;
}
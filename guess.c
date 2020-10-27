#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number=rand()%10 +1;
   //8 printf("the number is %d",&number);
    do{
        printf("guess the number between 1 and 10\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("enter lower number\n");
        }
        else if(guess<number){
            printf("enter greater number\n");
        }
        else{
            printf("you guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
        
    }
    while(guess!=number);

}
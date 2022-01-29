#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n , guess , nguess=1 ; 
    srand(time(0));
    n  =  rand()%100 +1 ;
    
    do{
        printf("guess the number \n");
scanf("%d",&guess);
if (guess == n )
    printf("you guess the correct number  %d times \n",nguess);

else if (guess < n )
     printf("higher number please !!\n");
else {
         printf("lower  number please !!\n");
}
nguess++;
    }while(guess != n );
}
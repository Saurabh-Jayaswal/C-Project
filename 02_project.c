#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int func(char you, char comp)
{
    if (you == comp)
        return 0;
    if (comp == 'p' && you == 'S')
        return 1;
    else if (comp == 's' && you == 'S')
        return -1;
    if (comp == 'p' && you == 's')
        return -1;
      else   if (comp == 'S' && you == 's')
        return 1;
        if (comp == 's' && you == 'p')
        return 1;
      else   if (comp == 'S' && you == 'p')
        return -1;

}
int main()
{    printf("\n\n\n\n\n\t\t\t\t\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*##\n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n");
    printf("\t\t\t\t\t\t#\t  ! GAME !\t\t# \n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n ");
    printf("\t\t\t\t\t\t#\t STONE ,PAPER ,SCISSOR\t# \n\t\t\t\t\t\t#\t\t\t\t#\n\t\t\t\t\t\t#\t\t\t\t#\n");
    printf("\t\t\t\t\t\t#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*##\n");
    printf("\t\tpress any key to continue.........");
    getch();
    system("cls");
    int n;
    char you, comp, result;
    srand(time(0));
    n = rand() % 100 + 1;
    if (n < 33)
        comp = 's';
    else if (n > 33 && n < 66)
        comp = 'p';
    else
        comp = 'S';
    printf("chosse  s for 'stone' , p for 'paper' , S for scissor \n ");
    scanf("%c", &you);

    result = func(you, comp);
    printf("you = %c and computer = %c",you , comp);

    if (result == 0 )
    printf("\t\t!GAME DRAW !\n");
   else  if (result == 1 )
    printf("\t\t!YOU WIN !\n");
     else 
    printf("\t\t!YOU LOSE !\n");

    return 0;
}
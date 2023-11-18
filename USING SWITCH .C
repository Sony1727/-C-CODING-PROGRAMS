#include <stdio.h>

int main()
{
    int choice;
    printf("1 for POROTTA\n2 for MANDI\n3 for FRIEDRICE\n4 for CB\n ENTER YOUR CHOICES");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you have selected POROTTA");
        break;
case 2:
printf("You have selected MANDI");
break;
case 3:
printf("You have selected FRIEDRICE");
break;
case 4:
printf("You have selected CB");
break;
default:
printf("NOTHING MANNNNN!!!!!!!!!!!!!!!!!");
    return 0;
}
}

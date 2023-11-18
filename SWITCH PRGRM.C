#include <stdio.h>

int main()
{
    int days,choice;
    printf("Enter the day");
    scanf("%d",&days);
    printf("1 for MONDAY\n2 for TUESDAY\n3 for WEDNESDAY\n4 for THURSDAY\n5 for FRIDAY,enter your choices");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
        printf("YOU HAVE SELECTED MONDAY");
        break;
         
         case 2:
         printf("YOU HAVE SELECTED TUESDAY");
         break;
         
         case 3:
         printf("YOU HAVE SELECTED WEDNESDAY");
         break;
         
         case 4:
         printf("YOU HAVE SELECTED THURSDAY");
         break;
         
         case 5:
         printf("YOU HAVE SELCTED FRIDAY");
         break;
         
         default:
         printf("INVALID ENTRY");
        
        
    }
    return 0;
}

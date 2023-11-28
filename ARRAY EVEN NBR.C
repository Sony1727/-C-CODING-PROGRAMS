#include <stdio.h>

int main()
{
    int size,array[100],i;
    printf("enter the  size of an array :");
    scanf("%d",&size);
    
    printf("enter the values :");
for(i=0;i<size;i++)
{
    scanf("%d",&array[i]);
}
 
 printf("No: of even nbrs in given array");
 for(i=0;i<size;i++)
 {
     if(array[i]%2==0)
        {
            printf("%d ", array[i]);
        }
 }
    return 0;
}

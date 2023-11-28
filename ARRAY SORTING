#include <stdio.h>

int main()
{
    int i,j,limit,values[100],temp;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("enter the values:");
    for(i=0;i<limit;i++){
     scanf("%d",&values[i]);   
    }

for(i=0;i<limit;i++){
    for(j=i+1;j<limit-1;j++){
        if(values[i]>values[j])
{
    temp=values[i];
    values[i]=values[j];
    values[j]=temp;
    
}
        
}
}
printf("sorted array:");
for(i=0;i<limit;i++){
    printf("%d\t",values[i]);
}
    return 0;
}

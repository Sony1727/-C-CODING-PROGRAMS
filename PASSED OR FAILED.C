#include <stdio.h>

int main()
{
    float mark;
    printf("Enter the marks");
    scanf("%f",&mark);
    if(mark<50)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
    return 0;
}

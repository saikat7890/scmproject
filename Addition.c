#include <stdio.h>
int main()
{
    int i,sum =0;
    printf("Enter your number:");
    scanf("%d",&i);

    printf("The first %d natural number is:\n",i);
    for(int j =1; j<=i; j++)
    {
        sum = sum +j;
        printf("%d",j);
    }
    printf("\nThe Sum is : %d\n", sum);
    printf("Sum was printed");
    return 0;
}

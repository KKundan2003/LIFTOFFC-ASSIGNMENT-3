#include <stdio.h> 
int checkOddEven(int n1)
{   
    return (n1 & 1);
}

int main()
{
    int n1;
	printf(" Function : check the number is even or odd:");   
    printf("Input any number : ");
    scanf("%d", &n1);

     if(checkOddEven(n1))
    {
        printf("The entered number is odd");
    }
    else
    {
        printf("The entered number is even");
    }
    return 0;
}

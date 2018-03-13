#include <stdio.h>
void main()
{
    int n, reversedNum = 0, remain;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNum*10 + remain;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNum);

}

#include <stdio.h>
int main()
{
    int decimalNumber,rem,i = 1,octalNumber = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    while(decimalNumber != 0) 
    {
        rem = decimalNumber % 8;          
        octalNumber += rem * i;           
        decimalNumber /= 8;                     
        i *= 10;                              
    }
    printf("Octal equivalent: %d\n", octalNumber);
    return 0;
}

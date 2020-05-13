#include <stdio.h>
#include <stdlib.h>

int factorial_calculate(int number_uno);

int main()
{
    int number_uno, factorial;
    printf("Enter a number: ");
    scanf("%i",&number_uno);

    factorial = factorial_calculate(number_uno);
    printf("The result is: %i",factorial);
    return 0;
}

int factorial_calculate(int number_uno){
    int factorial = 1 ;
    for(int i = 1; i <= number_uno; i++){
            factorial *=  i;

    }

    
return factorial;
}
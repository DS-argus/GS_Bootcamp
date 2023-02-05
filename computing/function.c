#include <stdio.h>

int Factorial(int);

int main(void){
    int number;
    int answer;
    
    printf("Input a number: ");
    scanf("%d", &number);

    answer = Factorial(number);
    
    printf("The Factorial of %d is %d\n", number, answer);

    return 0;
}


 int Factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
 }
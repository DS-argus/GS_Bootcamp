#include <stdio.h>

int Find_GCD(int, int);

int main(void){

    int result;
    int a, b;

    printf("Input a first number: ");
    scanf("%d", &a);

    printf("Input a second number: ");
    scanf("%d", &b);

    result = Find_GCD(a ,b);
    
    printf("%d\n", result);

    return 0;
}

int Find_GCD(int a, int b){

    if(a % b == 0){
        return b;
    }

    return Find_GCD(b, a % b);

}
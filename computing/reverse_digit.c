#include <stdio.h>

void swap(int *a, int *b);
void reverse_dig(int *a);
void reverse_dig_ans(int *a);


int main(void){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
   
    printf("Enter second number : ");
    scanf("%d", &b);
  
    printf("Original value\t a = %d, b = %d\n", a, b);
    
    swap(&a, &b);
    // reverse_dig(&a);
    // reverse_dig(&b);
    reverse_dig_ans(&a);
    reverse_dig_ans(&b);

    printf("Final value\t a = %d, b = %d\n", a, b);

    return 0;
}


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_dig_ans(int *a){
    int tmp = *a;
    int r = 0;
    int ans = 0;

    while (tmp > 0)
    {
        r = tmp % 10;
        ans = ans * 10 + r;
        tmp = tmp / 10;
    }

    *a = ans;
}

void reverse_dig(int *a){
    
    int divisor = 10;
    int result = 0;

    int digit = 1;

    while(*a > divisor){
        digit += 1;
        divisor *= 10;
    }

    divisor = 1;
    int last = 1;
    for (int i = 1; i < digit; i++)
    {
        last *= 10;
    }

    for (int i = 0; i < digit; i++)
    {
        int val = (*a % (10 * divisor)) / divisor;
        *a -= val;
        divisor *= 10;
        result += last * val;
        last /= 10;
    }

    *a = result;
    
}
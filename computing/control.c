#include <stdio.h>
#include <stdbool.h>

void EX_if(void);
void EX_while(void);
void EX_dowhile(void);
void EX_for(void);
void EX_nestedLoop(void);
void Practice1(void);
void Practice1_ans(void);
void Practice2(void);
void Practice3(void);

int main(void){
    // EX_if();
    // EX_while();
    // EX_dowhile();
    // EX_for();
    // EX_nestedLoop();
    // Practice1();
    // Practice1_ans();
    // Practice2();
    Practice3();

    return 0;
}

void Practice3(void){
    /*
    Simple calculator
    */
   int operand1, operand2;
   int result = 0;
   char operation;

   printf("Enter first operand : ");
   scanf("%d", &operand1);
   
   printf("Enter operation to perform(+, -, *, /) : ");
   scanf("\n%c", &operation);

   printf("Enter second operand : ");
   scanf("%d", &operand2);

   switch(operation){
    case '+':
        result = operand1 + operand2;
        break;

    case '-':
        result = operand1 - operand2;
        break;

    case '*':
        result = operand1 * operand2;
        break;

    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
        }else{
            printf("Invalid operation\n");
            return;
        }
        break;

    default:
        printf("Invalid operation!");
        return;
   }
   
    printf("The answer is %d\n", result);
}


void Practice2(void){
    /*
    Prime Factorization
    Input : 54
    Output : (2, 1)(3, 3)
    Explanation : 2**1 * 3**3
    */ 

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("(%d, %d)", num, num);
    }
    
    int i = 2;

    while (num > 1)
    {
        if(num % i == 0)
        {
            int count = 0;
            while (num % i == 0)
            {
                num /= i;
                count += 1;
            }
            
            printf("(%d, %d) ", i, count);
        }

        i++;
    }
    printf("\n");
}



void Practice1_ans(void){
    bool prime = true;

    for (int num = 0; num <= 100; num++)
    {
        prime = true;

        for (int divisor = 2; divisor <= 10; divisor++)
        {
            if (((num % divisor) == 0) && num != divisor)
            {
                prime = false;
            }
        }
        
        if (prime)
        {
            printf("The number %d is prime\n", num);
        }
    }
}

void Practice1(void){
    // Print prime number less that 100
    for (int i = 1; i < 100; i++)
    {   
        if(i == 1){
            printf("The number %d is prime\n", i);
            continue;
        }

        int count = 0;
        
        for (int j = 1; j <= i; j++)
        {
            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            printf("The number %d is prime\n", i);
        }
    }
    printf("\n");
}

void EX_nestedLoop(void){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", i * j);
        }

        printf("\n");
    }
}

void EX_for(void){
    for (int x = 2; x < 25; x++)
    {
        printf("%d ", x);
    }
    printf("\n");
    
}

void EX_dowhile(void){
    int x = 0;
    do{
        printf("%d ", x);
        x++;
    }while(x<10);
    printf("\n");
}

void EX_while(void){
    int x = 0;
    while(x<10){
        printf("%d ", x);
        x++;
    }
    printf("\n");
}


void EX_if(void){
    int month;
    printf("Enter the number of the month: ");
    scanf("%d", &month);

    if(month == 4 || month ==6 || month == 9 || month == 11){
        printf("The monthe has 30 days\n");
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        printf("The month has 31days\n");
    }else if(month == 2){
        printf("The month has 28days\n");
    }else{
        printf("Don't know that month\n");
    }
}


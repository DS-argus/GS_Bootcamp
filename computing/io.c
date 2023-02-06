#include <stdio.h>

int main(void){
    char c1;
    char c2;
    
    printf("Input char1:\n");
    c1 = getchar();

    printf("Input char2:\n");
    c2 = getchar();

    printf("char1 is %c and char2 is %c\n", c1, c2);
    
    return 0;
}
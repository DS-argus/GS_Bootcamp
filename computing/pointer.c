#include <stdio.h>

void swap(int* firstVal, int* secondVal);

int main(void){
    int valA = 7;
    int valB = 5;
    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);

    swap(&valA, &valB);

    printf("After Swap: valA = %d, valB = %d\n", valA, valB);
    
    return 0;
}

void swap(int* firstVal, int* secondVal){
    int tempVal;
    tempVal = *firstVal;
    *firstVal = *secondVal;
    *secondVal = tempVal;

    printf("In Swap: firstVal = %d, secondVal = %d\n", *firstVal, *secondVal);
}
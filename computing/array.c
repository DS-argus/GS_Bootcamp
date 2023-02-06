#include <stdio.h>
#define NUM_STUDENTS 5

int main(void){
    int midterm[NUM_STUDENTS];
    int final[NUM_STUDENTS];
    int total[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Input midterm score for student %d: ", i);
        scanf("%d", &midterm[i]);
        printf("Input final score for student %d: ", i);
        scanf("%d", &final[i]);
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        total[i] = midterm[i] + final[i];
    }
    
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Total score for Student %d is %d\n", i, total[i]);
    }
    
    return 0;
}
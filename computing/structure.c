#include <stdio.h>
#define STUDENT_NUMS 5

struct studentType{
    char name[50];
    int ID;
    int midterm;
    int final;
    int total;
};

typedef struct studentType Student;

void calculateTotal(Student *s);

int main(void){
    Student s[STUDENT_NUMS];

    for (int i = 0; i < STUDENT_NUMS; i++)
    {
        printf("Input for Student #%d\n", i);

        printf("\tname: ");
        scanf("%s", s[i].name);

        printf("\tID: ");
        scanf("%d", &s[i].ID);

        printf("\tmidterm: ");
        scanf("%d", &s[i].midterm);

        printf("\tfinal: ");
        scanf("%d", &s[i].final);
    }

    for (int i = 0; i < STUDENT_NUMS; i++)
    {
        calculateTotal(&s[i]);
    }
    
    for (int i = 0; i < STUDENT_NUMS; i++)
    {
        printf("Total score for student #%d(%s) is %d\n", i, s[i].name, s[i].total);
    }
    
    return 0;
}

void calculateTotal(Student *s){
    s->total = s->midterm + s->final;
}
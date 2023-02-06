#include <stdio.h>
#define MAX_NUMS 5

int Average(int inputValues[]);
void Average_Cal(void);
void MultiArray(void);
void selection_sort(int L[], int size);
void reverse_array_noptr(int L[], int size);
void reverse_array_ptr(int L[], int size);


int main(void){
    // Average_Cal();

    // MultiArray();

    // Selection sort practice
    int L[9] = {5, 2, 7, 5, 5, 2, -10, 34, 131};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", L[i]);
    }
  
    printf("\n");

    // selection_sort(L, size);
    // reverse_array_noptr(L, size);
    reverse_array_ptr(L, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", L[i]);
    }

    printf("\n");
    
}

void reverse_array_ptr(int L[], int size){
    int *p1, *p2;

    // 1
    p1 = &L[0];
    p2 = &L[size - 1];
    
    // 2 
    // p1 = L;
    // p2 = L + size - 1;

    while (p1 < p2)
    {
        int temp = *p2;
        *p2 = *p1;
        *p1 = temp;
        
        p1 += 1;
        p2 -= 1;
    }
    
}


void reverse_array_noptr(int L[], int size){
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = L[i];
    }

    for (int i = 0; i < size; i++)
    {
        L[size - i - 1] = temp[i]; 
    }    

}



void selection_sort(int L[], int size){
    for (int i = 0; i < size; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < size; j++)
        {
            if (L[j] < L[smallest])
            {
                smallest = j;
            }            
        }
        
        int temp = L[smallest];
        L[smallest] = L[i];
        L[i] = temp;        
    }
    
}

void MultiArray(void){
    int marray[9][10];

    for (int i = 0; i < 90; i++)
    {
        // *(marray[0] + i) = i;
        *(&(marray[0][0]) + i) = i;
    }
    
    for (int i = 0; i < 90; i++)
    {
        printf("%d\n", marray[0][0] + i );
    }
    
}

void Average_Cal(void){
    int mean;
    int nums[MAX_NUMS];


    printf("Enter %d nums, \n", MAX_NUMS);
    for (int i = 0; i < MAX_NUMS; i++)
    {
        printf("Input num %d: ", i);
        scanf("%d", &nums[i]);
    }

    mean = Average(nums);
    printf("The average of these nums is %d\n", mean);

}

int Average(int inputValues[]){
    int sum = 0;

    for (int i = 0; i < MAX_NUMS; i++)
    {
        sum += inputValues[i];
    }
    
    return (sum / MAX_NUMS);
}
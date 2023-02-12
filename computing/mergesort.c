#include <stdio.h>

void merge(int *array, int first, int mid, int last){
    int k = first;

    int sub1[mid+1-first];
    for (int i = first; i < mid+1; i++)
    {
        int temp = array[i];
        sub1[i] = temp;
    }

    int sub2[last-mid];
    for (int i = mid+1; i < last+1; i++)
    {
        int temp = array[i];
        sub2[i] = temp;
    }
    
    int i = 0, j = 0;

    while (i < mid+1-first && j < last-mid)
    {
        if (sub1[i] <= sub2[j])
        {
            int temp = sub1[i];
            array[k] = temp;
            i++;
        }else{
            int temp = sub2[j];
            array[k] = temp;
            j++;
        }
        k++;
    }
    
    if (i < mid+1-first)
    {
        for (int m = k; m < last+1; m++)
        {
            int temp = sub1[i];
            array[m] = temp;
            i++;
        }
    }else if(j < last-mid){
        for (int m = k; m < last+1; m++)
        {
            int temp = sub2[j];
            array[m] = temp;
            j++;
        }
    }

    return;
}

void mergeSortHelp(int *array, int first, int last){
    if(first == last){
        return;
    }

    int mid = (first + last) / 2;

    mergeSortHelp(array, first, mid);
    mergeSortHelp(array, mid+1, last);

    merge(array, first, mid, last);

    return;

}

void mergeSort(int *array){
    mergeSortHelp(array, 0, 8);
    return;
}

int main(void){
    int array[9] = {4, 7, 3, 1, -5, 6, 9 ,3, 100};

    mergeSort(array);

    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
    return 0;
}


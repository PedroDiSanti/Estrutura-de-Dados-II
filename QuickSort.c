#include <stdio.h>

void quicksort(int [10], int, int);

void quicksort(int x[10],int first,int last)
{   
    int i;
    int j;
    int pivot;
    int temp;

    if(first < last){
        pivot = first;
        i = first;
        j = last;
        while(i < j){
            while(x[i] <= x[pivot] && i < last){
                i++;
            }
            while(x[j] > x[pivot]){
                j--;
            }
            if(i < j){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }

        temp = x[pivot];
        x[pivot] = x[j];
        x[j] = temp;
        quicksort(x, first, j-1);
        quicksort(x, j+1, last);
    }
}


int main()
{
    int i;
    int size;
    int x[20];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(i = 0;i < size; i++){
        scanf("%d", &x[i]);
    }
        
    quicksort(x,0,size-1);

    printf("Sorted elements: ");
    for(i = 0;i < size; i++){
        printf(" %d",x[i]);
    }
        
    return 0;
}

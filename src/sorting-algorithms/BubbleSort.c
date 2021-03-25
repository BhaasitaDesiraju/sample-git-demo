// Bubble Sort in C
#include <stdio.h>

void bubbleSort(int data[], int size){
    for(int step=0; step<size-1; ++step){
        for(int i=0; i<size-step-1; ++i){
            // To sort in descending order, change > to <.
            if (data[i]>data[i+1]){
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1]= temp;
            }
        }
    }
}
void printArray(int data[], int size){
    for(int i=0; i<size; ++i){
        printf("%d  ", data[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {-4, 35, 1, 10, -8};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSortImproved(data, size);
    printf("Sorted array in ascending order:\n");
    printArray(data, size);
}
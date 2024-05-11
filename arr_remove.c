#include<stdio.h>
void printdata(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int arr[], int size, int index){
    
        for (int i = index; i < size; i++) {
            arr[i]= arr[i + 1] ; 
        }
        size-=1;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[100] = {1, 2, 5, 3, 4}; 
    int size = 5;
    int index =2;

    printdata(arr, size);
    delete(arr, size, index);
    printArray(arr, size);

    return 0;
}
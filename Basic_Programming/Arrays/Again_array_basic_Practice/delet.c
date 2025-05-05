#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10}; 
    int size = 5;
    int positionToDelete = 2;

    
    for(int i = positionToDelete; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }

    size--;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

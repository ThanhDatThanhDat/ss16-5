#include <stdio.h>

void update(int arr[], int value, int position) {
    arr[position] = value;  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    update(arr, 10, 2);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

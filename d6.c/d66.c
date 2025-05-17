#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int avg = sum / size;

    printf("Length: %d\n", size);
    printf("Average: %d\n", avg);

    return 0;
}

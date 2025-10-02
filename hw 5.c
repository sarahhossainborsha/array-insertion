//Insert only if array is not full


#include <stdio.h>
#define SIZE 5
int main() {
    int arr[SIZE], n, i, value;

    printf("Enter number of elements (max %d): ", SIZE);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n == SIZE) {
        printf("Array is full. Cannot insert new element.\n");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &value);

        arr[n] = value;
        n++;

        printf("Array after insertion: ");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

//Insert an element at the beginning of an array.

#include <stdio.h>

int main() {
    int ar[100], s, i, value;

    printf("Enter number of elements(max 100): ");
    scanf("%d", &s);

    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++) {
        scanf("%d", &ar[i]);
    }

    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    for(i = s; i > 0; i--) {
        ar[i] = ar[i - 1];
    }
    ar[0] = value;
    s++;

    printf("Array after insertion: ");
    for(i = 0; i < s; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}

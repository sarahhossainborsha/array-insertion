//Insert only if value not already present

#include <stdio.h>

int main() {
    int ar[100], s, i, value, found = 0;

    printf("Enter number of elements(max 100): ");
    scanf("%d", &s);

    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++) {
        scanf("%d", &ar[i]);
    }

    printf("Enter value to insert if not present: ");
    scanf("%d", &value);


    for(i = 0; i < s; i++) {
        if(ar[i] == value) {
            found = 1;
            break;
        }
    }

    if(!found) {
        ar[s] = value;
        s++;
        printf("Value inserted.\n");
    } else {
        printf("Value already exists, not inserted.\n");
    }

    printf("Array: ");
    for(i = 0; i < s; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}


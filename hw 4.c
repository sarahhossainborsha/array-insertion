//Insert multiple elements at once

#include <stdio.h>

int main() {
    int ar[100], s, i, m;

    printf("Enter number of elements(max 100): ");
    scanf("%d", &s);

    printf("Enter %d elements:\n", s);
    for(i = 0; i < s; i++) {
        scanf("%d", &ar[i]);
    }

    printf("How many new elements to insert? ");
    scanf("%d", &m);

    printf("Enter %d new elements:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &ar[s + i]);
    }
    s += m;

    printf("Array after inserting multiple elements: ");
    for(i = 0; i < s; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("element %d found at index %d\n", key, i);
            break;
        }
    }

    if(found == 0) {
        printf("element %d not found\n", key);
    }

    return 0;
}

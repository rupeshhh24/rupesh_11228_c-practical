#include <stdio.h>

int main() {
    int n = 5;                 
    int arr[n];              
    int i;

    printf("enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);  
    }

    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

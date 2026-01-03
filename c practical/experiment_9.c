#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);    

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    printf("maximum = %d\n", max);

    return 0;
}

#include <stdio.h>
int main() {
    float radius, area;
    const float PI = 3.14159;

    printf("enter radius: ");
    scanf("%f", &radius);                 

    area = PI * radius * radius;          

    printf("area of circle = %.2f\n", area);

    return 0;
}

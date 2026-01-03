#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("enter first number: ");
    scanf("%f", &num1);

    printf("enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1/num2;
            else {
                printf("error: division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Invalid\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50];
    
    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);  

  
    printf("Length of first string: %lu\n", strlen(str1));

   
    strcpy(str3, str1);
    printf("After copying, str3 = %s\n", str3);

   
    strcat(str1, str2);
    printf("After concatenation, str1 = %s\n", str1);

    
    if(strcmp(str2, str3) == 0) {
        printf("str2 and str3 are equal\n");
    } else {
        printf("str2 and str3 are not equal\n");
    }

    return 0;
}

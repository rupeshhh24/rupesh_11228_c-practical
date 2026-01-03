#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[50];
    int length, result;

    
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    
    length = strlen(str1);
    printf("\nLength of first string = %d", length);


    strcpy(str3, str1);
    printf("\nCopied string (str3) = %s", str3);

    
    strcat(str1, str2);
    printf("\nConcatenated string = %s", str1);

    
    result = strcmp(str1, str2);

    if(result == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    return 0;
}

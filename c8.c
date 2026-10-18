#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char reverse_str[50];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

   
    for (i = 0; i < len; i++) {
        reverse_str[i] = str[len - 1 - i];
    }
    reverse_str[len] = '\0'; 

    printf("The opposite string is: %s\n", reverse_str);

    
    if (strcmp(str, reverse_str) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
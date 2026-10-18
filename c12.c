#include <stdio.h>
#include <string.h>


int length_including(char *ptr) {
    int count = 0;
    while (*ptr != '\0') { 
        count++;
        ptr++; 
    }
    return count;
}


int length_excluding(char *ptr) {
    int count = 0;
    while (*ptr != '\0') {
        if (*ptr != ' ' && *ptr != '\n') { 
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {
    char str[60];
    
    printf("Enter your string: ");
    
    fgets(str, sizeof(str), stdin);

    int inc = length_including(str);
    int exc = length_excluding(str);

   
    printf("Length (including spaces): %d\n", inc - 1); 
    printf("Length (excluding spaces): %d\n", exc);

    return 0;
}
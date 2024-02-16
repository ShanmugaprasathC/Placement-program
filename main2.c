#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverseString(char *str) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        if (!isalnum(str[left])) {
            left++;
        } else if (!isalnum(str[right])) {
            right--;
        } else {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
           left++;
            right--;
        }
    }
}

int main() {
    char str[] = "A*P*P&L E";
    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}


#include <stdio.h>

int main(void) {
    int i,j;
    char str[10] = "gree";
    char str1[10] = "en";
    
    for ( i = 0; str[i] != '\0'; i++)
    {}
    if(str[i - 1] == str1[0])
        {
            for (j = 1; str1[j] != '\0'; j++)
            {
                str[i] = str1[j];
                i++;
            }
        }
    
    printf(" %s ",str);
    return 0;
}
Splitting Strings and swapcase
Input: doYouKnowThat
Output:
DO
yOU
kNOW
tHAT
----------------
  #include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (i > 0 && isupper(str[i])) {
            printf("\n");
        }
        printf("%c", islower(str[i]) ? toupper(str[i]) : tolower(str[i]));
    }
    
    return 0;
}

#include <stdio.h>
int strStr(char* str1, char* str2) {
    int idx1 = 0;
    int idx2 = 0;
    while (str1[idx1] != '\0') {
        if(str1[idx1] == str2[idx2]) {
            ++idx1;
            ++idx2;
            
        if (str2[idx2] == '\0') {
            return idx1 - idx2;
        }
        } else {
        idx1 = idx1 - idx2 + 1;
        idx2 = 0;
    }
    }
    return -1;
}
int main() {
    char* haystack = "ygvssadandsaad";
    char* needle = "sad";
    int idx = strStr(haystack, needle);
    printf("%d",idx);
}

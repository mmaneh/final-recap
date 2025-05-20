#include <stdio.h>

const char *mystrchr(const char* str, char c) {
	while(*str != '\0') {
		if (*str == c) return str;
		++str;
	}
	return NULL;
}

int mystrlen(const char* str) {
	int count = 0;
	while (*str != '\0') {
		++count;
		++str;
	}
	return count;
}
char* mystrcat(char* dest, char* src) {
	char * ptr = dest;
	while (*dest) {
		++dest;
	}
	while (*src){
		*dest = *src;
	        ++dest;
		++src;	
	}
	*dest = '\0';
	return ptr;
}

char* mystrcpy(char* dest, const char* src) {
	char* ptr = dest;
	while (*src) {
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return ptr;
}
int main() {
    char ch = 'o';
    const char *str = "Hello";
    int count = 0;
	
    printf("Length of string is %d\n", mystrlen(str));
    if(mystrchr(str, ch)) printf("checked strchr%d\n", ++count);

    char dest[25] = "I am";
    char* src = " a student";
    printf("After concatenation: %s\n", mystrcat(dest, src));

    char dest1[10];
    printf("After copy %s\n", mystrcpy(dest1, str));

    return 0;
}


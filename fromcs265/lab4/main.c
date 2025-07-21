#include <stdio.h>
#include "answers.c"
#include "funcs.c"

int main() {
	char a[] = "0aBcDefghijklmnopqrstuvwxyZ.";
	rot13(a);
	printf("%s\n", a); // 0nOpQrstuvwxyzabcdefghijklM.

	printf("%d\n", palindrome("abcba")); // 1
	printf("%d\n", palindrome("abccba")); // 1
	printf("%d\n", palindrome("abcdba")); // 0
	printf("%d\n", palindrome("axba")); // 0

	int count;
	printf("%d\n", counter("((x))", &count));
	printf("%d, %d\n", counter("(())", &count), count);
	printf("%d, %d\n", counter(")(((()(()(())((", &count), count);
}

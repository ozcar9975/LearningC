void rot13(char *s) {
	while (*s != '\0') {
		if (*s >= 'a' && *s <= 'z') {
			*s = ((*s - 'a' + 13) % 26) + 'a';
		} else if (*s >= 'A' && *s <= 'Z') {
			*s = ((*s - 'A' + 13) % 26) + 'A';
		}
		s++;
	}
}

int mystrlen(char *s) {
	int n = 0;
	while (*s != '\0') {
		n++;
		s++;
	}
	return n;
}

int palindrome(char *s) {
	int n = mystrlen(s);
	for (int i = 0; i < n / 2; i++) {
		if (*(s + i) != *(s + (n - i - 1))) {
			return 0;
		}
	}
	return 1;
}

int counter(char *s, int *count) {
	*count = 0;
	while (*s != '\0') {
		if (*s != '(' && *s != ')') {
			return 0;
		}
		if (*s == '(') {
			(*count)++;
		} else {
			(*count)--;
		}
		s++;
	}
	return 1;
}

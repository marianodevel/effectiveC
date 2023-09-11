#include<stdlib.h>
#include<stdio.h>
int main(void) {
	if (printf("hello world") == -1) {
		return EXIT_FAILURE;
	} else {
		return EXIT_SUCCESS;
	}
	}

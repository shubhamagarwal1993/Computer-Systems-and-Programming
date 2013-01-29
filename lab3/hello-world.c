#include <stdio.h>

#define MESSAGE "Hello, x86 world!"

int main()
{
	puts (MESSAGE);
	return 0;
}

gcc -E -o hello-world.i hello-world.c

/*The preprocessor expands preprocessor directives, which is any line that starts with a "#". These are processed before your code is compiled.*/

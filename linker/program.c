#include "header.h"
#include "stdio.h"

int main(int argc, char**argv) {
	printf("%s\n", argv[0]);
	foo(argc);
	bar(argc);
	return sqrt(4);
}


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef union {float f; struct {unsigned int m:23,e:8,s:1;} p; unsigned int i;} mfloat;
typedef union {double f; struct {unsigned long long int m:52,e:11,s:1;} p; unsigned long long int i;} mdouble;

int main(int argc, char**argv)
{
	mfloat foo;
	mdouble bar;
	if(argc > 3 && (strstr(*argv, "floater") || strstr(*argv, "doubler"))) {
		foo.p.s = bar.p.s = strtol(argv[1], NULL, 0);
		foo.p.e = bar.p.e = strtol(argv[2], NULL, 0);
		foo.p.m = bar.p.m = strtol(argv[3], NULL, 0);
	}
	else 
	if(argc> 1 && (strstr(*argv, "unfloat") || strstr(*argv, "undouble"))) {
		foo.f = bar.f = argc>1?atof(argv[1]):0.0;
	} 
	else return -1;
	printf("%g: (%x) s: %.1x e: %.2x (%i) m: %.6x\n", foo.f, foo.i, foo.p.s, foo.p.e, foo.p.e-127,foo.p.m);
	printf("%g: (%llx) s: %.1x e: %.3x (%i) m: %.13lx\n", bar.f, bar.i, bar.p.s, bar.p.e, bar.p.e-1023,bar.p.m);
	return 0;
}

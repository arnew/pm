#include <math.h>

int main ( void ) {
	int x,y,N=30; 

	for(x=0;x<N;x++){
		for(y=0;y<2*N;y++) {
			int r = 1000;
			double z = 0, zi = 0, c = (2.0*y)/(2*N)-1.0, ci= I*((2.0*x)/N-1.0);
			while (--r>0 && sqrt(z*z+zi*zi) < 1.0) {
				;
		}
			putchar(r?' ':'X');
		}
		putchar('\n');
	}

	return 0;
}


const int N=20;

#include <stdio.h>
#include <stdlib.h>


int main (int c, char **v) {
	static int n_=0,k_=0,*a;
	int n=n_, k=k_, p = 10;
	if(v) {
#define i(n,k) ((n*n+n)/2+k) 
		a=calloc(1+i(N,N),sizeof(int));
		while (n <= N)
		{
			while (k++ < N - n)
				putchar (' ');
			k = n;
			do
				printf ("%i ", main((n_=n,k_=k),0));
			while (k--);
			n++;
		       	k = 0;
			printf ("\n");
		}
		free(a);
	} 
#define X (a + i(n,k))
	return v?c:(*X = (k && k != n) ? *X ? *X : (main((n_=n-1,k_=k),0) + main((n_=n-1,k_=k-1),0)) % p : 1);

}
	 /* Merry X-Mas */

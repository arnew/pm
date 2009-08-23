
#include <stdio.h>
#include <stdlib.h>

#define t char
const t M = 10, Pmod=2;

int main (int c, char **v)
{
#define n x(**v,t,0,1)
#define k x(**v,t,0,2)
#define N x(c,t,0,0)
#define K x(c,t,0,1)
#define x(p,t,O,o) (*(((t*)(((char*)(&(p)))+(O)))+(o)))
#define g(n) (((n)*(n)+(n))/2)
	N = n;
	K = k;
#define m x(**v,t,0,0)
	if (m) {
		m=N=0;
#define a x(**v,t*,3*sizeof(t),0)
		a = calloc (g(M+1), sizeof (t));
		while (N <= M)
		{
			K = 0;
			while (K++ < M - N) putchar (' ');
			K = N;
			do printf ("%i ", main ((n = N, k = K), v)); while (K--);
			N++;
			printf ("\n");
		}
		free (a);
	} else
#define X x(*a,t,0,g(N)+K)
	return X = (K && K != N) ?  X ?  X : (main ((n = N - 1, k = K), v) + main ((n = N - 1, k = K - 1), v)) % Pmod : 1;
	return 0;
}


const int N=20;

int ind(int n, int k) {
	return ((n*n+n)/2+k);
}

int bkn(int i) {
	int n=1;
	while ((i-=++n)>0) ;
	return --n;
}

int bkk(int i, int n) {
	return i-ind(bkn(i),0);
}

#include <stdio.h>

void foo( void ) {
	printf("i(n=%i,k=%i)=%i\n",3,2,ind(3,2));
	printf("bkn(i=%i)=%i\n",8,bkn(8));
	printf("bkk(i=%i,n=%i)=%i\n",8,3,bkk(8,3));


}

#define BK(p,q) (main((n_=p,k_=q),0))

int
main (int c, char **v)
{
	static int n_=0,k_=0,*a;
	int n=n_, k=k_, p = 10;
	if(v) {
		a=calloc(1+ind(N,N),sizeof(int));
		while (n <= N)
		{
			while (k++ < N - n)
				putchar (' ');
			k = n;
			do
				printf ("%i ", BK(n,k));
			while (k--);
			n++;
		       	k = 0;
			printf ("\n");
		}
		free(a);
	} else {
/*		  printf("\nBK n=%i, k=%i ",n,k);
 */
#define X (a + (n * n+n)/2 + k)
		return *X = (k && k != n) ? *X ? *X : (BK(n-1,k) + BK(n-1,k-1)) % p : 1;
	}

}
/*
{
#define BK(nn,kk) (n=nn,k=kk
  static int N = 6,n, k, p = 10, *a;
  if (v)
    {
	a=calloc((N * (N + 1)) / 2,sizeof(int));
      int n_ = 0, k_ = 0,j;
      while (n_ <= N)
	{
	  while (k_++ < N - n_)
	    putchar (' ');
	  k_ = n_;
	  do
	    printf ("%i done, call:", (n = n_, main (k_, 0)));
	  while (k_--);
	  n_++, printf ("\n"), k_ = 0;
	}
      c = n = k = 0;
      for(j=0;j<210;j++) printf("%i ",a[j]);
      free(a);
    }
#define X (a + (n * n+n)/2 + k)
  printf("\nBK n=%i, k=%i ",n,c);
  return k = c, *X = (k && k != n) ? *X ? *X : (--n, main (k, 0) + (main (k - 1, 0))) % p : 1;
}

*/
	 /* Merry X-Mas */

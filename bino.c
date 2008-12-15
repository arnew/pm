 
              #include\
              <stdio.h>
                 int
              main( int
             c,char**v){
            #define  N 20
           static  int  a[
          (N*(N+1) )/2], n,
         k,p=10; if(v) { int
        n_=0, k_=0; while (n_
       <=N) { while (k_++<N-n_
      ) putchar(' '); k_=n_; do
     printf( "%i ", ( n=n_, main
    (k_, 0))); while (k_--); n_++
   ,printf("\n"), k_=0;} c=n=k=0;}
  #define X (a + (n * n+n)/2 + k-1)
 return k=c, *X= (k&&k!=n) ?*X? *X:(
n--, main(k,0)+(main(k-1,0))) % p:1;}
         /* Merry X-Mas*/

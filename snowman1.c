               #inclu\
               de <st\
               dio.h>
              int main(
            void){int x,y
           ,N=30;for(x=0;x
           <N;x++,putchar(
            '\n')){for(y=
              0;y< 4*N;
             y++){int r=
          1000;double z=0,Z
         =0,c=(2.0*y)/(2*N)-
        1.5,C=((2.0*x)/N-1.0)
        ;while(--r>0&&z*z+Z*Z
        <2.0){double t=z*z-Z*
         Z;Z=z*Z+z*Z+C;z=t+c
          ;} putchar(r?' ':
          'O');}}return 0;}
               

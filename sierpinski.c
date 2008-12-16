                      /**/
                    typedef
                     struct
                       {
                     int x
                    ,y;} p; 
                   #include\
                   <stdio.h>
                 #include/**/\
                /**/ <stdlib.h>
               #define N 30 /**/
              /*X*/int main(void)
             {int j;p r[3]={{/*X*/
            /*X*/N/2,0},{0,N},{N,N}
           };p p={N/2,N/2};int i=/*X
          X*/N*N/2;char*a;a=calloc(N*
         (N+1)/2+N+1,sizeof(int));/* X
        X */do{int q=rand()%3;*(1+a-(N-
       p.y)/2+p.x+p.y*(p.y+1)/2)='.'/* X
      X */;p.x=(p.x+r[q].x)/2;p.y=(p.y+r[
     q].y)/2;}while(i--);for(j=0;j<=N;/* X
    X*/j++){int k=(N-j)/2;while(k--)putchar
   (' ');for(k=0;k<=j;k++){putchar(*(a+k/* X
  X */ +j*(j+1)/2) ? * (a+k+j*(j+1)/2):' ');}
                    putchar(
                    '\n');}
                    free(a);
                   return 0;}
                 /* CC by nc sa
                Arne Wichmann */

#include<stdio.h>
#include<assert.h>

const int N=32,M=126;
#define d (b-a)
#define s ( d<M+2 || d>=(N+1)*(M+2) || d%(M+2)==0 || (d+1)%(M+2)==0)

void p(char*a) {
	char*b=a;
	while(d<(N+2)*(M+2)) {
		putchar(*(b)%2?'X':' ');
		(d+1)%(M+2) || putchar('\n');
		b++;
	}
}


int main(int ac, char**av) {
	unsigned char a[(N+2)*(M+2)];
	unsigned char*b=a;
	unsigned int *o,*oo,*ooo;
	unsigned long int g=0;
	char c=1;

	while(d<(N+2)*(M+2)) {
		s  && (*b=0);
		b++;
	}

	/*
	*(a+250)=1;
	*(a+251)=1;
	*(a+252)=1;
	*/

	
	while(c && g<10000) {
		/*
		p(a);
		getchar();
			*(a+((d+2*(M+2))%((M+2)*(N+2)))) <<=1;
		*/
		c=0;
		for(b=a;d<(N+2)*(M+2);b++) *b<<=1;

		for(b=a;d<(N+2)*(M+2);b++) {
			if (s) continue;
			o=(void*)(b-1-M-2);
			oo=(void*)(b-1);
			ooo=(void*)(b-1+M+2);
			int n = ((*(o))&0x020202)+
				((*(oo))&0x020002)+
				((*(ooo))&0x020202);

			n =       ((n&0xff  )>>1)
				+ ((n&0xff<<8)>>9 )
				+ ((n&0xff<<16)>>17);
		       
			switch(n) {
				case 2: 
					*b+=(*(b)%4)/2;
					break;
			}
			switch(n) {
				case 3:
					c++;
					*b+=1;
					break;
			}
			

		}
		g++;


	}

	

}

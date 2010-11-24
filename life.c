const int N=20,M=80;
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
	unsigned long int g=0;
	char c=1;

	while(d<(N+2)*(M+2)) {
		s  && (*b=0);
		b++;
	}

	
	while(c && g<10000) {
		/*
		p(a);
		*/
		c=0;
		for(b=a;d<(N+2)*(M+2);b++) *b<<=1;

		for(b=a;d<(N+2)*(M+2);b++) {
			if (s) continue;
			int n =   ((*(b-1-M-2))&0x2)/2 
				+ ((*(b  -M-2))&0x2)/2 
				+ ((*(b+1-M-2))&0x2)/2 
				+ ((*(b-1    ))&0x2)/2 
				+ ((*(b+1    ))&0x2)/2 
				+ ((*(b-1+M+2))&0x2)/2 
				+ ((*(b  +M+2))&0x2)/2 
				+ ((*(b+1+M+2))&0x2)/2;
		       
			switch(n) {
				case 2: 
					*b+=(*(b)%4)/2;
					break;
				case 3:
					c++;
					*b+=1;
					break;
			}
			

		}
		g++;


	}

	

}

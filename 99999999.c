#include <stdio.h>
int main(void)
{
	int str[64];
	int a=99999999;
	int n=0;
	
	do
	{
		if((a%2)==0)
			str[n]='0';
		else
			str[n]='1';
		a=a/2;
		n++;
	}
	while(a!=0);

	printf("<%d>",n);
	for(n-=1;n>=0;n--)
		putchar(str[n]);
	putchar('\n');
	
	return 0;
}		

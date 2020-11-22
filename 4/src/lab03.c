#include <stdio.h>
int main()
	{
	int chislo, a, b, c, d;
	int t;
	chislo = 0007;
	a = (chislo/1000)*(t*t*t);
	b = ((chislo/100)%10)*(t*t);
	c = ((chislo/10)%10)*t;
	d = (chislo%10);
	d = a+b+c+d;
	printf("%\n",d);
	return 0;
	}

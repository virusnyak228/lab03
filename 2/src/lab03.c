#include <stdio.h>
main()
	{
	int a;
	a = 678;
	int b, c, d, result;
	b=(a%10);
	c=(a/10%10);
	d=(1/100);
	result=(b*100)+(c*10)+d;
	printf ("%d\n",result);
	return 0;
	}

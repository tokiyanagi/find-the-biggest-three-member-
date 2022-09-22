#include<stdio.h>
int main()
{
	int max(int x, int y, int z);
	int a, b, c, d;
	scanf_s("%d,%d,%d", &a,& b,& c);
			d = max(a, b, c);
	printf("max=%d\n", d);
	return 0;
}
int max(int x, int y, int z)
{
	int e;
	if (x > y &&x>z)e = x;
	else if (x > z&&x > y)e = x;
	else if (y > x &&y> z)e = y;
	else if (y > z &&y> x)e = y;
	else if (z > x &&z> y)e = z;
	else e = z;
	return(e);
}
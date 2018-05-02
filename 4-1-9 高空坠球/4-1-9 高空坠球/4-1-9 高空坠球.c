#include <stdio.h>
#include <math.h>
int main()
{
	int item;
	double hight, dis, alt;
	scanf("%lf %d",&hight ,&item);
	if(item!=0)
	{alt =  hight*pow(0.5, item);
	dis = hight+2 * hight*(1 - pow(0.5, (item-1)));
	}
	else { dis = 0, alt = 0; }
	printf("%.1f %.1f", dis, alt);
	return 0;
}
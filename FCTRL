#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int t,a,i,count2=0,count5=0,p2,p5;
	int j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		j=1;
		p2=a;
		while(p2>1)
		{
			p2 = a / pow(2,j);
			count2=count2+p2;
			j++;
		}
		j=1;
		p5=a;
		while(p5>1)
		{
			p5 = a / pow(5,j);
			count5=count5+p5;
			j++;
		}
		if(count5>=count2)
		{
			printf("%d\n",count2);
		}
		else
		{
			printf("%d\n",count5);
		}
		count5=0;
		count2=0;
	}
	return 0;
}

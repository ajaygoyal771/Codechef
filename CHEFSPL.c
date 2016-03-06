#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int d,i,j,k,c,n,l;
	char a[1000000];
	scanf("%d",&d);
	for (i = 0; i < d; ++i)
	{
		/* code */
		c=0;
		scanf("%s",&a);
		n=strlen(a);
		if (n==1)
		{
			/* code */
			printf("NO\n");
		}
		else if((n%2)==0)
		{
			k=n/2;
			for(j=0;j<n/2;j++)
			{
				if(a[j]!=a[k])
				{
					c++;
					break;
				}
				k++;
			}
			if(c==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else
		{
			k=(n/2)+1;
			for(j=0;j<(n/2)+1;j++)
			{
				if(a[j]!=a[k])
				{
					c++;
					k--;
				}
				if(k<n-1)
				{
					k++;
				}
			}
			if(c==1)
			{
				printf("YES\n");
			}
			else 
			{
				c=0;
				/* code */
				l=0;
				k=(n/2);
				for(j=k;j<n;j++)
				{
					if(a[j]!=a[l])
					{
						c++;
						l--;
					}
					if(l<k-1)
					{
						l++;
					}
				}
				if(c==1)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
		}
	}
	return 0;
}

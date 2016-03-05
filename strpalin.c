#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[1010],b[1010],ch;
	int i,n,k,t,op,j,l;
	scanf("%d",&t);
	for (i = 0; i < t; ++i)
	{
		/* code */
		op=0;
		scanf("%s",&a);
		scanf("%s",&b);
		n=strlen(a);
		k=strlen(b);
		for (j = 0; j < n; ++j)
		{
			ch=a[j];
			for(l = 0; l < k; l++)
			{
				if(ch==b[l])
				{
					op=1;
					break;
				}
			}
			if(op==1)
			{
				printf("Yes\n");
				break;
			}
		}
		if(op==0)
		{
			printf("No\n");
		}
	}
	return 0;
}

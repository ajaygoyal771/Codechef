#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[1010],b[1010],ch;
	int i,n,k,t,op,j;
	scanf("%d",&t);
	for (i = 0; i < t; ++i)
	{
		/* code */
		op=0;
		scanf("%s",&a);
		scanf("%s",&b);
		n=strlen(a);
		k=strlen(b);
		for (i = 0; i < n; ++i)
		{
			ch=a[i];
			for(j = 0; j < k; j++)
			{
				if(ch==b[j])
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

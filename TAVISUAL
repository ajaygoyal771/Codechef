#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t,n,c,q,i,j,a,l,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&c,&q);
        for(j=0;j<q;j++)
        {
            scanf("%d %d",&l,&r);
            if(c>=l && c<=r)
            {
                a=c-l;
                c=r-a;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

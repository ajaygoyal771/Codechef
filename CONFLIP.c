#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t,g,l,q,i,j;
    long long int n,ans;
    scanf("%d",&t);
    for (i = 0; i < t; ++i)
    {
        scanf("%d",&g);
        /* code */
        for(j=0;j<g;j++)
        {
            scanf("%d %lld %d",&l,&n,&q);
            if(n%2==0)
            {
                ans=n/2;
                printf("%lld\n",ans);
            }
            else
            {
                if(q==l)
                {
                    ans=n/2;
                    printf("%lld\n",ans);
                }
                else
                {
                    ans=(n/2)+1;
                    printf("%lld\n",ans);
                }
            }
        }
    }
    return 0;
}
 

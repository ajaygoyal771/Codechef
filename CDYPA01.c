#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int n,s,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        s=sqrt(n);
        s=s*s;
        if(s==n)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
int div(long long int n)
{
    long long int a=0,i;
    for(i=1;i<=n/2;++i)
    {
        if(n%i==0)
        a++;
    }
    return a;
}

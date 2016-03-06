#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int d,i,j,k,c,n,l,itr;
    char a[1000000];
    scanf("%d",&d);
    for (i = 0; i < d; ++i)
    {
        /* code */
        c=0;
        scanf("%s",a);
        n=strlen(a);
        if (n==1)
        {
            /* code */
            printf("YES\n");
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
            j=0;
            for(k = (n/2)+1; k<n; j++, k++)
            {
                if(a[j]!=a[k])
                {
                    c++;
                    if(c==1)
                        k--;
                    else
                        break;
                }
            }
            if(c==0 || (c==1 && j==(n/2 + 1)))
            {
                printf("YES\n");
            }
            else
            {
                c=0;
                /* code */
                j=0;
                k=(n/2);
                for(j=0; j<n/2; j++, k++)
                {
                    if(a[j]!=a[k])
                    {
                        c++;
                        if(c==1)
                            j--;
                        else
                            break;
                    }
                }
                if(c==0 || (c==1 && k==n))
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

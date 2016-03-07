#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100000],t,i,j,k,ans,temp,l,n,temp1;
    scanf("%d",&t);
    for ( i = 0; i < t; ++i)
    {
        /* code */
        ans=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d",&k);
        part(a,0,n-1);
        for(j=0;j<n;j++)
        {
            temp=a[j];
            for(l=0;l<n;l++)
            {
                if (l==j)
                {
                    /* code */
                    l++;
                }
                temp1=temp*a[l];
                if(temp1==k)
                {
                    ans++;
                }
                else if(temp1>k)
                {
                    break;
                }
            }
        }
        ans=ans/2;
        printf("%d\n",ans);
    }
    return 0;
}

int part(int arr[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(min+max)/2;
        part(arr,min,mid);
        part(arr,mid+1,max);
        merge(arr,min,mid,max);
    }
}


int merge(int arr[],int min,int mid,int max)
{
    int tmp[100000];
    int i,j,k,m;
    j=min;
    m=mid+1;
    for(i=min; j<=mid && m<=max ; i++)
    {
        if(arr[j]<=arr[m])
        {
            tmp[i]=arr[j];
            j++;
        }
        else
        {
            tmp[i]=arr[m];
            m++;
        }
    }
    if(j>mid)
    {
        for(k=m; k<=max; k++)
        {
            tmp[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=j; k<=mid; k++)
        {
            tmp[i]=arr[k];
            i++;
        }
    }
    for(k=min; k<=max; k++)
        arr[k]=tmp[k];
}

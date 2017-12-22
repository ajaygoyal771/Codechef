#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ans[1000],i,j,k,l,m,n,done[1000],arr[1000],t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        k=1,l=1;
        scanf("%d %d",&n,&m);
        for(j=1;j<=m;j++)
            scanf("%d",&done[j]);
        partition(done,1,m);
        for(j=1;j<=n;j++)
            arr[j]=j;
        for(j=1;j<=n;j++)
        {
            if(arr[j] == done[k] && k <= m)
            {
                k++;
            }
            else
            {
                ans[l]=arr[j];
                //printf("assis %d :- %d\n",o,m);
                l++;
            }
        }
        for(j=1;j <= n-m;j=j+2)
        {
            printf("%d ", ans[j]);
        }
        printf("\n");
        for(j=2;j<=n-m;j=j+2)
        {
            printf("%d ", ans[j]);
        }
        printf("\n");
    }
    return 0;
}
int partition(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        partition(arr,low,mid);
        partition(arr,mid+1,high);
        mergeSort(arr,low,mid,high);
    }
}
 
int mergeSort(int arr[],int low,int mid,int high)
{
    int i,m,k,l,temp[1000];
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high))
    {
        if(arr[l]<=arr[m])
        {
            temp[i]=arr[l];
            l++;
        }
        else
        {
            temp[i]=arr[m];
            m++;
        }
    i++;
    }
    if(l>mid){
        for(k=m;k<=high;k++)
        {
            temp[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=l;k<=mid;k++)
        {
            temp[i]=arr[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
    {
        arr[k]=temp[k];
    }
}
 

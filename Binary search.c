#include<stdio.h>
int main()
{
int a[100],i,n,search;
printf("Enter array size : \n");
scanf("%d",&n);
printf("Enter %d element of array : \n",n);
for(i=0;i<n;i++)
{
    printf("a[%d] ",i);
    scanf("%d",&a[i]);
}
printf("Enter search: \n");
scanf("%d",&search);
int min,max,mid;
min=0;
max=n-1;
mid=(min+max)/2;
while(min<=max)
{
    if(a[mid]<search)
    {
        min=mid+1;
    }
    else if(a[mid]==search)
    {
        printf("%d is present at location is  %d: \n",search,mid+1);
        break;
    }
    else
    {
        max=mid-1;
    }
    mid=(min+max)/2;
}
if(min>max)
{
    printf("%d is not present at location is %d: \n",search,mid+1);
}
return 0;
}


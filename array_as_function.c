#include <stdio.h>
int array(int a[],int n)
{
    int i,temp,j;
    printf("ENTER THE ARRAY ELEMENTS:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int k;
    printf("AFTER RE-ARRANGING:");
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
   printf("\n");
}
int main()
{
    int i,k=5;
    int n=5;
    int p[n];
    while(k--){
    array(p,n);
    }
}

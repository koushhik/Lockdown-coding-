#include<stdio.h>
#include<conio.h>
int triplet();
int i,j,k,l,m,p,count=0,n,T,a[100000],b[10];
void  main()
{
printf("enter number of test cases\n");
scanf("%d",&T);
for(i=0;i<T;i++)
{
 b[i]=triplet();
 count=0;
}
for(i=0;i<T;i++)
printf("%d\n",b[i]);
}




int triplet()
{
printf("enter number of elemnts\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(j=0;j<n;j++)
{
 scanf("%d",&a[j]);
}
 for(k=0;k<n;k++)
 {
  for(l=0+k;l<n;l++)
  {
   if(l!g=k)
   {
    m=a[k]+a[l];
    for(p=0;p<n;p++)
     {
      if(m==a[p])
       {
       count++;
        break;
       }
     }
   }
 }
}
if(count!=0)
return count;
else
return -1;
}

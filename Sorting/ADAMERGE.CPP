#include<stdio.h>
#include<conio.h>
void mergesort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
clrscr();
int a[10],i,n;
printf("\nEnter the size of array :-");
scanf("%d",&n);
printf("\nEnter the elements of array :-");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
mergesort(a,0,(n-1));
printf("\nData after merge sort :-\n");
for(i=0;i<n;i++)
  printf("%d\t",a[i]);
getch();
return 1;
}
void mergesort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
  mid=(lb+ub)/2;
  mergesort(a,lb,mid);
  mergesort(a,(mid+1),ub);
  merge(a,lb,(mid+1),ub);
}
}
void merge(int a[],int lb,int mid,int ub)
{
int k,i,j,b[10];
i=lb;
j=mid;
k=lb;
while(i<mid&&j<=ub)
{
  if(a[i]<=a[j])
  {
   b[k]=a[i];
   i++;
  }
  else
  {
   b[k]=a[j];
   j++;
  }
  k++;
}
while(i<mid)
{
  b[k]=a[i];
  i++;
  k++;
}
while(j<=ub)
{
  b[k]=a[j];
  j++;
  k++;
}
for(k=lb;k<=ub;k++)
{
  a[k]=b[k];
}
}

#include <stdio.h>
#include <stdlib.h>
void heapify(int a[],int i,int n)
{
    int lar=i;
    int l=2*i + 1;
    int r=2*i + 2;
    if(l<n && a[l]>a[lar])
        lar=l;
    if(r<n && a[r]>a[lar])
        lar=r;
    if(lar!=i)
       { 
           swap(&a[i],&a[lar]);
           heapify(a,lar,n);
}}
void swap(int *i,int *j)
{
    int t=*i;
    *i=*j;
    *j=t;
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d \t",a[i]);

}
void search(int a[],int n,int b)
{ int i;
for(i=0;i<n;i++)
{ if(a[i]==b)
 {printf(" found at %d",i+1);
  break;}}
  if(i==n)
  {printf("not found");}
}
void build(int a[],int n)
{
    int i;
    for(i=((n/2 )- 1);i>=0;i--)
        heapify(a,i,n);
}
int main()
{
    int i,n;
    int a[]={12,11,13,5};
    n=sizeof(a)/sizeof(a[0]);
    build(a,n);
    display(a,n);
    search(a,n,3);
    return 0;
}

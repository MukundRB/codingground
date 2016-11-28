#include <stdio.h>

int main()
{
 int i,a[10];
 a[0]=0;
 a[1]=1;
 printf("%d\n",a[0]);
 printf("%d\n",a[1]);
 for (i=2;i<10;i++)
 {
     a[i]=a[i-1]+a[i-2];
     printf("%d\n",a[i]);
 }
}
 
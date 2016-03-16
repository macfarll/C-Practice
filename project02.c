#include <stdio.h>
int main() {
 int sum = 0;
 int i,a[40000]={1,2};
 for (i=2;a[i]<4000000;i++) {
  a[i]=a[i-1]+a[i-2];
 }
 for (i=2;a[i]<4000000;i++) {
  if (a[i]%2==0) {
   sum+=a[i];
   printf("%d\n",a[i]);
  }
 }
 printf("The total is: %d\n",sum);
}

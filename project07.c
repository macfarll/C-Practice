#include <stdio.h>
void main() {
 long int a[10001];
 long int i=2;
 long int j=0;
 while (j<10001) {
     if (isPrime(i)) {
         a[j]=i;
         j++;
     }
     i++;
 }
 printf("prime number %ld is %ld\n",j,i);
}
int isPrime(n) {
 int i;
 for (i=2;i<n;i++) {
     if (n%i==0) {
         return 0;
     }
 }
 return 1;
}

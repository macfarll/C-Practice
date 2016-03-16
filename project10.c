#include <stdio.h>
void main() {
 long int i=2;
 long int sum=0;
 while (i<2000000) {
     if (isPrime(i)) {
         sum+=i;
     }
     i++;
 }
 printf("the sum of primes under 2000000 is %ld\n",sum);
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

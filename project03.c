#include <stdio.h>
#include <math.h>
void main() {
 long int i,j,number,maxdiv;
 float max;
 number=600851475143;
 max=sqrt(number);
 for (i=2;i<max;i++) {
     if (number%i==0 && isPrime(i)) {
         maxdiv=i;
     }
 }
 printf("Max prime divisor is: %ld\n",maxdiv);
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


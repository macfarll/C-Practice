#include <stdio.h>
long int sumOfSquares(n) {
 int i;
 long int sum=0;
 for (i=1;i<n+1;i++) {
     sum+=i*i;
 }
 return sum;
}
long int squareOfSum(n) {
 int i;
 long int sum=0;
 for (i=1;i<n+1;i++) {
     sum+=i;
 }
 return sum*sum;
}
void main () {
 printf("Output is %ld\n",squareOfSum(100)-sumOfSquares(100));
}

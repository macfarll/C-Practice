#include <stdio.h>
void main() {
 int i,j,max;
 max=0;
 for (i=2;i<1000;i++) {
     for (j=2;j<1000;j++) {
         if (i*j>max && isPalindromic(i*j)) {
             max=i*j;
         }
     }
 }
 printf("largest palindromic product is: %d\n",max);
}
int isPalindromic(num) {
    int i,inv;
    i=num;
    inv=0;
    while (i>0) {
        inv=(inv*10)+(i%10);
        i/=10;
    }
    if (num == inv) {
        return 1;
    }
    return 0;
}

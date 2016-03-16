#include <stdio.h>
void main() {
 long int i,j;
 i=2;
 while (divCheck(i)) {
     i++;
 }
 printf("lowest number divisible by 1-20 is: %ld\n",i);
}
int divCheck(num) {
    long int i;
    for (i=2;i<21;i++) {
            if (num%i!=0) {
                return 1;
            }
    }
    return 0;
}


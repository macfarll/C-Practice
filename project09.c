#include <stdio.h>
void main() {
 long int a,b,c;
 for (a=1;a<999;a++) {
     for (b=1;b<999;b++) {
         c=1000-(a+b);
         if (sqCheck(a,b,c)) {
             printf("One solution is %ld,%ld,%ld, giving %ld\n",a,b,c,a*b*c);
         }
     }
 }
}
int sqCheck(a,b,c) {
    if (a*a+b*b==c*c) {
        return 1;
    }
    return 0;
}


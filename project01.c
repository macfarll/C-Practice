#include <stdio.h>
int main() {
 int i,sum;
 for (i=0;i<1000;i++) {
  if (i%3==0) {
   sum+=i;
  }
  else if (i%5==0) {
   sum+=i;
  }
 }
 printf("The total is: %d\n",sum);
}

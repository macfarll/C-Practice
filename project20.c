#include <stdio.h>
int main() {
    int i=1,j,k,tens_holder=0,m=1,x;
    long long sum=0;
    int outArr[200];
    outArr[0]=1;
    for (i=1;i<101;i++) {
//First for loop builds an array where each value in the index is the
        for (j=0;j<m;j++) {
            x = outArr[j]*i+tens_holder; //x contains the current digit
            outArr[j] = x%10; //The ones digit of x
            tens_holder = x/10; //Temporary holder for the tens digit
        }
        while (tens_holder>0) { //When a variable has a tens digit, add it to the array
            outArr[m] = tens_holder%10;
            tens_holder = tens_holder/10;
            m++; // move forward to the next digit
        }
    }
//sum all digits in the array
    printf("The total product is:\n");
    for (i=m-1; i>=0; i--) {
        sum += outArr[i];
        printf("%d",outArr[i]);
    }
    printf("\nTotal sum of digits: %lld\n",sum);
}

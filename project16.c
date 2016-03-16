#include <stdio.h>
int main() {
    int i=1,j,temp=0,m=1,x;
    long long sum=0;
    int a[1000];
    a[0]=1;
    for (i=0;i<1000;i++) {
//First for loop builds an array where each value in the index is the output of 2^1000
        for (j=0;j<m;j++) {
            x = a[j]*2+temp; //x contains the current digit
            a[j] = x%10; //The ones digit of x
            temp = x/10; //Temporary holder for the tens digit
        }
        if (temp!=0) { //When a variable has a tens digit, add it to the array
            a[m] = temp%10;
            temp = temp/10;
            m++; // move forward to the next digit
        }
    }
//sum all digits in the array
    printf("The output of 2**1000 is:\n");
    for (i=m-1; i>=0; i--) {
        sum += a[i];
        printf("%d",a[i]);
    }
    printf("\nTotal sum of digits: %lld\n",sum);
}

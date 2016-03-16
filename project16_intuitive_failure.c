#include <stdio.h>
#include <math.h>
int main() {
/*    long double bigint=pow(2,1000);
    long double sum=0, current_digit;
    while (bigint>0) {
        long double current_digit= fmod(bigint,10);
        printf("cur dig %Lf\n",current_digit);
        sum+=current_digit;
        bigint=(bigint-current_digit)/10;
    }
    printf("sum is: %Lf\n",sum);
*/
    unsigned long long sum=0,current_digit;
    unsigned long long test=1234567890987654321;
    while (test>0) {
        current_digit=test%10;
        sum+=current_digit;
        printf("cur dig %llu, sum %llu\n",current_digit,sum);
        test=(test-current_digit)/10;
    }
    printf("sum %llu\n",sum);
}

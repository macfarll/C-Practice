#include <stdio.h>
long int Trilate(n) {
    return (n*(n+1))/2;
}
int NumDivisors(n) {
    int i,count=0;
    for (i=1;i<n+1;i++) {
        if (n%i==0) {
            count+=1;
        }
    }
    return count;
}
long int ComputeDivisors(n) {
    long int factors;
    if (n%2==0) {
        factors=NumDivisors(n/2);
    }
    else {
        factors=NumDivisors(n);
    }
    return factors;
}
void main() {
 long int max_div_count=0,nth_triangle=1,n_factors,n_plus_one_factors,result,attempt;
 while (max_div_count<=500) {
     n_factors=ComputeDivisors(nth_triangle);
     n_plus_one_factors=ComputeDivisors(nth_triangle+1);
     attempt=n_factors*n_plus_one_factors;
     if (attempt>max_div_count) {
         max_div_count=attempt;
         result=Trilate(nth_triangle);
         printf("new greatest number of divisors: %ld\n",max_div_count);
     }
     nth_triangle+=1;
 }
 printf("The corresponding trianlge number: %ld\n",result);
}


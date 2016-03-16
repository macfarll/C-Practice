#include <stdio.h>
long int CollatzIteration(long int n) {
    if (n%2==0) {
        return n/2;
    }
    else {
        return 3*n+1;
    }
}
long int ReturnCollatzSeq(long int n) {
    long int current_term,chain_length,next_term;
    current_term=n;
    chain_length=1;
    while (current_term != 1) {
        next_term=CollatzIteration(current_term);
        chain_length++;
        current_term=next_term;
    }
    return chain_length;
}
int main() {
    long int max_length=0,best_input=0,attempt=0,i;
    for (i=2;i<1000000;i++) {
        attempt=ReturnCollatzSeq(i);
        if (attempt>max_length) {
            max_length=attempt;
            best_input=i;
            printf("Current best result is: %ld, with %ld\n",attempt,i);
        }
    }
    printf("Final maximum is: %ld\n",max_length);
    printf("Input value: %ld\n", best_input);
}

#include <stdio.h>
int main() {
    unsigned long long arr[21][21];
    int x,y;
    for (x=0;x<21;x++) {
        for (y=0;y<21;y++) {
            arr[y][x]=1;
        }
    }
    for (x=1;x<21;x++) {
        for (y=1;y<21;y++) {
            arr[y][x]=arr[y-1][x]+arr[y][x-1];
        }
    }
    printf("total number of paths is: %llu\n",arr[20][20]);
}

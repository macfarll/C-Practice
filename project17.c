#include <stdio.h>
int OnesDigit(n) {
    int d=n%10;
    if (d==0) {
        return 0; /*empty string*/
    }
    else if (d<3 || d==6) {
        return 3; //One, Two, or Six
    }
    else if (d==4 || d==5 || d==9) {
        return 4; //Four, Five, or Nine
    }
    else if (d==3 || d==7 || d==8) {
        return 5; //Three, Seven, or Eight
    }
    else {
        printf("Error in OnesDigit()\n");
    }
}
int TensDigit(nn) {
    int n;
    n=nn%100;
    if (n<10) {
        return OnesDigit(n);
    }
    else if (n>=20 && n<40) {
        return 6+OnesDigit(n); //Twenty or Thirty
    }
    else if (n>=40 && n<60) {
        return 5+OnesDigit(n); //Forty or Fifty
    }
    else if (n>=60 && n<70) {
        return 5+OnesDigit(n); //Sixty
    }
    else if (n>=70 && n<80) {
        return 7+OnesDigit(n); //Seventy
    }
    else if (n>=80) {
        return 6+OnesDigit(n); //Eighty or Ninety
    }
    else if (n==10) {
        return 3; //Ten
    }
    else if (n==11 || n==12) {
        return 6; //'Eleven'
    }
    else if (n==13 || n==18) {
        return 8; //'Thirteen'
    }
    else if (n==15) {
        return 7; //'Fifteen'
    }
    else if (n==14 || n==16 || n==17 || n==19) {
        return OnesDigit(n-10)+4; //Teen
    }
    else {
        printf("Error in TensDigit()\n");
    }
}
int HundredsDigit(nnn) {
    int hundreds_prefix,hundreds_name;
    if (nnn<100) {
        return TensDigit(nnn);
    }
    hundreds_prefix=(nnn-(nnn%100))/100;
    hundreds_name=OnesDigit(hundreds_prefix)+7; //add 'hundred'
    if (nnn%100>0) {
        hundreds_name+=3+TensDigit(nnn); //add 'and' between hundered, and tens
    }
    return hundreds_name;
}
int NumberNamer(nnnn) {
    if (nnnn==1000) {
        return 11; //'OneThousand'
    }
    else {
        return HundredsDigit(nnnn);
    }
}
int main() {
    int i,sum=0;
    for (i=1;i<1001;i++) {
        sum+=NumberNamer(i);
    }
    printf("The total number of characters for all numbers under 1001 is %d\n",sum);
}

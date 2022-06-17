#include <stdio.h>
int Fibbonaci(int x){
    if ((x==0) || (x==1)){
        return x+1;
    }
    else{
        int i=0; 
        int a=0;
        int b=1;
        int c=0;
        while (i <= x){
            c=a+b; 
            a=b;
            b=c;
            i=i+1;
        }
    return b;
    } 
}
int main() {
    int a=Fibbonaci(12);
    printf("%d\n",a);
}

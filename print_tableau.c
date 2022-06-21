#include <stdio.h>
void print_tableau (int tab[], int len) {
    int i=0; 
    while (i<len){
        printf("%d ", tab[i]); 
        i+=1;
    }
}
void paires(int tab[51]){
    int i = 0 ;
    while (i<=50){
        tab[i]=2*i;
        i+=1;
    }

}
int main () {
    int tab[51];
    paires(tab);
    print_tableau (tab,51);
}

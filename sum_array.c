#include <stdio.h>
void print_tableau (int tab[], int len) {
    int i=0; 
    while (i<len){
        printf("%d ", tab[i]);
        i+=1;
    }
}
int sum_array(int tab1[],int tab2[],int tab_res[], int lenth){
    int i=0; 
    while (i < lenth){
        tab_res[i]= tab1[i]+tab2[i];
        i+=1;
    }
}
 
int main () {
    int tab1[4] = {1, 2, 4, 6};
    int tab2[4] = {3, 2, 4, 6};
    int tab_res[4];
    sum_array(tab1,tab2,tab_res, 4);
    print_tableau(tab_res,4);
}

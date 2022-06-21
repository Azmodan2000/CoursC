#include <stdio.h>
int mylen(char s[]){
    int i=0; 
    while (s[i]){
        i++;
    }   
    return i;
}
int main() {
    printf("%d",mylen("Paul"));
    printf("\n");
}

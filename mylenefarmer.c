#include <stdio.h>
int mylen(char s[]){
    int i=0; 
    while (i <= 26){
        if (s[i]='\0'){
            printf("%d\n",i);
            i=27;
        }
        i=i+1;
    }   
}
int main() {
    mylen("Violette");
    printf("\n");
    mylen("Paul");
}

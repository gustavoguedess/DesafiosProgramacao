#include<stdio.h>

int main(){
    char s[11];
    int h, m;

    while(scanf(" %s %d %d", s, &h, &m)!=EOF){
        printf("Abel deve %s %s\n", h<10 || (h==10 && m==0)?"cursar":"cancelar", s);
    }
}
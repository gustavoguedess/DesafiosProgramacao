#include<stdio.h>

int main(){
    int n, v;
    char* s;

    scanf("%d %d", &n, &v);
    for(int i=0; i<n; i++) scanf("%[^\n]", s);
    int i=0;
    while(v--){
        i+=2;
        if(i>n) i=1;
        printf("%d\n", i);
    }
}
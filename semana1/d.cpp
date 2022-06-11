#include<stdio.h>

int main(){
    int esq, dir;
    int acm, tmp;
    int n;
    char c;

    esq=dir=-1;
    acm=0;
    scanf("%d ", &n);
    for(int i=0; i<n; i++){
        scanf("%c", &c);
        if(c=='A'){
            if(acm==0) tmp=i;
            acm++;
            if(esq==-1&&acm>=7) esq=tmp;
        }
        else{
            if(acm>7) dir=i;
            acm=0;
        }
    }    
    if(acm>=7) dir=n;
    printf("%d\n",dir-esq);
}
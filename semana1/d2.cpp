#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int acm;
    int esq, dir;
    char c;

    scanf("%d ", &n);
    esq=n; dir=-1; acm=0;
    for(int i=0; i<n; i++){
        scanf("%c", &c);
        if(c=='A'){
            acm++;
            if(acm>=7){
                esq = min(esq,i-acm);
                dir = i;
            }
        }
        else acm=0;
    }
    printf("%d\n", dir==-1?0:dir-esq);
}
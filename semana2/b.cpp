#include<bits/stdc++.h>

using namespace std; 

int main(){
    stack<int> s;
    int n;
    int r=1, a;
    char c;

    scanf("%d", &n);
    while(n--){
        scanf("%d %c", &a, &c);
        if(c=='L'){
            if(!s.empty() && a>=s.top()) r=0;
            s.push(a);
        }
        else if(c=='O' && !s.empty()){
            if(s.top()!=a) r=0;
            s.pop();
        }
        else r=0;
    }
    if(!s.empty()) r=0;
    printf("%c\n", r?'S':'N');
}
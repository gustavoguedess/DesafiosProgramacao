#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char c;
    int d, q, t;
    list<int> l;
    auto it = l.begin();

    scanf("%d", &n);
    while(n--){
        scanf(" %c", &c);
        if(c=='m'){
            scanf("%d", &d);
            advance(it, d);
        }
        if(c=='i'){
            scanf("%d %d", &q, &t);
            while(q--){
                if(l.begin()==it){
                    l.push_front(t);
                    it = l.begin();
                }
                else{
                    l.insert(it--,t);
                    it++;
                }
            }
        }
        if(c=='d'){
            auto r = it++;
            l.erase(r);
        }
        if(c=='q')
            printf("%d\n", *it);
    }
}
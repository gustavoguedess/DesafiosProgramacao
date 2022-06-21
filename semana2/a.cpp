#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> l;
    queue<int> f;
    priority_queue<int, vector<int>, less<int>> p;
    int lifo, fifo, priority;

    lifo = fifo = priority = 1;

    int n;
    int e, s;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &e, &s);
        if(e==0){
            l.push(s);
            f.push(s);
            p.push(s);
        }
        else{
            if(l.empty() || l.top()!=s || l.empty()) lifo=0;
            if(f.empty() || f.front()!=s) fifo=0;
            if(p.empty() || p.top()!=s) priority=0;

            if(l.size()>0) l.pop();
            if(f.size()>0) f.pop();
            if(p.size()>0) p.pop();
        }
    }
    if(!l.empty()) lifo=0;
    if(!f.empty()) fifo=0;
    if(!p.empty()) priority=0;

    if(lifo+fifo+priority>1) 
        printf("ambiguous\n");
    else if(lifo)
        printf("lifo\n");
    else if(fifo)
        printf("fifo\n");
    else if(priority)
        printf("priority\n");
    else
        printf("unknown\n");
}
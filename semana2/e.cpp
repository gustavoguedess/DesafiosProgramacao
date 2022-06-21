#include<bits/stdc++.h>

using namespace std;
typedef tuple<int,int,int,int> t;
typedef pair<t, int> p;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    map<string, int> m;
    m["idjassu"]=1;
    m["galhofa"]=1;
    m["aipenkuit"]=1;
    int n, v;
    priority_queue<p> comp;

    cin >> n >> v;
    string s;
    int a, c;
    int hor, min;
    char colon;
    for(int i=1; i<=n; i++){
        cin >> s >> hor >> colon >> min >> a >> c;
        int c1 = m[s]==1?1:0;
        int c2 = hor>=13?1:0;
        int c3 = a;
        int c4 = c*-1;
        comp.push(p(t(c1,c2,c3,c4), i));
    }
    while(v--){
        cout << comp.top().second << "\n";
        comp.pop();
    }
}
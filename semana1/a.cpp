#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    string x,y;
    int n;
    cin >> n;
    while(n--){
        cin >> x >> y;
        int a = x[x.size()-1]-'0';
        int b = y[y.size()-1]-'0';
        cout << ((a&1)==(b&1)?"PARCEIROS":"NAO PARCEIROS") << endl;
    }
}
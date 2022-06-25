#include<bits/stdc++.h>
#define MAX 110
using namespace std;

int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    vector<int> p;
    int ant[150], dep[150];
    int n, c; 
    int a, b;

    cin >> n >> c;
    for(int i=1; i<=n; i++) {
        p.push_back(i);
        cond[i]=0;
    }

    for(int i=0; i<n; i++){
        cin >> a >> b;
        cond[a]=b;
    }
    int visitado[15];
    do{
        int r=1;
        for(int i=1; i<=n; i++) visitado[i]=0;
        visitado[0]=1;
        for(int i=n-1; i>=0; i--){
            visitado[p[i]]=1;
            r&=visitado[cond[p[i]]];
            if(r==1) cout << " " << p[i] << " " << cond[p[i]] << " " << visitado[cond[p[i]]] << endl;
        }
        cout << endl;
        if(r==1){
            for(auto x=p.begin(); x!=p.end(); x++)
                cout << *x << (x==--p.end()?'\n':' ');
        }
    }while(next_permutation(p.begin(), p.end()));
}
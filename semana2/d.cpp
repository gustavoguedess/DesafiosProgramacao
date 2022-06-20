#include<bits/stdc++.h>

using namespace std;

typedef pair<string, int> si;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0); 
    map<string, int> nomes;
    int n, k;
    int qt=0, t=0;
    int r=0;
    string s;

    cin >> n >> k;
    for(int i=0; i<2*n; i++){
        cin >> s;
        if(!nomes[s]){
            nomes[s] = 1;
            qt++;
        }
        else{
            qt--;
        }
        if(k==qt) r=1;
    }
    if(r==1) cout << "7.18808\n";
    else cout << "3.14159\n";
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> l;
    int n, a;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        l.push_back(a);
    }
    sort(l.begin(), l.end());
    printf("%d %d\n", n/2, l[n/2]-l[n/2-1]);

}
#include<bits/stdc++.h>
#define MAX 112345
using namespace std;

int a[MAX], b[MAX];
typedef long long ll;

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(int i=0; i<n/2; i++){
            scanf("%d", &b[i]);
        }
        ll res=0;
        for(int i=0; i<n/2; i++){
            res+=abs(b[i]-(a[i]+a[n-i-1]));
        }
        printf("%lld\n", res);
    }
}
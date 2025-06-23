#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int maxx=max({a,b,c});
    int minn=min({a,b,c});
    cout<<maxx-minn;
    return 0;
}
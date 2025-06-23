#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b+c||b==a+c||c==a+b) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
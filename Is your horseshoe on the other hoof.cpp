#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio;
    cin.tie(nullptr);
    set<int>s;
    int x;
    for(int i=0;i<4;i++){
        cin>>x;
        s.insert(x);
    }cout<<4-s.size();
    return 0;
}
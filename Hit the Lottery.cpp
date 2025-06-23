#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int count=0;
    int nom[]={100,20,10,5,1};
    int n;
    cin>>n;
    for(int coin:nom){
        count+=n/coin;
        n%=coin;
    }cout<<count;
    return 0;
}
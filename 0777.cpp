#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b) cout<<b-a;
    else if(a==b) cout<<0;
    else cout<<12-a+b;
    return 0;
}
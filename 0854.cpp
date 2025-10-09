#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(s=="freeze") cout<<min(n,k);
    if(s=="heat") cout<<max(n,k);
    if(s=="auto") cout<<k;
    if(s=="fan") cout<<n;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    vector<long long> results;
    while(t--){
    long long a,b;
    cin>>a>>b;
    if(a%b==0) results.push_back(0);
    else results.push_back(b-(a%b));
    }for(long long res:results) cout<<res<<"\n";
    return 0;
}
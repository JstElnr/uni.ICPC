#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
    double n;
    double sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        sum+=m;
    }cout<<setprecision(12)<<sum/n;
    return 0;
}
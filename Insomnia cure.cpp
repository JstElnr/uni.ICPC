#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int harmed=0;
    int unharmed=0;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(int i=d;i>=1;i--){
        if(i%k==0||i%l==0||i%m==0||i%n==0) harmed++;
    }cout<<harmed;
    return 0;
}
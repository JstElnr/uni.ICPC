#include<iostream>
using namespace std;
int main(){
    int o,r,m,n;
    cin>>n;
    o=r=0;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m) r++;
        else o++;
    }
    cout<<min(o,r);
    return 0;
}
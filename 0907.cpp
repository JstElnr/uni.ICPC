#include<iostream>
using namespace std;
int main(){
    int w,h,r;
    cin>>w>>h>>r;
    int s=min(w,h);
    if(s>=r*2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
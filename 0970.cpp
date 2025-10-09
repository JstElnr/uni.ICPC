#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int w,h,r;
    cin>>w>>h>>r;
    if(w+h==r||w+r==h||r+h==w) cout<<"YES";
    else cout<<"NO";
    return 0;
}
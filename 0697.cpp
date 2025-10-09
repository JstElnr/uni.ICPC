#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,w,h;
    cin>>l>>w>>h;
    if((h*w+l*h)/8==0) cout<<1;
    else if((h*w+l*h)<8) cout<<1;
    else if((h*w+l*h)%2!=0) cout<<((h*w+l*h)/8)+1;
    else cout<<(h*w+l*h)/8;
    return 0;
}
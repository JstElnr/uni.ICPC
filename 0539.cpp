#include<iostream>
using namespace std;
int main(){
    long long a;
    cin>>a;
    if(a%2==1 && a>1) cout<<a;
    else cout<<a/2;
    return 0;
}
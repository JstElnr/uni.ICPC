#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3,a4,s1,s2,s3,s4;
    cin>>a1>>s1>>a2>>s2>>a3>>s3>>a4>>s4;
    int a=a1+a2+a3+a4;
    int b=s1+s2+s3+s4;
    if(a>b) cout<<1;
    else if(a<b) cout<<2;
    else cout<<"DRAW";
    return 0;
}
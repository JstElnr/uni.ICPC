#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int d=a/2,e=b/6,f=c;
    if(a<2||b<6||c<1) cout<<0;
    else cout<<min({d,e,f});
    return 0;
}
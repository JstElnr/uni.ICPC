#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b,c;
    cin>>a>>b>>c;
    string com=a+b;
    sort(com.begin(), com.end());
    sort(c.begin(), c.end());
    if(com==c) cout<<"YES";
    else cout<<"NO";
    return 0;
}
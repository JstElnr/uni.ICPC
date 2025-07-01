#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c) cout<<"+\n";
        else cout<<"-\n";
    }
    return 0;
}
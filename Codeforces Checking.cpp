#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="c"||s=="o"||s=="d"||s=="e"||s=="f"||s=="r"||s=="s"){
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
    }
    return 0;
}
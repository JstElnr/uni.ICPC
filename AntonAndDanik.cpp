#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=0,b=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char s;
        cin>>s;
        if(s=='A') a++;
        else b++;
    }if(a>b) cout<<"Anton";
    else if(a<b) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
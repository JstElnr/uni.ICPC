#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        cout<<a/10+a%10<<endl;
    }
}
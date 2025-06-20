#include<iostream>
using namespace std;
int main(){
    int x;
    int c=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) c++;
    }if(c==0) cout<<"EASY";
    else cout<<"HARD";
    return 0;
}
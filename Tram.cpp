#include<iostream>
using namespace std;
int main(){
    int n;
    int max=0;
    int current=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        current -=a;
        current +=b;
        if(current>max) max=current;
    }cout<<max;
    return 0;
}
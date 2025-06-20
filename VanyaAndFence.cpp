#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    int h;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int height;
        cin>>height;
        if(height<=h) count++;
        else count+=2;
    }
    cout<<count;
    return 0;
}
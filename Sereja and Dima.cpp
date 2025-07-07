#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int l=0,r=n-1;
    int s=0,d=0;
    bool ser=true;
    while(l<=r){
        int pick;
        if(a[l]>a[r]){
            pick=a[l];
            l++;
        }else{
            pick=a[r];
            r--;
        }
        if(ser)
        s+=pick;
        else
        d+=pick;
        ser=!ser;
       }
       cout<<s<<" "<<d<<"\n";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int w;//number of bananas
    int k;//cost of 1st banana
    int n;//money that soldier has
    int sum=0;
    cin>>k;
    cin>>n;
    cin>>w;
for(int i=1;i<=w;i++){
    sum+=i*k;
}
    if((sum-n)<=0){
        cout<<0;
    }else{
        cout<<sum-n;
    }
    return 0;
}
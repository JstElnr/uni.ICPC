#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
    return 0;
}
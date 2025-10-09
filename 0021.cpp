#include<iostream>
using namespace std;
int main(){
    int n,k,c;
    cin>>n>>k>>c;
    int maxx=max({n,k,c});
    int minn=min({n,k,c});
    cout<<maxx-minn;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    bool ok=true;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>1){
            ok=false;
            break;
        }
    }
    cout<<(ok?"YES":"NO")<<"\n";
}
return 0;
}
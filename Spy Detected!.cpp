#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
            if(a[0]==a[1]){
                for(int i=2;i<n;i++){
                    if(a[i]!=a[0]){
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }else if(a[0]==a[2]){
                cout<<2<<"\n";
        }else cout<<1<<"\n";
    }
        return 0;
}

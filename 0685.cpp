#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxxx=max({a,b,c});
    int minnn=min({a,b,c});
    int ostt=a+b+c-minnn-maxxx;
    int d,e,f;
    cin>>d>>e>>f;
    int maxx=max({d,e,f});
    int minn=min({d,e,f});
    int ost=d+e+f-minn-maxx;
    cout<<maxx*maxxx+minn*minnn+ost*ostt;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int max=0,min=0;
    for(int i=1;i<n;i++){
        if(a[i] > a[max]) max = i;
    }
for(int i = 0; i < n; i++){
    if(a[i] <= a[min]) min = i;
}
int moves = max + (n - 1 - min);
if(min < max) moves--;
cout << moves << "\n";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int freePolice=0,untreated=0;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int event;
        cin>>event;
        if(event==-1){
            if(freePolice>0){
                freePolice--;
            }
            else untreated++;
        }
        else freePolice+=event;
    }
    cout<<untreated;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
while(n--){
    int x,counts=0;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
        if(arr[i]>=1000){
            counts++;

        }

    }
    cout<<counts<<endl;

}



return 0;
}

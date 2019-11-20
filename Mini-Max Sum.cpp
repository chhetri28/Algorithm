#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    ll min_s=0,max_s=0;
    sort(a,a+5);
    for(int i=0;i<4;i++){
        min_s+=a[i];
    }
    
    for(int i=4;i>0;i--){
        max_s+=a[i];
    }
    cout<<min_s<<" "<<max_s<<" ";
}

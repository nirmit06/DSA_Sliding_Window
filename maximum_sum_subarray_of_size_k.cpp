#include <bits/stdc++.h>
using namespace  std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int i=0;int j=0;
    int sum=0;
    int mx=INT_MIN;
    while(j<v.size()){
        sum+=v[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mx=max(mx,sum);
            sum-=v[i];
            i++;
            j++;
        }
    }
    cout<<mx<<"\n";
}

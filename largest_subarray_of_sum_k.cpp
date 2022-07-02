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
        if(sum<k){
            j++;
        }
        else if(sum==k){
            mx=max(mx,j-i+1);
            j++;
        }
        else{
            while(sum>k){
                sum-=v[i];
                i++;
                if(sum==k){
                    mx=max(mx,j-i+1);
                }
            }
            j++;
        }
    }
    cout<<mx<<"\n";
}

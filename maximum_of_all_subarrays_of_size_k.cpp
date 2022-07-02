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
    vector<int> ans;
    list <int> l;
    while(j<v.size()){
        if(l.empty()){
            l.push_back(v[j]);
        }
        else{
        while(l.back()<v[j] && !l.empty()){
            l.pop_back();
        }
        l.push_back(v[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(l.front());
            if(v[i]==l.front()){
                l.pop_front();
            }
            i++;j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

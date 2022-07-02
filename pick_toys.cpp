#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int k=2;

    int i=0,j=0;
    int mx=INT_MIN;
    unordered_map<char,int> mp;
    while(j<s.length()){
        mp[s[j]]++;

        if(mp.size()<k){
            j++;
        }
        else if(mp.size()==k){
            mx=max(mx,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++; 
            }
            
            j++;
        }
    }
    cout<<mx<<"\n";
}
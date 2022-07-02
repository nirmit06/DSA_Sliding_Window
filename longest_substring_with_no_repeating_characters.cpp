#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int i=0,j=0;
    int mx=INT_MIN;
    unordered_map<char,int> mp;
    while(j<s.length()){
        mp[s[j]]++;

        if(mp.size()>j-i+1){
            j++;
        }
        else if(mp.size()==j-i+1){
            mx=max(mx,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1){
            while(mp.size()<j-i+1){
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
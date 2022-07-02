#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;

    unordered_map<char,int> mp;

    for(auto x:t){
        mp[x]++;
    }

    int count=mp.size();

    int i=0,j=0;
    int mn=INT_MAX;
    while(j<s.length()){
        if(mp.find(s[j])!=mp.end()){
        mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
        }
        
        if(count>0){
            j++;
        }
        else if(count==0){
            
            while(count==0){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    i++;
                    count++;
                }
                else{
                    i++;
                    mn=min(mn,j-i+1);
                }
            }
            else{
                i++;
                mn=min(mn,j-i+1);
            }
            
            }  
            
            j++;
        }
    }
    cout<<mn<<"\n";
    return 0;
}
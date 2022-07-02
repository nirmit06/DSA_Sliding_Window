#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    list<int> l;
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (j < v.size())
    {
        if (v[j] < 0)
        {
            l.push_back(v[j]);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            
            if(l.size()==0){
                v.push_back(0);
            }
            else{
                ans.push_back(l.front());
                if(v[i]==l.front()){
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}

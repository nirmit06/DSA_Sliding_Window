#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string p;
    cin >> p;

    int k = p.length();

    int i = 0, j = 0;

    map<char, int> mp;

    for (auto &x : p)
    {
        mp[x]++;
    }
    int count = mp.size();
    int ans = 0;
    while (j < s.length())
    {
        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;

            if (mp[s[j]] == 0)
            {
                count--;
            }
        }

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (count == 0)
            {
                ans++;
            }
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[i]] == 1)
                {
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    cout << ans << "\n";
    return 0;
}
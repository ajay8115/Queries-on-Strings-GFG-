#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> SolveQueris(string s, vector<vector<int>> a)
{
    int n = s.size();
    int m = a.size();
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x = a[i][0];
        int y = a[i][1];
        set<char> st;
        for (int j = x - 1; j <= y - 1; j++)
        {
            st.insert(s[j]);
        }
        v.push_back(st.size());
    }

    return v;
}

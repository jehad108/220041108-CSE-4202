#include <bits/stdc++.h>
using namespace std;
inline void inputoutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void vectorprint(vector<pair<int, string>> &v)
{
    int size = v.size();
    cout << "size :" << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
void solve()
{
    multiset<long long > s;
    long long  bag, minute, n, m = 0;
    cin >> bag >> minute;
    for (int i = 0; i < bag; i++)
    {
        cin >> n;
        s.insert(n);
    }
    for (int i = 0; i < minute; i++)
    {
        auto it = --s.end();
        m += *it;
        s.erase(it);
        s.insert(*it / 2);
    }
    cout << m << endl;
}
int main()
{
    inputoutput();
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
    return 0;
}
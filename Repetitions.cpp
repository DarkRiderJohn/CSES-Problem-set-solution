#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
 
 
int main()
{
    // makes cin and cout more efficient 
    ios::sync_with_stdio(0);
    cin.tie(0);    
    
    // solution 
    string s; cin >> s;
    ll count = 1, high = count; 
    char p = s[0];
 
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == p) 
            count++;
        else
            count = 1;
 
        if(count > high)
            high = count;
        p = s[i];
    }
    cout << high;
}
 

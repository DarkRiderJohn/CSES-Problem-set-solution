#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
 
 
int main()
{
    // makes cin and cout more efficient 
    ios::sync_with_stdio(0);
    cin.tie(0);    
    
    // solution 
    ll n; cin >> n;
    ll arr[n];
    cin >> arr[0];
    
    ll count = 0;
    for(int i = 1; i < n;i++)
    {
        cin >> arr[i];
        
        while(arr[i-1] > arr[i])
        {
            arr[i]++;
            count++;
        }
    }
    cout << count;
}

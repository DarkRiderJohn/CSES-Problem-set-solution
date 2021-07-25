#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
 
 
int main()
{
    // makes cin and cout more efficient 
    ios::sync_with_stdio(0);
    cin.tie(0);    
    
    // solution 
    int n; cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n-1;i++)
    {
        int tmp; cin >> tmp;
        arr[tmp-1] = 1;
    }
 
    for(int i = 0; i < n;i++)
    {
        if(arr[i] == 0)  
        {
            cout << i+1; 
            break; 
        }
    }
    
}

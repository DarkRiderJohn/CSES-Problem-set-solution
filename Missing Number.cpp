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
    sum = 0;
    for(int i = 0; i < n-1;i++)
    {
        int tmp; cin >> tmp;
        sum += tmp;
    }
    cout << n *(n + 1)/2 - sum;
}

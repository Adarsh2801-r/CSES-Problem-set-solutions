#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <sstream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ull unsigned long long 
#define int long long 
#define pb push_back 
#define mp make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define MAX 1e18
#define PI 3.14159265
const int mod = 1e9 + 7;
bool arr[20][20][20];
 int f=0;
 int d=0;
 
int32_t main(){
 
    IOS;
    int n;
    cin>>n;
    std::vector<int> v(n);
    set<int>s;
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
        s.insert(v[i]);
    }   
    cout<<s.size()<<endl;
 
    return 0;
}

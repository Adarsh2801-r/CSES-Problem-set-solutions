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
int32_t main(){
 
    IOS;
    int n,m,k;
    cin>>n>>m>>k;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    std::vector<int> v1(m);
    for (int i = 0; i < m; ++i)
    {
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    set<int>st;
    int cou=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(abs(v[i]-v1[j])<=k){
            cou++;
            i++;
            j++;
        }
        else{
            if(v[i]-v1[j]>k){
                j++;
            }
            else{
                i++;
            }
        }
    }
    cout<<cou<<endl;
 
    return 0;
}

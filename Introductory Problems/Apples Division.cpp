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
    int n;
    cin>>n;
    vector<int>v(n);
        int sum = 0;
 
    for(int i=0;i<n;i++){
    	cin>>v[i];
    	sum += v[i];
    }
    int curr = INT_MAX;
    for(int i=0;i<(1<<n);i++){
    	int sm = 0;
    	for(int j=0;j<n;j++){
    		sm += ((i&(1<<j)) > 0)*(v[j]);
    	}
    	//cout<<sm<<endl;
    	curr = min(curr, abs((sum-sm)-sm));
    }
    cout<<curr<<endl;
 
    return 0;
}
    

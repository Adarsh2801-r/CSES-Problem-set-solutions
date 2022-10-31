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


void ways(string str, int n,map<char,int>mp){
	if(str.size()==n){
		cout<<str<<endl;
		return;
	}

	if(str.size()>n){
		return;
	}

	for(char c='a';c<='z';c++){
		if(mp[c]>0){
			mp[c]--;
			str += c;
			ways(str,n,mp);
			str.pop_back();
			mp[c]++;
		}
	}


}
int fact(int n){
	if(n<=1){
		return 1;
	}
	return n*fact(n-1);
}
 
 
int32_t main(){
 
    IOS;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
    	mp[s[i]]++;
    }
    int n = s.size();
    int count = fact(n);
    for(char c='a';c<='z';c++){
		count /= fact(mp[c]);
	}
	cout<<count<<endl;
    ways("",n,mp);



    return 0;
}
        
 
        
 

//this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to prasad patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
//this code belongs to prasad patil
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to prasad patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int allXOR(string s)
{
    int n=s.length();
    int ans=int(s[0]);
    for(int i=1;i<n;i++)
    {
        ans^=int(s[i]);
        
    }
    return ans;
}
int count1(string s)
{
    int count =0;
    int temp=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(s[i]==s[j]) count++;
        }
        if(count==1 && i==(n-1)) temp++;
    }
    return temp;
}
 

void prasad(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int flag=0;
    int xorthing=allXOR(arr);
    // cout<<"------"<<endl;
    // cout<<xorthing<<endl;
    int count=0;
    int flag1=0;
    int temp=0;

    if(n==1) cout<<"YES\n";
    else if(n==2) 
    {
        if(arr[0]==arr[1]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(n==3)
    {  if(((arr[0]==arr[1]) && (arr[1]!=arr[2]))) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(((arr[0]==arr[1]) && (arr[1]!=arr[2])) && xorthing==0) cout<<"YES\n";
    else if(((arr[0]==arr[1]) && (arr[1]!=arr[2])) && xorthing!=0 && (count1(arr)==1) )cout<<"YES\n";
   else cout<<"NO\n";


   

}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--) {
 prasad();
 }
 return 0;
}
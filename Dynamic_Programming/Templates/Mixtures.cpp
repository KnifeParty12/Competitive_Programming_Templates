#include<bits/stdc++.h>
#define endl "\n"
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, b) for (int i = a; i < b; i++)
#define sloop(str, i, a) for (int i = a; str[i] != '\0'; i++)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define PII pair<int, int>
#define MAX 1000005
#define inf 1000000000000000LL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

typedef long long ll;
using namespace std;

//auto inside = [&](){
//cout<<"nigga";
//};
//inside();

template <typename T>
string to__string(T x){
    ostringstream ss;
    ss << x;
    return ss.str();
}

ll max(ll a, ll b)
{
    if (a >= b)
        return a;
    return b;
}

ll min(ll a, ll b)
{
    if (a >= b)
        return b;
    return a;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/*--------GLOBAL BOIS--------------- */




int mcm(vector<int> &colors, int start, int end){
    
    if(start == end || start == end-1) return 0;

    int min_smoke = INT_MAX;
    for(int k = start+1; k<end; k++){
       int a1 = mcm(colors,start,k); // min smoke from here
       int a2 = mcm(colors,k+1,end); // min smoke from here
       int n_c1 = (prefix[k] - prefix[start-1])%100;
       int n_c2 = (prefix[end] - prefix[k])%100; 
    }

}


void solve()
{
    int n;
    cin>>n;
    vector<int> colors(n);
    for(int i = 0; i<n; i++) cin>>colors[i];
    cout<<mcm(colors,0,n-1);
    int prefix[n];
    prefix[0] = colors[0];
    for(int i = 1; i<n; i++) prefix[i] = colors[i] + prefix[i-1];
}

int main()
{
    fast_io int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}

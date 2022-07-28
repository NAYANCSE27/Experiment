#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=2e5+6;
const int P1=1000000007;


void testcases() {
    int n,m,total=0;
    string s;
    cin>>n>>m>>s;

    for(int i=0,j=n-1; i<=j; i++,j--) {
        int a=s[i]-'a'+1;
        int b=s[j]-'a'+1;
        int diff=abs(a-b);
        total+=min(diff,(26-diff));
    }
    
    int left=0,right=n-1;
    for(int i=0,j=n-1; i<=j; i++,j--) {
        if(s[i]!=s[j]) {
            left=max(i-1,0);
            right=min(n-1,j+1);
            break;
        }
    }
    cout<<left<<'\t'<<right<<endl;
}

int main() {

    fast;
    int tc=1;
    //cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS



*/


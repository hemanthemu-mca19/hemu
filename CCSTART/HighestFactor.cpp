#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;


void solve(int t){
    //code here
    int n;
    cin>>n;
    int i;
    for(i=9; i>=1; i--){
        if(n%i == 0) {
            cout<<i<<endl;
            break;
        }
    }  
}

int main()
{
    int t =1;
    //cin>>t;
    solve(t);
   
	return 0;
}


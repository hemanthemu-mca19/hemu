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

int main()
{
    int t =1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    int cnt =0;
    while(n>0){
        if(n%10 == 4) cnt++;
        n /=10;
    }    
    cout<<cnt << endl;
    }   
	return 0;
}

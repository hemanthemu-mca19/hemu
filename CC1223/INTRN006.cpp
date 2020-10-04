#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
        int n;
        cin>>n;
        int lst = sqrt(n) +1;
        int sum =1;
        for(int i=2; i<lst; i++){
            if(n%i == 0){
                sum += i + n/i;
            }
        }
        if(sum == n && n != 1)
            cout << "YES" <<endl;
        else
            cout<<"NO"<<endl;
        
	}
	return 0;
}

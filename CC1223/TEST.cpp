#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    for(int i = 0; i < INT_MAX; i++){
        cin >> n;
        if(n==42)
            break;
        else
            cout << n<< endl;
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        if(num1>num2 && num1>num3){
            if(num2>num3)
                cout << num2 << endl;
            else
                cout << num3 << endl;
        }
        if(num2>num1 && num2>num3){
            if(num1>num3)
                cout << num1 << endl;
            else
                cout << num3 << endl;
        }
        if(num3>num1 && num3>num2){
            if(num2>num1)
                cout << num2 << endl;
            else
                cout << num1 << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100001];
    arr[0] =2;
    arr[1] = 3;
    int count = 2;
    for(int i = 4; i < INT_MAX; i++){
        if(count >= n)
            break;
        int flag = 0;
        for(int j= 2; j < sqrt(i); j++){
                if(i%j == 0){
                    flag = 1; 
                    break;
                }
        }
        if(flag == 0){
            arr[count] = i;
            count++;
        }
    }
    for(int i =0; i<n;  i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

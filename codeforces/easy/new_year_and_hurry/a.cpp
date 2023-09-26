#include<bits/stdc++.h>

using namespace std; 
int TIME = 240; 

bool ok(int m, int k){
    int tt = 5*m*(m + 1)/2 + k;
    return  tt <= TIME;  
}

int main(){
    int n, k;
    cin >> n >> k;  

    int L = 0, R = n;   
    int ans = 0;
    int mid;
    while (L <= R){
        mid = L + (R - L)/2;
        if(ok(mid, k)){
            ans = mid; 
            L = mid + 1; 
        }
        else{
            R = mid - 1;  
        }
    }
    cout << ans << "\n"; 

}
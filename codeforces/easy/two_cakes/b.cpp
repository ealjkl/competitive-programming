#include<iostream>
#include<algorithm>

using namespace std; 

int main(){
    int n, a, b;
    int ans; 
    cin >> n >> a >> b; 
    int curr; 
    ans = 1; //the mamximum
    for(int i = 1; i<= n -1; i++){
        curr = min(a/i, b/(n - i));
        // cout << a/i << " " << a/(n - 1) << " " << "\n"; 
        // cout << "curr " << curr << "\n"; 
        if (curr > ans){
            ans = curr;  
        }
    }
    cout << ans << "\n"; 
}
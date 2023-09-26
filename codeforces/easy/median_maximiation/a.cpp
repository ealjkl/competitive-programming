#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int t; 
    int n, s; 
    int pre, x; 
    cin >> t;
    while (t--){
        cin >> n >> s;  
        pre = ceil((n + 1)/2.0);
        x = s/pre; 
        cout << x << "\n"; 
        
    }
} 
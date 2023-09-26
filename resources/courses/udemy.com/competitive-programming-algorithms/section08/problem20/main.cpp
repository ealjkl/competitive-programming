#include<bits/stdc++.h>
using namespace std;

string solve(int A,int B, int C){
    if (abs(C) & 1) {
        if (A > B) {
            return ">";
        } else if (A < B) {
            return "<";
        } else {
            return "=";
        }
    } else {
        if (abs(A) < abs(B)) {
            return "<";
        } else if (abs(A) < abs(B)) {
            return ">";
        } else {
            return "=";
        }
    }
}
//problem6 - sum square difference

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    
    // from the mathematical formulas for sum of squares and sum of numbers we should be able to directly calculate the value
    ll num = 100;
    
    // sum of squares
    ll sus = num*(num+1)*(2*num + 1)/6;
    // square of sums
    ll sqs = num*(num+1)/2;
    sqs = sqs*sqs;
    
    ll ans = sqs - sus;
    cout << ans << endl;
    
}

//25164150

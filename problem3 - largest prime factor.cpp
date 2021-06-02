//problem3 - largest prime factor

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    
    // a number can have a largest prime factor upto its square root
    ll a = 600851475143, max_prime = 0;
    vector<ll> flags(sqrt(a),1);
    
    for(int i=2;i<=sqrt(a);i++){
        if(a%i == 0 && flags[i-1]){
            max_prime = i;
            for(int j=i-1;j<sqrt(a)-1;j+=i){
                flags[j] = 0;
            }
        }
    }
    // bad solution with complexity of 
    // if it doesn't have any prime factors it itself is a prime number
    if(max_prime == 0){
        max_prime = a;
    }
    
    
    cout << max_prime << endl;
    
}

//6857

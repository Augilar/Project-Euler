//problem5 - smallest multiple

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int hcf(int a, int b){
    if(a%b==0){
        return b;
    }else{
        return hcf(b, a%b);
    }
}

int main() {
    
    // its asking us to calculate lcm of all the numbers between 1 and 20
    // 2520 is the smallest multiple of all numbers from 1 to 10
    // to get lcm we multiply 2 numbers and then divide it by its hcf but it may be lengthy
    long long product = 1;
    
    for(int i=1;i<=20;i++){
        product = product*i/hcf(product,i);
    }
    cout << product << endl;
    
    
}

//232792560

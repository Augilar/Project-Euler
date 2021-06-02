//problem-2 - Even fibonacci numbers

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //I have to find the sum of even valued fibonacci numbers till the value of number in seq is less than 4,000,000
    int max = 4000000;
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    while(*(fib.end()-1) < max){
        fib.push_back(*(fib.end()-1)+*(fib.end()-2));
    }
    
    int sum = 0;
    for(int i=0;i<fib.size();i+=1){
        if(fib[i]%2 == 0){
            sum+= fib[i];
        }
    }
    cout << sum << endl;
}

//4613732

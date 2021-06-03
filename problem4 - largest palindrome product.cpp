//problem4 - largest palindrome product
//naivest algorithm

#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPalindrome(int num){
    // if palindrome it will be same backwards and forwards
    vector<char> number = {};
    while(num>0){
        number.insert(number.begin(),num%10 +'0');
        num /= 10;
    }
    
    int flag=0;
    for(int i=0;i<number.size()/2;i++){
        
        if(number[i] != number[number.size()-1-i]){
            flag = 1;
        }
        
    }
    
    if(flag){
        return false;
    }else{
        return true;
    }
    
}

int main() {
    
    // given that the largest palindrome by multiplying two 2 digit numbers is 9009 = 91*99
    // what is the largest palindrome by multiplying two 3 digit numbers
    
    
    int count =0, max =0;
    //for finding the largest palindrome we will go from the largest 3 digited numbers
    for(int i=999;i>99;i--){
        for(int j=999;j>99;j--){
            if(isPalindrome(i*j)){
                if(i*j > max){
                    max = i*j;
                }
                count++;
            }
        }
    }
    
    cout  << max << endl;
    
}

//906609

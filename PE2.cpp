#include<bits/stdc++.h>
using namespace std;
int main(){
    int prev =0;
    int curr = 1;
    int ansSum = 0;
    while(curr<=4000000){
        ansSum +=(curr%2==0)? curr:0;
        int temp = prev;
        prev = curr;
        curr = temp + prev;
    }
    cout<< ansSum;
    return 0;
}
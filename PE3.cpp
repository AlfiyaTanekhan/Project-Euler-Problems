#include<bits/stdc++.h>
using namespace std;
int main(){
long long int num = 600'851'475'143LL;
long long int HPF = 0LL;
long long int currFact = 2;
while(num>HPF){
    if((num%currFact == 0) and currFact > HPF){
        HPF = currFact;
        num/=currFact;
    }
    else {
        currFact++;
        }
    }
    cout<<HPF;
    return 0;
}
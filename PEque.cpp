#include <iostream>
using namespace std;
int main() {
    int n=1000;
    int ans =0;
  for (int i=1; i<1000; i++){
      if (i%3==0 | i%5==0){
        ans  +=i;
      }
  }
  cout<<ans;

    return 0;
}
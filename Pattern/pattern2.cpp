#include<bits/stdc++.h>
using namespace std;

// 3 2 1
// 3 2 1
// 3 2 1
int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int col=0;
    while(col<n){
      cout<<n-col<<" ";
      col++;
    }
    cout<<"\n";
    row++;

  }
  
  return 0;
}
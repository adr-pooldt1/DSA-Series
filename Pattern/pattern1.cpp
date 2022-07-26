#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int col=1;
    while(col<=n){
      cout<<col<<" ";
      col++;
    }
    cout<<"\n";
    row++;
  }
  return 0;
}
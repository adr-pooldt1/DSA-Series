#include<bits/stdc++.h>
using namespace std;
//    *
//   **
//  ***
// ****
int main(){
  int n;
  cin>>n;

  int row=1;
  while(row<=n){
    int space=n-row;
    while(space--){
      cout<<" ";
    }
    int col=1;
    while(col<=row){
      cout<<"*";
      col++;
    }
    cout<<"\n";
    row++;
  }
  
  return 0;
}
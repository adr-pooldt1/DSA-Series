#include<bits/stdc++.h>
using namespace std;
// 1 2 3
// 4 5 6
// 7 8 9

int main(){
  int n;
  cin>>n;

  int count =1;
  int row=1;
  while(row<=n){
    int col=1;
    while(col<=n){
      cout<<count<<" ";
      col++;
      count++;
    }
    cout<<"\n";
    row++;
  }
  
  return 0;
}
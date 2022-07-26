#include<bits/stdc++.h>
using namespace std;
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7
int main(){
  int n;
  cin>>n;

  int row=1;
  while(row<=n){
    int num=row;
    int col=1;
    while(col<=row){
      cout<<num<<" ";
      num++;
      col++;
    }
    cout<<"\n";
    row++;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
// 1
// 2 2
// 3 3 3 
// 4 4 4 4 
int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int col=1;
    while(col<=row){
      cout<<row<<" ";
      col++;
    }
    cout<<"\n";
    row++;
  }
  return 0;
}
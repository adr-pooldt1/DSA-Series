#include<bits/stdc++.h>
using namespace std;
// A B C 
// D E F 
// G H I
int main(){
  int n;
  cin>>n;
  
  int row=1;
  int count=0;
  while(row<=n){
    int col=1;
    while(col<=n){
      char ch='A'+count;
      cout<<ch<<" ";
      count++;
      col++;
    }
    cout<<"\n";
    row++;
  }
  
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void F(int i,int n){
  if(i<1){
    return;
  }
  cout<<i<<endl;
      F(i-1,n);
}
int main(){
  int n;
  cin>>n;
  F(n,n);
  return 0;

}
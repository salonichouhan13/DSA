#include<bits/stdc++.h>
using namespace std;
void F(int i,int n){
  if(i < 1){
    return;
  }
  F(i-1,i);
  cout<<i<<endl;
}
int main(){
  int n;
  cin>>n;
  F(n,n);
  return 0;

}
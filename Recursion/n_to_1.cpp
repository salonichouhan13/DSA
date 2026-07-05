#include<bits/stdc++.h>
using namespace std;
void F(int n){
  if(n==1){
    cout<<"1"<<endl;
    return ;
  }
  cout<<n<<endl;
   F(n-1);
}
int main(){
  int n;
  cin>>n;
  F(n);
  return 0;
}
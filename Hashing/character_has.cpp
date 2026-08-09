#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cout<<"enter your string :";
  cin>>s;
  int hash[256] = {0};
  for(char ch : s){
    hash[ch]++;
  }
  int q;
  cout<<"enter your queries"<<endl;
  cin>>q;
  while(q--){
    char c;
    cin>>c;
    cout<<hash[c]<<endl;
  }
  return 0;
}
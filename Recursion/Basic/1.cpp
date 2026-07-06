#include<bits/stdc++.h>
using namespace std;
//print name 5 times
void f(int i, int n){
  if(i>n){
    return ;
  }
  cout<<"saloni"<<endl;;
    f(i+1,n);
}

int main(){
  int n;
  cin>>n;
  f(1,n);
   return 0;

}
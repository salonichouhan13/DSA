#include<bits/stdc++.h>
using namespace std;
int secsmallest(vector<int>Array , int n){
  int smallest = Array[0];
  int secsmallest = -1;
  for(int i = 0; i<n; i++){
    if(Array[i] < smallest )
  {
    secsmallest = smallest;
    smallest = Array[i];
  } else if(Array[i] > smallest && Array[i] < secsmallest){
    smallest = secsmallest;
    
  }

  } return secsmallest;
}
int main(){
  int n;
  cout<<"enter the size of Array";
  cin>>n;
  vector<int>Array(n);
  for(int i = 0; i<n; i++){
    cin>>Array[i];

  }
  cout<<"sec smallest is "<<secsmallest(Array,n)<<endl;

  return 0;
}

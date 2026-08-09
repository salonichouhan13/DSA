#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int arr[10] ={0};
  cout<<"enter n"<<endl;
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  // pre compute
  map<int,int> mpp;
  for(int i =0; i<n; i++){
    mpp[arr[i]]++;
  }

  //Queries
  int q;
  cout<<"enter queries";
  cin>>q;
  while(q--){
    int number;
    cin>>number;
// fetch

    cout<<mpp[number]<<endl;
  }
  
  return 0;

}
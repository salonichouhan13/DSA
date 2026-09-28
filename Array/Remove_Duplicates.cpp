#include<bits/stdc++.h>
using namespace std;
int Removeduplicates(vector<int> & arr ,int n){
  int i=0;
  for(int j = 1; i<n;  j++){
    if(arr[j] != arr[i]){
      arr[i+1] = arr[j];
    }
    i++;
  }
  return i+1;
}

int main(){
  int n;
  cout<<"enter size of an arr " <<endl;
  cin>>n;
  vector<int>array(n);
  for(int i =0; i<n; i++){
    cin>>array[i];
  }
  cout<<" unique arr"<<Removeduplicates(array,n);
  return 0;
}

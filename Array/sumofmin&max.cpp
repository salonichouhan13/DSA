#include<bits/stdc++.h>
using namespace std;
int LargestElement(vector<int> array,int n){
  int largest = array[0];
  for(int i= 0; i<n; i++){
    if(array[i]>largest){
      largest = array[i];
    }
  }
  return largest;
}
int SmallestElement(vector<int> array,int n){
  int smallest = array[0];
  for(int i= 0; i<n; i++){
    if(array[i]<smallest){
      smallest = array[i];
    }
  }
  return smallest;
}
int main(){
  int n;
  cout<<"enter size of array";
  cin>>n;
  vector<int> array(n);

  //taking input

  for(int i=0; i<n; i++){
    cin>>array[i];
  }
  //call function
  cout<<"largest element is = "<<LargestElement(array,n)<<endl;
  cout<<"smallest element is = "<<SmallestElement(array,n)<<endl;
  cout<<"sum = "<<LargestElement(array,n) +SmallestElement(array,n);
  return 0;
}

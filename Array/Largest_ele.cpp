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
int main(){
  int n;
  cout<<"enter size of array";
  cin>>n;
  vector<int> array(n);

  //taking input

  for(int i=0; i<n; i++){
    cin>>array[i];
  }
  //calling function
  cout<<"largets element is = "<<LargestElement(array,n);

  return 0;
}

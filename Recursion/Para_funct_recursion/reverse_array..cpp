#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r){
  if(l<=r){
    return;
  }
  swap(arr[l],arr[r]);
   reverse( arr,l+1,r-1);
   
}
int main(){
  int arr[]={2,4,3,9,6};
  int n=5;
  reverse(arr,0,n-1);
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

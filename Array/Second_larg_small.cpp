#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> a ,int n){
int largest = a[0];
int secLargest = -1;
  for(int i =0; i<n; i++){
  if(a[i] > largest){
    secLargest =  largest;
    largest = a[i];
  } else if(a[i] < largest && a[i] > secLargest){
    secLargest = a[i];
  }
 

}
 return secLargest;
}

int main(){
  int n;
  cout<<"Enter Size of Arr";
  cin>>n;
  vector<int>a(n);
  // taking input
  for(int i =1; i<n; i++){
    cin>>a[i];
  }
  // calling function 
  cout<< "Second Largest is = "<<secondLargest(a,n);

  return 0;
}
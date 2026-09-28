// #include<bits/stdc++.h>
// using namespace std;
// int secondLargest(vector<int> a ,int n){
// int largest = a[0];
// int secLargest = -1;
//   for(int i =0; i<n; i++){
//   if(a[i] > largest){
//     secLargest =  largest;
//     largest = a[i];
//   } else if(a[i] < largest && a[i] > secLargest){
//     secLargest = a[i];
//   }
 

// }
//  return secLargest;
// }

// int main(){
//   int n;
//   cout<<"Enter Size of Arr";
//   cin>>n;
//   vector<int>a(n);
//   // taking input
//   for(int i =1; i<n; i++){
//     cin>>a[i];
//   }
//   // calling function 
//   cout<< "Second Largest is = "<<secondLargest(a,n);

//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int SecLargest(vector<int> Array , int n){
  int largest = Array[0];
  int Seclargest = -1;
  for(int i=0; i<n; i++){
    if(Array[i] > largest ){
      Seclargest = largest;
      largest = Array[i];
    }else if(Array[i] < largest && Array[i] > Seclargest){
      Seclargest = Array[i];
    }
  }return Seclargest;
}
int main(){
  int n;
  cout<<"Enter Size of Arr";
  cin>>n;
  vector<int>Array(n);
  // taking input
  for(int i =1; i<n; i++){
    cin>>Array[i];
  }
  // calling function 
  cout<< "Second Largest is = "<<SecLargest(Array,n);

  return 0;
}
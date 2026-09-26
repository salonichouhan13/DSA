// #include<bits/stdc++.h>
// using namespace std;
// int LargestElement(vector<int> array,int n){
//   int largest = array[0];
//   for(int i= 0; i<n; i++){
//     if(array[i]>largest){
//       largest = array[i];
//     }
//   }
//   return largest;
// }

// int main(){
//   int n;
//   cout<<"enter size of array";
//   cin>>n;
//   vector<int> array(n);

//   //taking input

//   for(int i=0; i<n; i++){
//     cin>>array[i];
//   }
//   //call function
//   cout<<"largest element is = "<<LargestElement(array,n)<<endl;
 
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int LargestElement(vector<int> Array,int n){
  int Largest = Array[0];
  for(int i = 0; i<n; i++){
    if(Array[i]>Largest){
      Largest=Array[i];
    }
   
  }
   return Largest;
}

int main(){
  int n;
  cout<<"Enter Size Of An Array"<<endl;
  cin>>n;
  vector<int> Array(n);
  //takiing input
  for(int i=0; i<n; i++){
  cin>>Array[i];}
  cout<<"Largest Element Is" <<LargestElement(Array,n)<<endl;

  return 0;

}
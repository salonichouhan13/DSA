// // by one place

// #include<bits/stdc++.h>
// using namespace std;
// int LeftRotated(vector<int> &arr, int n){
//   int temp = 0;
//   for(int i=1; i<n; i++){
//     arr[i-1] = arr[i];
//   }
//   arr[n-1] = temp;
// }
// // int main(){

// // }

// // by d place

// // #include<bits/stdc++.h>
// // using namespace std;
// // int byDplace(vector<int>arr,int n){
// //   int temp = 0;
// //   for(int i=2; i<n; i++){
// //     arr[i-2] = arr[i];

// //   }
// //   arr[n-2] = temp;
// // }
// int main(){
//   int n;
//   cout<<"enter the size of an array";
//   cin>>n;
//   vector<int>arr(n);


//   cout << "Enter array elements: ";
//     for(int i = 1; i < n; i++) {
//         cin >> arr[i];
//     }



// //  byDplace (arr, n);   //  function call

//     LeftRotated(arr,n);
//     cout << "Left rotated array: ";
//     for(int i = 1; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
//   }


// #include<bits/stdc++.h>
// using namespace std;
// int LeftRotated(int arr[],int n, int d){
//   reverse(arr,arr+d);
//   reverse(arr+d ,arr+n);
//   reverse(arr,arr+n);
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   int d;
//   LeftRotated(arr,n,d);
//     for(int i=0; i<n; i++){
//       cout<<arr<<"";
//     }
  
//   return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void LeftRotated(vector<int>& arr, int n) {

    int temp = arr[0];

    for(int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
}

int main() {

    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    LeftRotated(arr, n);

    cout << "Left rotated array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
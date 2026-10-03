#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int>& A ,int m ,vector<int>&B,int n){
  vector<int>ans;
  int vis[m] = {0};
  for(int i =0; i<n; i++){
    for(int j = 0; j<m; j++ ){
      if(A[i]==B[j] && vis[j]==0){
        ans.push_back(A[i]);
        vis[j] =1;
        break;
      }
      if(B[j] > A[i]) break;
    }
  }
  return ans;
}
int main(){
  int n;
  cout<<"enter size of Arr A"<<endl;
  cin>>n;
  vector<int>A(n);
  cout<<"enter Elements Of Arr A"<<endl;
  for(int i = 0; i<n; i++){
    cin>>A[i];
  }
  int m;
  cout<<"enter size of Arr B"<<endl;
  cin>>m;
  vector<int>B(m);
  cout<<"enter Elements Of Arr A"<<endl;
  for(int i = 0; i<m; i++){
    cin>>B[i];
  }
  vector<int> ans = Intersection(A,n,B,m);
  cout<<"Intersection: ";
  for(int x : ans){
    cout<<x<<"";
  }
  return 0;

}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int s,k,b,p;
  cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
      cin>>arr[i];
  }
  cin>>k;
  for(int i=0;i<k;i++){
      cin>>b>>p;
      arr[b-2]+=p-1;
      arr[b]+=arr[b-1]-p;
      arr[b-1]=0;
  }
  for(int i=0;i<s;i++){
      cout<<arr[i]<<endl;
  }
  
  return 0;
}

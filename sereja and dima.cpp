#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n];
  int count=0;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
 int s=0,d=0;
 int l=0,r=n-1;
 int take=n,turn=0;
 while(take !=0){
     if(turn%2==0){
         if(a[l]>a[r]){
             s+=a[l];
             l++;
         }else{
            s+=a[r];
             r--;
         }
     }
    else{
        if(a[l]>a[r]){
            d+=a[l];
            l++;
    } else{
        d+=a[r];
        r--;
    }
 }
 turn++;
 take--;
}
cout<<s<<" "<<d<<endl;
return 0;
}

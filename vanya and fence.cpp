#include <iostream>
using namespace std;
int main() {
   int n,h,i,a,sum=0;
   cin>>n>>h;
   if ((n<1 || n>1000) || h<1 || h>1000){
       exit(0);
   }
   for(i=0;i<n;i++){
       cin>>a;
       if (a<1 || a>(2*h)){
           exit(0);
       }
       if (a<=h){
           sum += 1;
       }else{
           sum+=2;
       }
   }
   cout<<sum;
    return 0;
}

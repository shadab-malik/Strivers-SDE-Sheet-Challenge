#include <bits/stdc++.h> 
void sort012(int *arr, int n){
   int n1=0,n2=0,n3=0;
   // for (int i = 0; i < n; i++) {
   //    if(arr[p1]==0){
   //       swap(arr[p1],arr[p0]); p0++;p1++;
   //    }else if(arr[p1]==2){
   //       swap(arr[p1],arr[p2]); p2--;
   //    } else p1++;
   // }
   //using counting...
   for(int i=0; i<n; i++){
      if(arr[i]==0) n1++;
      else if(arr[i]==1) n2++;
      else n3++;
   }
   for(int i=0; i<n; i++){
           if(n1!=0) arr[i]=0,n1--;
           else if(n2!=0) arr[i]=1,n2--;
           else if(n3!=0) arr[i]=2,n3--;
       }

   //   Write your code here
}

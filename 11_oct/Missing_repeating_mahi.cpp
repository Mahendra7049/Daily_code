#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
   map<int,int> m;
   int n= a.size();

   vector<int> v;
   int sum=(n*(n+1))/2;

   for(int i=0;i<n;i++){
       m[a[i]]++;
       
       
   }
   int ans;
   int ans2;
   for(auto it:m){
       if(it.second==2){
           ans2=it.first;

       }
   }

   for(int i=0;i<n;i++){
       if(a[i]==ans2){
           a[i]=0;
           break;
       }
   }
   for(int i=0;i<n;i++){
       sum=sum-a[i];
   }
   ans=sum;
   v.push_back(ans2);
   v.push_back(ans);

   return v;

}

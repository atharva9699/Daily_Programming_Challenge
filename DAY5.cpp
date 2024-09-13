vector<int> superiorElements(vector<int>&a) {
   int max=INT_MIN;
   int n=a.size();
   vector<int>ans;
   for(int i=n-1;i>=0;i--) {
       if(a[i]>max){
           max=a[i];
           ans.push_back(a[i]);
       }
   }
   sort(ans.begin(),ans.end());
   return ans;
}

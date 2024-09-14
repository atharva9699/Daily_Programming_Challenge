#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, -3, 3, -1, -1};
    int n = arr.size();
    int target = 0; 
    vector<pair<int,int >> result;
    for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        
        sum+=arr[j];
        if(sum==target){
            result.push_back({i,j});
        }
    }
}
cout<<"[";
for (size_t i = 0; i < result.size(); ++i) {
cout << "(" << result[i].first << ", " << result[i].second << ")";
if (i < result.size() - 1) {
    cout << ", ";
}
}
cout << "]" << endl;
    return 0;
}

//TC : O(N^2)    SC : O(1)

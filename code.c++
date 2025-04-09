#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int minPlatforms(vector<int>& arr, vector<int>& dep,int n) {
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=0,j=0,platforms=0,maxPlatforms=0;
    while(i<n && j<n){
        if (arr[i]<=dep[j]) {  
            platforms++;        
            maxPlatforms=max(maxPlatforms,platforms);
            i++;
        } else { 
            platforms--;
            j++;
        }
    }
    return maxPlatforms;
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n),dep(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
         cin >> dep[i];
    }
    cout<<minPlatforms(arr,dep,n)<< endl;
    return 0;
}

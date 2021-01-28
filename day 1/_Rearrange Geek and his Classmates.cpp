//https://practice.geeksforgeeks.org/problems/47e5aa3f32aee9e0405f04960f37c8a562d96a2f/1/?track=30-DOC-day-1&batchId=320#

//User function template for C++

class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        long long ans[n+1];
        
        for(int i=0;i<n;i++){
            ans[i] = a[i];
            if(a[i] != i){
                int j=a[i];
                ans[i] = a[j];
            }
        }
        for(int i=0;i<n;i++){
            a[i] = ans[i];
        }
    }
};

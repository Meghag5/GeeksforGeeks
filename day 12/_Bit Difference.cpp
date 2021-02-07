//https://practice.geeksforgeeks.org/problems/760a2a0627f1abf231de42b93bb71825ecbcb3b4/1/?track=30-DOC-day-12&batchId=320


//User function Template for C++

class Solution{
    public:
    long long sumBitDiff(int arr[], int n) 
    { 
        // Your code goes here
                //array of fixed size - O(1) space
        long long ans = 0;
        int count[64] = {0};
        for(int i=0;i<n;i++){
            int no = arr[i];
            int j = 0;
            while(no){
                count[j] += (no&1);
                j++;
                no = no>>1;
            }
            
        }
        
        for(int i=0;i<32;i++){
            ans += count[i]*(n-count[i]);
        }
        
        return ans*2;
    }
};

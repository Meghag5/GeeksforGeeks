//https://practice.geeksforgeeks.org/problems/e47329920b4e75869ea7b0e9b7c59ea145ccc22c/1/?track=30-DOC-day-27&batchId=320#

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int ans = 0;
        vector<int> p;
        vector<int> t;
        
        for(int i=0;i<n;i++){
            if(arr[i] == 'P'){
                p.push_back(i);
            }
            else if(arr[i] == 'T'){
                t.push_back(i);
            }
        }
        
        int i=0,j=0;
        while(i < p.size() && j < t.size()){
            if(abs(p[i]-t[j]) <= k){
                ans++;
                i++;
                j++;
            }
            else if(p[i]<t[j]){
                i++;
            }
            else{
                j++;
            }
        }
        
        return ans;
    }
};

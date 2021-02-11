//https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1/?track=30-DOC-day-17&batchId=320#

//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> help(n,-1);
        int i;
        
        for(i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i] > arr[j]){
                    help[i]=arr[j];
                    break;
                }
            }
        }
        
        return help;
    } 
};

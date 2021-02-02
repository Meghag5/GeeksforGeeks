//https://practice.geeksforgeeks.org/problems/10471201e923a0b88a0c1482e6c7e8cc6fdfe93a/1/?track=30-DOC-day-8&batchId=320

class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int low = 0, high = n-1;
        int area,ans=0;
        
        while(low<high){
            area = min(height[low],height[high])*(high-low-1);
            ans = max(ans,area);
            if(height[low]>height[high]){
                high--;
            }
            else if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
                low++;
            }
        }
        
        return ans;
    }   
};

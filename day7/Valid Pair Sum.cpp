//https://practice.geeksforgeeks.org/problems/3b76f77c1b2107f809b1875aa9fe929ce320be97/1/?track=30-DOC-day-7&batchId=320#


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	sort(a,a+n);
    	long long count = 0;
    	        long long low = 0,high = n-1;
    	        while(low<high){
    	            if(a[low] + a[high] > 0){
    	                count += high-low;
    	                high = high-1;
    	            }
    	            else{
    	                low = low+1;
    	            }
    	        }
    
    	return count;
    }   
};

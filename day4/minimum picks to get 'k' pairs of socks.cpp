//https://practice.geeksforgeeks.org/problems/620fb6456d6515faddd77050dfbf2821d7a94b8a/1/?track=30-DOC-day-4&batchId=320#

class Solution{

	public:
	int find_min(int a[], int n, int k) {
        // Your code geos here
        int sum=0;
        for(int i=0;i<n;i++){
            sum += a[i]/2;
        }
        if(k>sum){
            return -1;
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            count+= (a[i]-1)/2;
        }
        if(k>count){
            return (2*count + n + (k-count));
        }
        
        return 2*(k-1) + n+1;
    }

};

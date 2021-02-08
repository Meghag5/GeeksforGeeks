//https://practice.geeksforgeeks.org/problems/974612adac31d8e35448df5879342690f841c532/1/?track=30-DOC-day-14&batchId=320


class Solution{
    
    public:
    int RulingPair(vector<int> arr, int n) 
    { 
    	// Your code goes here
    	unordered_map<int,int> m;
    	vector<int> sum(n,0);
    	int ans = -1;
    	
    	for(int i=0;i<n;i++){
    	    int num = arr[i],temp = 0;
    	    while(num>0){
    	        int r = num%10;
    	        temp += r;
    	        num /= 10;
    	    }
    	    sum[i] = temp;
    	    
    	}
    	
    	for(int i=0;i<n;i++){
    	    if(m.find(sum[i]) != m.end()){
    	        int pairsum = m[sum[i]] + arr[i];
    	        ans = max(ans,pairsum);
    	        m[sum[i]] = max(m[sum[i]],arr[i]);
    	    }
    	    else
    	    m[sum[i]] = arr[i];
    	}

    	
    	return ans;
    }   
};

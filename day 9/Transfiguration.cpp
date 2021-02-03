//https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1/?track=30-DOC-day-9&batchId=320#


class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	int la = A.length();
    	int lb = B.length();
    	int count = 0;
    	unordered_map<char,int> m;
    	
    	if(la != lb){
    	    return -1;
    	}
    	
    	for(int i=0;i<la;i++){
    	    m[A[i]]++;
    	}
    	
    	for(int i=0;i<lb;i++){
    	    m[B[i]]--;
    	}
    	
    	for(auto i:m){
    	    if(i.second != 0)
    	    return -1;
    	}
    	
    	int i = la-1,j = la-1;
    	while(i>=0 && j>=0){
    	    while(i>=0 && A[i] != B[j]){
    	        count++;
    	        i--;
    	    }
    	    if(i>=0){
    	        j--;
    	        i--;
    	    }
    	}
    	
    	return count;
    }
};

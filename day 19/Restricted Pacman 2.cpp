//https://practice.geeksforgeeks.org/problems/2caf0501a39567d653197364a2b5c8a9f5943b7e/1/?track=30-DOC-day-19&batchId=320


class Solution{
    public:
    int candies(int m, int n) 
    { 
    	// Your code goes here
    	int x = (m*n)-m-n; //this will help to find the highest no. which will not come in the list
    	queue<int> q;
    	int count=0;
    	q.push(x);
    	
    	while(q.size()>0){
    	    int curr = q.front();
    	    q.pop();
    	    count++;
    	    if(curr-m > 0){
    	        q.push(curr-m);
    	    }
    	    if(curr-n > 0){
    	        q.push(curr-n);
    	    }
    	}
    	
    	return count;
    } 
};

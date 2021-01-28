
//https://practice.geeksforgeeks.org/problems/nth-natural-number/1/?track=30-DOC-day-2&batchId=320


//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long long num=N;
        long long p =1;
        long long ans =0;
        while(num > 0){
            ans += p*(num%9);
            num /= 9;
            p = p*10;
        }
        return ans;
    }
};

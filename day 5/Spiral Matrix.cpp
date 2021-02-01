// https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1/?track=30-DOC-day-5&batchId=320#

class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        vector<int> v;
        int i=0,j=0;
        while(i<n && j<m){
            for(int k=j;k<m;k++){
                v.push_back(a[i][k]);
            }
            i++;
            for(int k=i;k<n;k++){
                v.push_back(a[k][m-1]);
            }
            m--;
            
            for(int k=m-1;k>=j;k--){
                v.push_back(a[n-1][k]);
            }
            n--;
            
            
            for(int k=n-1;k>=i;k--){
                v.push_back(a[k][j]);
            }
            j++;
        }
        
        return v[k-1];
    }

};

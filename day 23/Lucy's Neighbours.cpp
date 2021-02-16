//https://practice.geeksforgeeks.org/problems/20b8ec4db3f8da0697acdd3d54d9af9f76405443/1/?track=30-DOC-day-23&batchId=320

//User function Template for C++
bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second < b.second;
}

class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        // Your code goes here 
        int l = arr.size();
        priority_queue<pair<int,int>> q;
        vector<pair<int,int>> v;
        vector<int> ans;
        
        for(int i=0;i<l;i++){
            q.push({abs(x-arr[i]),arr[i]});
            if(q.size()>k)
            q.pop();
            }
           
        while(q.size()>0){
            v.emplace_back(q.top().first,q.top().second);
            q.pop();
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto i:v){
            ans.push_back(i.second);
        }
        
        return ans;
    }  
};

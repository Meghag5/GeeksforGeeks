//https://practice.geeksforgeeks.org/problems/bbd15e2da95880979ce65acc7360e2c5681664e65520/1/?track=30-DOC-day-24&batchId=320

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second>b.second){
        return true;
    }
    else if(a.second == b.second){
        return a.first>b.first;
    }
    else 
        return false;
}

class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        int n = array.size();
        unordered_map<int,int> m;
        vector<pair<int,int>> v;
        vector<int> ans;
       
        
        for(int i=0;i<n;i++){
            m[array[i]]++;
        }
        
        for(auto i:m){
            v.emplace_back(i.first,i.second);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto i:v){
            if(k>0){
                ans.push_back(i.first);
            }
            k--;
        }
        
        return ans;
    }
};

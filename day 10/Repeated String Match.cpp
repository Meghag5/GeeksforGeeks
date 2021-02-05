//https://practice.geeksforgeeks.org/problems/0cba668df04d657fde4d1bd28b626a01e61097f1/1/?track=30-DOC-day-10&batchId=320

class Solution{

    public:
    bool isSubstring(string B,string s){
        int lb = B.length();
        int ls = s.length();
        
        for(int i=0;i<=ls-lb;i++){
            int j;
            for(j=0;j<lb;j++){
                if(s[i+j] != B[j])
                break;
            }
            if(j==lb)
            return true;
        }
        return false;
    }
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int la = A.length();
        int lb = B.length();
        int ans = 1;
        
        string str = A;
        while(str.length() < lb){
            str += A;
            ans++;
        }
        
        if(isSubstring(B,str)){
            return ans;
        }
        
        if(isSubstring(B,str+A)){
            return ans+1;
        }
        
        return -1;
    }
};

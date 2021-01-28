//https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1/?track=30-DOC-day-3&batchId=320#

//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(),array.end());
        long long ans = 1;
        long long sum = array[0];
        if(sum > 1){
            return 1;
        }
        for(int i=1;i<array.size();i++){
            if((array[i]-sum)>1){
                ans += array[i-1];
                break;
            }
            else{
                sum += array[i];
            }
        }
        // code here 
        return sum+1;
    } 
};

//https://practice.geeksforgeeks.org/problems/355f731797ea1acbd5ab698b19eb1c3c469aa837/1/?track=30-DOC-day-18&batchId=320

//User function template for C++

class Solution{
public:
	bool recreationalSpot(int arr[], int n){
		// Your code goes here 
		stack<int> s;
		
		for(int i=0;i<n;i++){
		    if(s.empty() || arr[i]>s.top()){
		        s.push(arr[i]);
		        continue;
		    }
		    while(arr[i]<=s.top()){
		        s.pop();
		        if(s.empty()){
		            s.push(arr[i]);
		            break;
		        }
		        else if(arr[i]>s.top()){
		            return true;
		        }
		    }
		}
		
		return false;
	}
};

//https://practice.geeksforgeeks.org/problems/cb02d40f50b0113c47cd9036e5f340bb51b32289/1/?track=30-DOC-day-13&batchId=320

class Solution{
    public:
    bool checktree(int preorder[], int inorder[], int postorder[], int N) 
    { 
    	// Your code goes here
    	if(N == 0){
    	    return 1;
    	}
    	if(N == 1){
    	    return ((preorder[0] == inorder[0]) && (inorder[0] == postorder[0]));
    	}
    	
    	int idx = -1;
    	for(int i=0;i<N;i++){
    	    if(inorder[i] == preorder[0]){
    	        idx = i;
    	        break;
    	    }
    	}
    	
    	if(idx == -1){
    	    return 0;
    	}
    	if(preorder[0] != postorder[N-1]){
    	    return 0;
    	}
    	
    	int left = checktree(preorder+1,inorder,postorder,idx);
    	int right = checktree(preorder+idx+1,inorder+idx+1,postorder+idx,N-idx-1);
    	
    	return (left && right);
    } 

};

//https://practice.geeksforgeeks.org/problems/d1afdbd3d49e4e7e6f9d738606cd592f63e6b0f0/1/?track=30-DOC-day-21&batchId=320

class Solution{
    static int ans = 0;
    
    public static int post(Node node){
        boolean zero = false,two = false;
        if(node.left == null && node.right == null)
            return 0;
        
        if(node.left != null){
            int get = post(node.left);
            if(get == 0)
                zero = true;
            if(get == 2)
                two = true;
        }
        if(node.right != null){
            int get = post(node.right);
            if(get == 0)
                zero = true;
            if(get == 2)
                two = true;
        }
        if(zero == true){
            ans++;
            return 2;
        }
        if(two == true){
            return 1;
        }
        return 0;
    }
    
    public static int supplyVaccine(Node root){
        // Your code goes here
        ans = 0;
        int result = post(root);
        if(result == 0)
            return ans+1;
        return ans;
    }
}

/*

// } Driver Code Ends
//User function template for C++


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        int left = height(node ->left);
        int right = height(node -> right);
        return max(left,right)+1;
    }
};


*/

/*

class Solution {
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        return max(left,right)+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root ==NULL){
            return 0;
        }
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right) +1;
        return max(op1,max(op2,op3));
    }
};
TC = O(n^2) 


//TC =O(N)
O(N)
class Solution {
  public:
    pair<int,int> diameterFast(Node* root){
        if(root==NULL){
            pair<int,int>p = make_pair(0,0);
            return p;
        }
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second +1;
        pair<int,int>ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second,right.second)+1;
        return ans;
        
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        return diameterFast(root).first;
    }
};
*/

/*
int height(Node* node){
        if(node ==NULL){
            return 0;
        }
        int left = height(node->left);
        int right = height(node ->right);
        return max(left,right)+1;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
      if(root ==NULL){
             return true;
         }
         bool left = isBalanced(root->left);
         bool right = isBalanced(root->right);
         bool diff = abs(height(root->left) - height(root->right)) <=1;
         
         if(left && right && diff){
             return true;
         }
         else{
             return false;
         }
    }
*/




























/*
 public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1 ==NULL && r2 ==NULL){
            return true;
        }
        if(r1 ==NULL && r2 != NULL || r1 != NULL && r2 ==NULL){
            return false;
        }
        
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right,r2->right);
        
        bool value = r1->data == r2->data;
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }

*/

/*
    public:
    pair<bool,int> isSumTreeFast(Node* root){
        if(root == NULL){
            pair<bool,int> p = make_pair(true, 0);
            return p;
        }
        if(root->left==NULL && root->right==NULL ){
            pair<bool,int>p = make_pair(true,root->data);
            return p;
        }
        pair<bool,int> leftans = isSumTreeFast(root->left);
        pair<bool,int> rightans = isSumTreeFast(root->right);
        
        bool left = leftans.first;
        bool right = rightans.first;
        bool condn = root->data == leftans.second + rightans.second;
        pair<bool,int> ans;
        if(left && right && condn){
            ans.first = true;
            ans.second = 2*root->data;
        }
        else{
            ans.first = false;
        }
        return ans;
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }
*/
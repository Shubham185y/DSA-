/*
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	if(root==NULL){
    	    return result;
    	}
    	bool Lefttoright = true;
    	queue<Node*>q;
    	q.push(root);
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> ans(size);
    	for(int i=0;i<size;i++){
    	    Node* frontnode = q.front();
    	    q.pop();
    	    int index = Lefttoright ? i : size-i-1;
    	    ans[index] = frontnode->data;
    	    if(frontnode->left){
    	        q.push(frontnode->left);
    	    }
    	    if(frontnode->right){
    	        q.push(frontnode->right);
    	    }
    	}
    	 Lefttoright =! Lefttoright;
    	for(auto i: ans){
    	    result.push_back(i);
    	}
    	}
    	return result;
    	
    }
};
*/


class Solution {
public:

    void TraversalLeft(Node*root, vector<int>&ans){
        if(root==NULL ||(root->left==NULL && root->right==NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            TraversalLeft(root->left,ans);
        }
        else{
            TraversalLeft(root->right,ans);
        }
    }
    
    void TraversalLeaf(Node*root, vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        TraversalLeaf(root->left,ans);
        TraversalLeaf(root->right,ans);
    }
    void TraverseRight(Node*root, vector<int>&ans){
        if(root==NULL ||(root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
            TraverseRight(root->right,ans);
        }
        else{
            TraverseRight(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root ==NULL){
            return ans;
        }
        ans.push_back(root->data);
        TraversalLeft(root->left,ans);
        TraversalLeaf(root->left,ans);
        TraversalLeaf(root->right,ans);
        TraverseRight(root->right,ans);
        return ans;
    }
};
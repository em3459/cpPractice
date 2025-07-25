/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <climits>
class Solution {
private:
int maxPathSumFinder(TreeNode* root,int& maxi){
    if (root==NULL)return 0;
    int left=max(0,maxPathSumFinder(root->left,maxi));//change here like this or use if (left<0) return 0;
    int right=max(0,maxPathSumFinder(root->right,maxi));//change here like this or use if (right<0) return 0;
    maxi=max(maxi,left+right+root->val);
    return root->val+max(left,right);

}
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;//not maxi=0..it is error
        //why different functuilon?
        //because maxi wont be global variable everytime you call the recursion
        //it will initoialize with 0
        //everytimne you call function
        maxPathSumFinder(root,maxi);
        return maxi;
        
        
    }
};
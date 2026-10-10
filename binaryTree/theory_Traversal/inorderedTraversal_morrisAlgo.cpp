#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

};
// mories algo
class Solution {
public:
  static vector<int> inorder(TreeNode *root)
  {
    TreeNode* curr = root;
    vector<int> result;
    while(curr!=NULL)
    {
      
      if(curr->left==NULL)
      {
        result.push_back(curr->val);
        curr = curr->right;
      }
      else
      {
        TreeNode* currLeft = curr->left;
        while (currLeft->right!=NULL)
        {
          currLeft = currLeft->right;
        }
        currLeft->right = curr;
        TreeNode* temp = curr;
        curr = curr->left;
        temp->left = NULL;
      }
    }
    return result;
  }
};

int main() {
  TreeNode* root = new TreeNode(1);
  root->right = new TreeNode(2);
  root->right->left = new TreeNode(3);

  vector<int> ans = Solution::inorder(root);   // no object needed

  for (int x : ans) cout << x << " ";
  cout << endl;   // 1 3 2
}
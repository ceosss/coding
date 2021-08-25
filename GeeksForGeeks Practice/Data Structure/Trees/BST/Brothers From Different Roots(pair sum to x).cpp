class Solution
{
public:
    // TC - O(m+n)
    // SC - O(n)
    unordered_map<int, bool> m;
    void mapIt(Node *root)
    {
        if (!root)
            return;
        m[root->data] = true;
        mapIt(root->left);
        mapIt(root->right);
    }
    void count(Node *root, int x, int &res)
    {
        if (!root)
            return;
        if (m[x - root->data])
            res++;
        count(root->left, x, res);
        count(root->right, x, res);
    }
    int countPairs(Node *root1, Node *root2, int x)
    {
        m.clear();
        int res = 0;
        mapIt(root2);
        count(root1, x, res);
        return res;
    }
    // TC - O(Nh) // O(NlogM)
    // SC - O(1)
    // bool find(Node *root,int x)
    // {
    //     if(!root) return false;
    //     if(root->data==x)
    //         return true;
    //     else if(root->data>x)
    //         return find(root->left,x);
    //     else
    //         return find(root->right,x);
    // }
    // void count(Node *root1, Node *root2, int x, int &res){
    //     if(!root1) return;
    //     if(find(root2,x-root1->data)) res++;
    //     count(root1->left,root2,x,res);
    //     count(root1->right,root2,x,res);
    // }
    // int countPairs(Node* root1, Node* root2, int x)
    // {
    //     int res = 0;
    //     count(root1,root2,x,res);
    //     return res;
    // }
};
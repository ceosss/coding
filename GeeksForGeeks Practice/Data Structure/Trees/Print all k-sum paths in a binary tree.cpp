class Solution
{
public:
    vector<int> path;

    void print(Node *root, int k)
    {
        if (!root)
            return;
        path.push_back(root->data);
        print(root->left, k);
        print(root->right, k);
        int sum = 0;
        for (int i = path.size() - 1; i >= 0; i--)
        {
            sum += path[i];
            if (sum == k)
            {
                for (int j = i; j < path.size(); j++)
                    cout << path[j] << " ";
                cout << endl;
            }
        }
        path.pop_back();
    }
};

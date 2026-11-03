// A inary tree is a non-linear data structure in which each node can have a maximum of two children, left child and right child.
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
    Node *root;

    // Inorder Traversal: Left -> Root -> Right
    void inorder(Node *node)
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    // Pre-order Traversal:  Root -> Left -> Right
    void preorder(Node *node)
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
    // Post-order Traversal:  Left -> Right -> Root
    void postorder(Node *node)
    {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    // search node recursively
    bool search(Node *node, int key)
    {
        if (node == nullptr)
            return false;
        if (node->data == key)
            return true;
        return search(node->left, key) || search(node->right, key);
    }

    // count nodes recursively
    int countNodes(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    // find height
    int height(Node *node)
    {
        if (node == nullptr)
            return 0;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1 + max(leftHeight, rightHeight);
    }

    // delete all nodes
    void destroy(Node *node)
    {
        if (node == nullptr)
            return;
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
    BinaryTree()
    {
        root = nullptr;
    }
    ~BinaryTree()
    {
        destroy(root);
    }

    // insert using level order
    void insert(int value)
    {
        Node *newNode = new Node(value);

        // if tree is empty
        if (root == nullptr)
        {
            root = newNode;
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();

            // check left child
            if (current->left == nullptr)
            {
                current->left = newNode;
                return;
            }
            else
                q.push(current->left);
            // check right child
            if (current->right == nullptr)
            {
                current->right = newNode;
                return;
            }
            else
                q.push(current->right);
        }
    }

    void inorderTraversal()
    {
        inorder(root);
        cout << endl;
    }
    void preorderTraversal()
    {
        preorder(root);
        cout << endl;
    }
    void postorderTraversal()
    {
        postorder(root);
        cout << endl;
    }

    // level order traversal
    void levelOrder()
    {
        if (root == nullptr)
            return;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }
        cout << endl;
    }

    // search function
    void searchValue(int key)
    {
        if (search(root, key))
            cout << key << " is found in the tree" << endl;
        else
            cout << key << " not found in the tree" << endl;
    }

    // count nodes
    void totalNodes()
    {
        cout << "Total Nodes: " << countNodes(root) << endl;
    }

    // height
    void treeHeight()
    {
        cout << "Height: " << height(root) << endl;
    }
};
int main()
{
    BinaryTree tree;
    int n, value;
    cout << "Enter no. of Nodes: ";
    cin >> n;
    cout << "Enter node values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        tree.insert(value);
    }
    cout << endl
         << "Inorder Traversal: ";
    tree.inorderTraversal();
    cout << endl
         << "Pre-order Traversal: ";
    tree.preorderTraversal();
    cout << endl
         << "Post-order Traversal: ";
    tree.postorderTraversal();
    cout << endl
         << "Level order Traversal: ";
    tree.levelOrder();

    tree.totalNodes();
    tree.treeHeight();

    int key;
    cout << endl
         << "Enter Seach Value: ";
    cin >> key;
    tree.searchValue(key);

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

// class Node
class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
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
    // inorder Traversal: Left -> Root -> Right
    void inorder(Node *node)
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    // pre-order Traversal: Root -> Left -> Right
    void preorder(Node *node)
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        inorder(node->left);
        inorder(node->right);
    }
    // post-order Traversal: Left -> Right -> Root
    void postorder(Node *node)
    {
        if (node == nullptr)
            return;
        inorder(node->left);
        inorder(node->right);
        cout << node->data << " ";
    }

    // search recursively
    bool search(Node *node, int key)
    {
        if (node == nullptr)
            return false;
        if (node->data == key)
            return true;
        return search(node->left, key) || search(node->right, key);
    }
    int countNodes(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }
    int height(Node *node)
    {
        if (node == nullptr)
            return 0;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1 + max(leftHeight, rightHeight);
    }
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
    void insert(int value)
    {
        Node *newNode = new Node(value);
        // if tree is empty
        if (root == nullptr)
        {
            root = newNode;
            return;
        }
        queue<Node *> q1;
        q1.push(root);
        while (!q1.empty())
        {
            Node *current = q1.front();
            q1.pop();

            // check the left child
            if (current->left == nullptr)
            {
                current->left = newNode;
                return;
            }
            else
                q1.push(current->left);
            // check the right child
            if (current->right == nullptr)
            {
                current->right = newNode;
                return;
            }
            else
                q1.push(current->right);
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

    // level-order traversal
    void levelOrder()
    {
        // if tree is empty
        if (root == nullptr)
            return;
        queue<Node *> q1;
        q1.push(root);
        while (!q1.empty())
        {
            Node *current = q1.front();
            q1.pop();
            cout << current->data << " ";

            if (current->left != nullptr)
                q1.push(current->left);
            if (current->right != nullptr)
                q1.push(current->right);
        }
        cout << endl;
    }
    void searchValue(int key)
    {
        if (search(root, key))
            cout << key << " found in the tree" << endl;
        else
            cout << key << " not found in the tree" << endl;
    }
    void totalNodes()
    {
        cout << "Total node: " << countNodes(root) << endl;
    }
    void treeHeight()
    {
        cout << "Height: " << height(root) << endl;
    }
};

int main()
{
    BinaryTree tree;
    int n, value;
    cout << "Enter no. of nodes: ";
    cin >> n;
    cout << "Enter node values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        tree.insert(value);
    }
    cout << "Inorder Traversal: ";
    tree.inorderTraversal();
    cout << "Pre-order Traversal: ";
    tree.preorderTraversal();
    cout << "Post-order Traversal: ";
    tree.postorderTraversal();
    cout << "Level-order Traversal: ";
    tree.levelOrder();
    tree.totalNodes();
    tree.treeHeight();
    int key;
    cout << endl
         << "Enter value to search: ";
    cin >> key;
    tree.searchValue(key);
    return 0;
}
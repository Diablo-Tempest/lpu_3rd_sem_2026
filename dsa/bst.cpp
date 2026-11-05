#include <iostream>
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
class BST
{
    Node *root;

    // insert a node
    Node *insertNode(Node *current, int value)
    {
        if (current == nullptr)
            return new Node(value);
        if (value < current->data)
            current->left = insertNode(current->left, value);
        if (value > current->data)
            current->right = insertNode(current->right, value);
        return current;
    }
    bool searchNode(Node *current, int key)
    {
        if (current == nullptr)
            return false;
        if (current->data == key)
            return true;
        if (key < current->data)
            return searchNode(current->left, key);
        return searchNode(current->right, key);
    }

    void inorder(Node *current)
    {
        if (current == nullptr)
            return;
        inorder(current->left);
        cout << current->data << " ";
        inorder(current->right);
    }
    void preorder(Node *current)
    {
        if (current == nullptr)
            return;
        cout << current->data << " ";
        inorder(current->left);
        inorder(current->right);
    }
    void postorder(Node *current)
    {
        if (current == nullptr)
            return;
        inorder(current->left);
        inorder(current->right);
        cout << current->data << " ";
    }

    // find the minimum element
    Node *findMin(Node *current)
    {
        while (current != nullptr && current->left != nullptr)
            current = current->left;
        return current;
    }

    Node *deleteNode(Node *current, int value)
    {
        if (current == nullptr)
            return nullptr;
        if (value < current->data)
            current->left = deleteNode(current->left, value);
        else if (value > current->data)
            current->right = deleteNode(current->right, value);
        else
        {
            // no child
            if (current->left == nullptr && current->right == nullptr)
            {
                delete current;
                return nullptr;
            }
            // only one child
            if (current->left == nullptr)
            {
                Node *temp = current->right;
                delete current;
                return temp;
            }
            if (current->right == nullptr)
            {
                Node *temp = current->left;
                delete current;
                return temp;
            }

            // two children
            Node *successor = findMin(current->right);
            current->data = successor->data;
            current->right = deleteNode(current->right, successor->data);
        }
        return current;
    }
    void destroy(Node *current)
    {
        if (current == nullptr)
            return;
        destroy(current->left);
        destroy(current->right);
        delete current;
    }

public:
    BST()
    {
        root = nullptr;
    }
    ~BST()
    {
        destroy(root);
    }
    void insert(int value)
    {
        root = insertNode(root, value);
    }
    void search(int value)
    {
        if (searchNode(root, value))
            cout << value << " is found in the tree" << endl;
        else
            cout << value << " is not found in the tree" << endl;
    }
    void remove(int value)
    {
        root = deleteNode(root, value);
    }
    void displayInorder()
    {
        cout << "Inorder: ";
        inorder(root);
        cout << endl;
    }
    void displayPreOrder()
    {
        cout << "Pre-order: ";
        preorder(root);
        cout << endl;
    }
    void displayPostOrder()
    {
        cout << "Post-Order: ";
        postorder(root);
        cout << endl;
    }
};
int main()
{
    BST tree;
    tree.insert(50);
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(60);
    tree.insert(70);

    tree.displayInorder();
    tree.displayPreOrder();
    tree.displayPostOrder();

    tree.search(40);
    tree.search(100);

    tree.remove(30);

    cout << endl
         << "After deleting 30 from the tree:" << endl;
    tree.displayInorder();

    return 0;
}
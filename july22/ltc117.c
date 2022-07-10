/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    
    Node* connect(Node* root) {
        if(root == NULL || (root->left == NULL && root->right==NULL)) return root;
        Node *ans = root;
        while(root){
            Node *dummy = new Node();
            Node *t = dummy;
            while(root){
                if(root->left){
                    dummy->next = root->left;
                    dummy = dummy->next;
                }
                if(root->right){
                    dummy->next=root->right;
                    dummy = dummy->next;
                }
                root = root->next;
            }
            root = t->next;
        }
        
        return ans;
    }
};

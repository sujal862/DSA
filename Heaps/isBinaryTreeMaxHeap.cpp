#include <iostream>
#include<queue>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};

int sizeOfTree(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

bool isMax(Node* root){
    if(root == NULL) return true;
    if(root->left != NULL && root->left->val > root->val) return false;
    if(root->right != NULL && root->right->val > root->val) return false;
    return isMax(root->left) && isMax(root->right);
}

bool isCBT(Node* root){   //level order traversl
    int size = sizeOfTree(root);
    int count = 0;
    queue<Node*>q;
    q.push(root);
    while(count < size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(!q.empty()){
        Node* temp = q.front();
        if(temp != NULL) return false;
        q.pop();
    }
    return true;
}

int main(){
    Node* a = new Node(20); 
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    vector<int> dec; 
    if(isCBT(a) && isMax(a)) cout<<"Given Binary Tree is a MaxHeap";
    else cout<<"Given Binary Tree is Not a MaxHeap";
}
#include<iostream>
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

void displayTree(Node* root){
        if(root == NULL) return;
        cout<<root->val<<" ";
        displayTree(root->left);
        displayTree(root->right);
        
    }

int sum(Node* root){
    if(root==NULL) return 0;
    int ans  = root->val + sum(root->left) + sum(root->right);
    return ans;
}

int size(Node* root){
    if(root == NULL) return 0; 
    return 1 + size(root->left) + size(root->right);
}

int maxInTree(Node* root){
    if(root == NULL) return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val , max(lMax,rMax));
}

int levelOfTree(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levelOfTree(root->left),levelOfTree(root->right));
}

int product(Node* root){
    if(root==NULL) return 1;
    return root->val * product(root->left) * product(root->right);
}
 
int minInTree(Node* root){
    if(root == NULL) return INT_MAX;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return min(root->val , min(lMax,rMax));
}

void nthLevel(Node* root ,int curr,int n){
    if(root == NULL) return;
    if(curr==n) cout<<root->val<<" ";
    nthLevel(root->left,curr+1,n);
    nthLevel(root->right,curr+1,n);
}
int main(){
    Node* a = new Node(1);  //root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7); 

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl<<sum(a);
    cout<<endl<<size(a);
    cout<<endl<<maxInTree(a);
    cout<<endl<<levelOfTree(a);
    cout<<endl<<product(a);
    cout<<endl<<minInTree(a);
    cout<<endl;
    nthLevel(a,1,3);
}
     

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
int levelOfTree(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levelOfTree(root->left),levelOfTree(root->right));
}

//print nthLevel code
void nthLevel(Node* root ,int curr,int n){
    if(root == NULL) return;
    if(curr==n){
      cout<<root->val<<" ";  
      return ;
    } 
    nthLevel(root->left,curr+1,n);  //left
    nthLevel(root->right,curr+1,n);  //right
}

void nthLevelRev(Node* root ,int curr,int n){
    if(root == NULL) return;
    if(curr==n){
      cout<<root->val<<" ";  
      return ;
    } 
    nthLevel(root->right,curr+1,n);  //right
    nthLevel(root->left,curr+1,n);  //left
}

void levelorder(Node* root){
    int n = levelOfTree(root); //total levels
    for(int i=1;i<=n;i++){
        nthLevel(root , 1 , i);
        cout<<endl;
    } 
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

    // nthLevel(a,1,2);
    //level order traversal
    levelorder(a); // print all levels ele 

}
     

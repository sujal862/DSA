#include<iostream>
#include<queue>
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

Node* construct(int arr[] , int n){
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root); //push root of tree
    int i = 1;  //represents left
    int j = 2;  //represents right
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;  // i.e arr[i] = NULL
        if(j<n && arr[j]!=INT_MIN) r = new Node(arr[j]);  // j<n VIMP
        else r = NULL;

        temp->left = l; //connection 
        temp->right = r;

        if(l!=NULL) q.push(l); 
        if(r!=NULL) q.push(r); 

        i+=2;
        j+=2;
    }
    return root;
}

void leftBoundary(Node* root){   //preorder traversal
    if(root == NULL) return ;
    if(root->left!=NULL || root->right!=NULL) cout<<root->val<<" "; //to avoid print of leaf node(if left and right both = NULL)
    leftBoundary(root->left);
    if(root->left ==NULL) leftBoundary(root->right);
}

void leafNodes(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        cout<<root->val<<" ";
    }
    leafNodes(root->left);
    leafNodes(root->right);
}

void rightBoundary(Node* root){   //postorder traversal
    if(root == NULL) return ;
    rightBoundary(root->right);
    if(root->right ==NULL) rightBoundary(root->left);
    if(root->left!=NULL || root->right!=NULL) cout<<root->val<<" "; //to avoid print of leaf node (if left and right both = NULL)
}

void boundary(Node* root){
    leftBoundary(root); 
    leafNodes(root); 
    rightBoundary(root->right);
}

void levelOrderQueue(Node* root){   //BFS 
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n =q.size();
        for(int i=0;i<n;i++){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        }
    cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};  //here INT_MIN represents NULL
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root =  construct(arr, n);

    // levelOrderQueue(root);  
    boundary(root);

}
     

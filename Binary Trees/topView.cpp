#include<iostream>
#include<queue>
#include <unordered_map> 
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

void levelOrderQueue(Node* root){   //BFS 
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

void topView(Node* root){
    unordered_map<int,int>m;  //<level,root->val
    queue< pair<Node*,int> >q; //Node, level>
    //root pushed in q
    pair<Node*,int>p;
    p.first = root;
    p.second = 0; //level
    q.push(p); 
    
    while(!q.empty()){  //level order traversal
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();

        if(m.find(level)==m.end()) m[level] = temp->val; //insert in map

        if(temp->left!=NULL){
            pair<Node*,int>l;
            l.first = temp->left;
            l.second = level-1; 
            q.push(l);  
        }
        if(temp->right!=NULL){
            pair<Node*,int>r;
            r.first = temp->right;
            r.second = level+1;
            q.push(r); 
        }
        
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x : m){
        int val = x.first;
        maxLevel = max(maxLevel,val);
        minLevel = min(minLevel,val);
    }
    for(int i=minLevel; i<=maxLevel; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}


//only one line diff from top view code
void bottomView(Node* root){
    unordered_map<int,int>m;  //<level,root->val
    queue< pair<Node*,int> >q; //Node, level>
    //root pushed in q
    pair<Node*,int>p;
    p.first = root;
    p.second = 0; //level
    q.push(p); 
    
    while(!q.empty()){  //level order traversal
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();

        m[level] = temp->val; //insert in map

        if(temp->left!=NULL){
            pair<Node*,int>l;
            l.first = temp->left;
            l.second = level-1; 
            q.push(l);  
        }
        if(temp->right!=NULL){
            pair<Node*,int>r;
            r.first = temp->right;
            r.second = level+1;
            q.push(r); 
        }
        
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x : m){
        int val = x.first;
        maxLevel = max(maxLevel,val);
        minLevel = min(minLevel,val);
    }
    for(int i=minLevel; i<=maxLevel; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};  //here INT_MIN represents NULL
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root =  construct(arr, n);

    levelOrderQueue(root);
    topView(root);
    bottomView(root);

}
     

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left=NULL;
        this->right =NULL;
    }
    Node(int data,Node* left,Node* right){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node* buildTree(Node* root){
    int data;
    cin >>data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout <<"Enter data for insert in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout <<"enter data for insert in right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}



void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL); //SEPRATOR BETWEEN TWO LEVELS
    while(!q.empty()){
        
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){

                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void inorder(Node* root){
    //base case
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout <<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root;
    cout <<"Enter data for root node"<<endl;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout <<"Level order traversal :" <<endl;
    levelOrderTraversal(root);
    cout<<endl<<"Preorder"<<endl;
    preorder(root);
    cout<<endl<<"Inorder"<<endl;
    inorder(root);
    cout<<endl<<"postorder"<<endl;
    postorder(root);
    return 0;
}
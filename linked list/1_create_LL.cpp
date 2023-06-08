#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next = NULL;

    }
};

Node* Head =NULL;

void inserNode(int data){
    Node *ob = new Node(data);
    if(ob == NULL){
        cout<<"obj not created :"<<endl;
    }
    if(Head ==NULL){
        Head = ob;
    }
    else{
        Node* temp =Head;
        Head = ob;
        ob->next = temp;
    }
}

void insertAtEnd(int data){
    Node *ob = new Node(data);
    if(ob == NULL){
        cout<<"obj not created :"<<endl;
    }
    if(Head ==NULL){
        Head = ob;
    }else {
        Node *ptr = Head;
        while(ptr->next!=NULL){
            ptr= ptr->next;
        }
        ptr->next = ob;
    }
    
}

void print(Node* ptr){
    cout <<"PRINT"<<endl;
    while (ptr){
        cout <<ptr->data<<endl;
        ptr = ptr->next;
    }
}

void deleteNode(int data){
    Node* ptr = Head;
    Node* temp =NULL;
    while(ptr!=NULL){
        if(ptr->data == data){
            temp->next = ptr->next;
            // cout <<"sd";
            delete ptr;
            cout<<"DELETED"<<endl;
            return;

        }
        temp = ptr;
        ptr = ptr->next;
    }
    if(!ptr){
        cout <<"data in not in LL"<<endl;
    }
}
int main(){

    Node* obj = new Node(10);
     Head = obj;
    
    inserNode(15);
    inserNode(25);
    inserNode(85);
    inserNode(125);
    insertAtEnd(102);


    //travers LL
    Node* ptr = Head;
    print(ptr);
    deleteNode(15);
    print(ptr);
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


class node{
    public:

    int data;
    node* next;



    node(int new_data){
        data = new_data;
        next = nullptr;
    }
};

node* insertAtHead(node* head, int x);

int main(){
    node* head = new node(1);
     head -> next = new node(2);
   head -> next -> next = new node(3);
    int x = 7;
   head = insertAtHead(head,x);

   node* temp = head;

    while(temp){
        cout<<temp->data<<" ";
        
        temp = temp->next;
    }
}

node* insertAtHead(node* head, int x){

    node* temp = new node(x);
    temp->next = head;
    return temp;
}
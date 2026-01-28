#include <iostream>
#include <algorithm>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    node(int new_data){
        data = new_data;
        next = nullptr;
        back = nullptr;
    }
};

node* reverseDLL(node* head){
    node* temp = head;
    node* last = nullptr;
    while(temp){
        last = temp;
        
        swap(temp->next , temp->back);

        temp = temp->back;
    }
    return last;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    node* head = new node(arr[0]);
    node* temp = head;

    for(int i = 1 ; i<6;i++){
        node* newnode = new node(arr[i]);
        temp->next = newnode;
        newnode->back = temp;
        temp = temp->next;
    }

    head = reverseDLL(head);

    temp = head;

    while(temp){
        cout<<temp->data;
        temp = temp->next;
    }
    return 0;
}
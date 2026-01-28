#include <iostream>
#include <vector>
using namespace std;

class node{
    public:

    int data ;
    node* next;
    node* back;

    node(int new_data){
        data = new_data;
        next = nullptr;
        back = nullptr;
    }
};

node* insertAtHead(node* head , int x){
    node* temp = new node(x);
    temp->next = head;
    head->back = temp;
    
    return temp;
}

int main(){
    vector<int>arr = {1,3,5,3,2,5};

    node* head = new node(arr[0]);
    node* temp = head ;

    for(int i = 1 ; i<arr.size(); i++){
        temp->next = new node(arr[i]);
        temp->next->back = temp;
        temp = temp->next;
    }

    int x = 7;
    head = insertAtHead(head,x);

    node* sf = head;

    while(sf){
        cout<< sf->data;
        sf = sf->next;
    }
    return 0;
}
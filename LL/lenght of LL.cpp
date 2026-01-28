#include <iostream>
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

int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    int cnt = 0 ;
    node* temp = head;

    while(temp){
        cnt++;
        temp= temp->next;
    }
    cout << cnt;
}
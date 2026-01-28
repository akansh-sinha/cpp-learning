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
node* deleteHead(node* head);
int main(){
    node* head = new node(10);
    
   head -> next = new node(20);
   head -> next -> next = new node(30);

   head = deleteHead(head);
   

   node* temp = head;

   
   while(temp){
    cout << temp -> data << " ";
    temp = temp -> next;
   }
   cout <<endl;
   return 0;

}

node* deleteHead(node* head){
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
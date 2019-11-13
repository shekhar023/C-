#include <iostream>

using namespace std;

struct node{
    
    int data;
    node *next;
};

class List{
    
private:
    
    node *head, *tail;
    int value;
    
public:
    
    List(){
        head = NULL;
        tail = NULL;
    }
    void create_list();
    void insert_node();
    void display();
};

void List::create_list(){
    
    cout<<"Enter Value: ";
    cin>>value;
    
    node *temp = new node();
    
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        
        head = temp;
        tail = temp;
        temp=NULL;
    }
    else{
        
        tail->next = temp;
        tail = temp;
        
    }
}

void List::display()
{
    node *temp = new node();
    temp = head;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"NULL";
}

void List::insert_node(int value){
    node *temp = new temp;
    temp->data = value;
    temp->next = head;
    head = temp;
}

int main(){
    
    List list;
    list.create_list();
    list.display();
}

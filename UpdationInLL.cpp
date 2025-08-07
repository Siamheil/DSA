#include<iostream>
using namespace std;

class Node{
	
	public:
	int val;
	Node* next;
	
	Node(int data){
		val=data;
		next=NULL;
	}
};

void insertAthead(Node* &head,int val){
	Node* new_node = new Node(val);
	new_node->next = head;
	head = new_node;
}

void insertAttail(Node* &head,int val){
	
	Node* new_node = new Node(val);
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new_node;
}

void insertAttail(Node* &head,int val){
	
	Node* new_node = new Node(val);
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new_node;
}


void update(Node* &head,int k,int val){
	Node* temp=head;
	int curr_pos=0;
	while(curr_pos!=k){
		temp=temp->next;
		curr_pos++;
	}
	
	temp->val=val;
}

void display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	
	Node* head = NULL;
	insertAthead(head,1);
	display(head);
	insertAthead(head,12);
	display(head);
	insertAttail(head,22);
	display(head);
	insertAtPosition(head,4,1);
	display(head);
	update(head,2,5);
	display(head);

}

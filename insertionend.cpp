//code by abhinav dey
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node* insertend(Node* head,int x){
	Node* temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	Node* curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	cout<<"y5uy "<<head->data<<" "<<endl;
	return head;
}
void print(Node* head){
	Node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main(){
	Node* head=NULL;
	head=insertend(head,20);
	cout<<head->data<<" ";
	head=insertend(head,30);
	cout<<" "<<head->data;
	head=insertend(head,40);
	cout<<head->data;
	head=insertend(head,50);
	cout<<head->data;
	print(head);
	
}

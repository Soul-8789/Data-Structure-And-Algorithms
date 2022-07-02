#include<bits/stdc++.h>
 using namespace std;
class Node{
  public:
  int data;
  Node* next;
Node(int key)
{
	data=key;
	next=NULL;
}
};

void insertAtTail(Node* &head,int val){
	Node* valNode=new Node(val);
    if(head==NULL)
    {
    	head=valNode;
    	return;
    }
	Node* temp=head;
	while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=valNode;
}
void insertAtHead(Node* &head ,int val)
{
	Node* valNode=new Node(val);
	valNode->next=head;
	head=valNode;

}
void display(Node* head){
	Node* temp=head;
	while(temp!=NULL)
		{
			cout<< temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<  endl;
}

bool search(Node* head,int key)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}
void deleteAtHead(Node* head){
	Node* todelete =head;
	head=head->next;
	
	delete todelete;
}

void Deletion(Node* &head,int val)
{   
	Node* temp=head;
	if(head==NULL)
	{
		return ;
	}
	if(head->next==NULL)
	{
		deleteAtHead(head);
		return ;
	}

    while(temp->next->data !=val)
    	{
    		temp=temp->next;
    	}
    	Node* todelete = temp->next;
    	temp->next=temp->next->next;

    	delete todelete;
}
Node* reverse(Node* &head)
{
	Node* prevptr=NULL;
	Node* currptr=head;
	Node* nextptr;
	while(currptr!=NULL)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;

		prevptr=currptr;
		currptr=nextptr;
	}
	return prevptr;
}
Node* reverserec(Node* &head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	Node* newHead=reverserec(head->next);
	head->next->next=head;
	head->next=NULL;

	return newHead;
}
 int main()
 {
 	Node* head=NULL;
 	insertAtTail(head,1);
 	insertAtTail(head,2);
 	insertAtTail(head,3);
 	insertAtTail(head,4);
 	insertAtTail(head,5);
    display(head);

 	insertAtHead(head,90);
    //Deletion(head,3);
    Node* Newhead=reverse(head);
    //Deletion(head,1);
    display(Newhead);
    Node* newHead1=reverserec(Newhead);
    display(newHead1);
   //cout<< search(head,4);
return 0;
 }
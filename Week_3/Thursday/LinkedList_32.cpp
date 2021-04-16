struct Node* insert(struct Node *head, int data)
{
	Node* temp=new Node(data);
	temp->npx=head;
	if(head!=NULL){
	    head->npx=XOR(temp,head->npx);
	}
	head=temp;
	return head;
}

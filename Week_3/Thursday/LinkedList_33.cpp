vector<int> printList (struct Node *head)
{
	Node* curr=head;
	Node*prev=NULL;
	Node* next;
	vector<int> arr;
	while(curr!=NULL){
	    arr.push_back(curr->data);
	    next=XOR(prev,curr->npx);
	    prev=curr;
	    curr=next;
	}
	/*cout<<endl;
	curr=prev;
	next=NULL;
	while(curr!=NULL){
	    cout<<curr->data<<" ";
	    prev=XOR(next,curr->npx);
	    next=curr;
	    curr=prev;
	}*/
	return arr;
}
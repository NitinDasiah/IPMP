#include<iostream>
#include<queue>
using namespace std;

struct minHeap{
    char data;
    unsigned frequency;
    minHeap* left;
    minHeap* right;
    minHeap(char item, unsigned count){
        this->data=item;
        this->frequency=count;
        left=right=NULL;
    }
};

struct compare{
    bool operator()(minHeap* l, minHeap *r){
        return (l->frequency>r->frequency);
    }
    
};

void printCodes(struct minHeap* root, string str)
{
    if (!root)
        return;
 
    if (root->data != '$')
        cout << root->data << ": " << str << "\n";
 
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void HuffManCodes(char arr[],int frequency[], int n){
    struct minHeap *left, *right, *top;
    priority_queue<minHeap*,vector<minHeap*>,compare> MinHeap;
    for(int i=0;i<n;i++){
        MinHeap.push(new minHeap(arr[i],frequency[i]));
    }
    while (MinHeap.size() != 1) {
        left = MinHeap.top();
        MinHeap.pop();
 
        right = MinHeap.top();
        MinHeap.pop();

        top = new minHeap('$', left->frequency + right->frequency);
 
        top->left = left;
        top->right = right;
 
        MinHeap.push(top);
    }
    printCodes(MinHeap.top(), "");
}


int main(){
    int n=6;
    char arr[]{'a','b','c','d','e','f'};
    int frequency[]={5, 9, 12, 13, 16, 45};
    HuffManCodes(arr,frequency,n);
}
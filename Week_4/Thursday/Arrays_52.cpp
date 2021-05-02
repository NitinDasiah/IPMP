vector<int> ElementGreaterThanRightElements( int arr[], int n){
    int greatest=arr[n-1];
    vector<int> elements;
    for(int i=n-2;i>=0;i++){
        if(arr[i]>greatest){
            elements.push_back(i);
            greatest=arr[i];
        }
    }
    reverse(elements.begin(),elements.end());
    return elements;
}
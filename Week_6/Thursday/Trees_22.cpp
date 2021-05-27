bool isParentOne(int i){
    if(i==0)
        return false;
    int parent=(i-1)/2;
    if(i==2*parent+1)
        return isParentOne(parent);
    else
        return ~isParentOne(parent);
}

bool isOne(int n, int k){
    int i= pow(2,n-1)-1 +k;
    return isOneParent(i);
}
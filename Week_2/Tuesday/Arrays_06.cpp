string Solution::solve(string A) {
    bool allNine=true;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]!='9'){
            allNine=false;
            break;
        }
    }
    if(allNine){
        A[0]='1';
        for(int i=1;i<n;i++)
            A[i]='0';
        A.push_back('1');
        return A;
    }
    int mid=n/2;
    int temp=(n%2==0)?mid:mid+1;
    bool higher=false;
    for(int i=mid-1;i>=0;i--,temp++){
        if(A[temp]==A[i]){
            continue;
        }
        else if(A[temp]>A[i]){
            higher=true;
            break;
        }
        else if(A[i]>A[temp]){
            higher=false;
            break;
        }
    }
    if(higher==true){
        if(n%2==0){
            int mid=n/2;
            A[mid-1]++;
        }
        else{
            int mid=n/2;
            A[mid]++;
        }
    }
    temp=n-1;
    for(int i=0;i<temp;i++,temp--){
        A[temp]=A[i];
    }
    return A;
}

bool isAnagram(char a[], char b[]){
    
    if(strlen(a)!=strlen(b))
        return false;
    int arr[256];
    memset(arr,0,sizeof(arr));
    for(int i=0;a[i]&&b[i];i++){
        arr[a[i]]++;
        arr[b[i]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0)
            return false;
    }
    return true;
}
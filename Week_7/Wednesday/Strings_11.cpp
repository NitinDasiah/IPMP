int ic_strcmp(string s1, string s2) 
{ 
    int i; 
    int n=min(s1.size(),s2.size());
    for (i = 0; i<n; ++i) { 
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
            continue; 
        else
            break; 
    } 
  

    if (s1[i] == s2[i]) 
        return 0; 
  
    if ((s1[i] | 32) < (s2[i] | 32)) 
        return -1; 
    return 1; 
} 
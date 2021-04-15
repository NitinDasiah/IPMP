#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void swap(char* x, char*y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

void reverse(char* s, int start, int end){
    while(start<end){
        swap(&s[start++],&s[end--]);
    }
}

void cycleLeader(char* s,int shift, int len){
    int j;
    char item;
    for(int i=1;i<len;i++){
        j=i;
        item=s[j+shift];
        do
        {
            if ( j & 1 )
                j = len / 2 + j / 2;
            else
                j /= 2;
            swap (&s[j + shift], &item);
        }
        while ( j != i );
    }
}

void SortString(char* s){
    int k, lenFirst;
    int lenRemaining=strlen(s);
    int shift=0;
    while(lenRemaining){
        k = 0;
 
  
        while ( pow( 3, k ) + 1 <= lenRemaining )
            k++;
        lenFirst = pow( 3, k - 1 ) + 1;
        lenRemaining -= lenFirst;
 
  
        cycleLeader ( s, shift, lenFirst );
 
        reverse ( s, shift / 2, shift - 1 );

        reverse ( s, shift, shift + lenFirst / 2 - 1 );
        reverse ( s, shift / 2, shift + lenFirst / 2 - 1 );
        shift += lenFirst;
    }
        cout<<s;
}

int main(){
    char s[]="a1b2c3d4e5f6g7h8i9";
    SortString(s);
    cout<<s;
    return 0;
}
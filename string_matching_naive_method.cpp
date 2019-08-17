// this is a very easy program in this we are just checking the length of character similar in both the strings if both are equal 
then we will simply check if equal and if they are equal then we will simply increment the value

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char t[]="AABAACAADAABAAABAA";
    char sp[]="AABA";
    int l1=strlen(t);
    int l2=strlen(sp);
    
    for(int i=0;i<l1-l2;i++){// beacause after l1-l2 we will not find match
        int j=0;
        for(j=0;j<l2;j++){
            if(t[i+j]!=sp[j]){// if there is any character which is not similar we will never find a match and so we need to simply
                // break the loop and move the next character.
                break;
            }
        }
        if(j==l2){
            cout<<i<<" ";
        }
    }
}

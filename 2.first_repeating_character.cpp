//o(n^2) approach
#include <iostream>
using namespace std;

void first_repeating(string str){
    int flag=0;
    int l=str.length();
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                cout<<str[i];
                flag=1;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    first_repeating(s);
	    cout<<endl;
	}
	return 0;
}
//efficient approach

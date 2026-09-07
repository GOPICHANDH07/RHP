#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin>>input;

    int low=0,up =0;
    
    for(char c : input){
        if(isalpha(c)){
            if( c >='a' && c <= 'z' )
                low |= ( 1 << ( c - 'a' ));   

            else if(c >= 'A' && c <= 'Z')
                up |= (1 << ( c-'A' ));  
        }

    }
    if(low == up && low == (1 << 26) - 1) 
        cout<<"Yes, the string is a pangram."<<endl;
    else
        cout<<"No, the string is not a pangram."<<endl;
  

    return 0;
}
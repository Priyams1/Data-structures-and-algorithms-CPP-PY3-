#include<string>
#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    //lagest number the numric string

    string s = "17894";
    sort(s.begin() , s.end() , greater<int> ()) ;
    cout<< s <<endl;

    //frequency of letters in a string

    string str="anxnsjabxsjbca";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }
    char ans='a';
    int maxx=0;
    
    for(int i=0;i<26;i++){
        if(freq[i]>maxx){
            maxx=freq[i];
            ans+=i;
        }
    }
    cout<<maxx<<endl<<ans<<endl;

    //

    return 0;
}
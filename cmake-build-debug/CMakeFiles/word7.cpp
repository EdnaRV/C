//
// Created by ednrosales on 24/11/2021.
//
#include <iostream>
#include<stdio.h>
#include<ctype.h>
#include <cctype>

using namespace std;

int main() {
    string word,fw;
    int l=0, u =0;
    getline(cin, word);
    for(int i=0; i<= word.length(); i++)
    {
        if(islower(word[i])){
            l++;
        }else if(isupper(word[i])){
            u++;
        }
    }
    if((l>=u) || (l == u)){
        for(int j=0; j<= word.length(); j++){
            fw[j]=tolower(word[j]);
        }

    }else{
        for(int j=0; j<= word.length(); j++){
            fw[j]=toupper(word[j]);
        }

    }
    for(int j=0; j<= word.length(); j++){
        cout<<fw[j];

    }
    cout<<endl;
    return 0;
}

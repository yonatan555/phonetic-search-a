#include "PhoneticFinder.hpp"
#include <string>
#include <stdexcept>
#include<bits/stdc++.h>

using namespace std;

namespace phonetic{

string find(string text,string word) {
    string wordOfText = "";
    bool flag = true;
    checkIfEmpty(word,flag);            //check if the word we got is empty or the char ' ' is exist.
    //wordOfText = isExist(text,word,wordOfText);
    string delimiter = " ";
    size_t pos = 0;
    string token;
    bool found = false;
    string lastWord = "";
    while ((pos = text.find(delimiter)) != string::npos) {
        token = text.substr(0, pos);
        string lowerToken = toLowerCse(token);
        string lowerWord = toLowerCse(word);
        found = compare(lowerToken, lowerWord);
        if (found) {
            return token;
        }
        text.erase(0, pos + delimiter.length());
        lastWord = text ;
    }


    string lowerToken = toLowerCse(text);
    string lowerWord = toLowerCse(word);
    found = compare(lowerToken, lowerWord);

    if (found) {
        return text;
    }

   throw std::invalid_argument("the word is not exist.");

}
bool compare(string lowerToken,string lowerWord){
    if(lowerWord.length() == lowerToken.length()){
        for(int i = 0 ; i<lowerToken.length();i++){
            if((lowerWord.at(i) == 'd' || lowerWord.at(i) == 't')&&(lowerToken.at(i) == 'd' || lowerToken.at(i) == 't') ){
                //cout<<"oui-d"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 'i' || lowerWord.at(i) == 'y')&&(lowerToken.at(i) == 'i' || lowerToken.at(i) == 'y') ){
               // cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 'u' || lowerWord.at(i) == 'o')&&(lowerToken.at(i) == 'u' || lowerToken.at(i) == 'o') ){
                //cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 's' || lowerWord.at(i) == 'z')&&(lowerToken.at(i) == 's' || lowerToken.at(i) == 'z') ){
                //cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 'g' || lowerWord.at(i) == 'j')&&(lowerToken.at(i) == 'g' || lowerToken.at(i) == 'j') ){
                //cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 'v' || lowerWord.at(i) == 'w')&&(lowerToken.at(i) == 'v' || lowerToken.at(i) == 'w') ){
                //cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if((lowerWord.at(i) == 'b' || lowerWord.at(i) == 'f' || lowerWord.at(i) == 'p' )&&(lowerToken.at(i) == 'b' || lowerToken.at(i) == 'f' ||  lowerToken.at(i) == 'p') ){

                continue;
            }
            else if((lowerWord.at(i) == 'c' || lowerWord.at(i) == 'k' || lowerWord.at(i) == 'q' )&&(lowerToken.at(i) == 'c' || lowerToken.at(i) == 'k' ||  lowerToken.at(i) == 'q') ){
                //cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else if(lowerToken.at(i)==lowerWord.at(i)){
               // cout<<"oui-"+lowerToken+","+lowerWord<<endl;
                continue;
            }
            else{
               // cout<<"no-"+lowerToken+","+lowerWord<<endl;
                return false;
            }
        }
        return true;
    }
  return false;
}
string toLowerCse(string token){
    string a = token;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    return a;
}
void checkIfEmpty(string word,bool flag){
        if(word == "")flag=false;
        for (int i = 0; i < word.length(); i++) {
            if(word.at(i)==' '){
                flag=false;
                break;
            }
        }
        if(!flag){
            throw std::invalid_argument("the word is empty or the char ' ' is exist.");
        }
    }
}




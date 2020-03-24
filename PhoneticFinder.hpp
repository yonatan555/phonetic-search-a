#ifndef TASK1_1_PHONETICFINDER_H
#define TASK1_1_PHONETICFINDER_H
#include <iostream>
#include <stdexcept>


using namespace std;
namespace phonetic
{
string find(string text,string word);
void checkIfEmpty(string word,bool flag);
string toLowerCse(string token);
bool compare(string lowerToken, string lowerWord);
}
#endif //TASK1_1_PHONETICFINDER_H

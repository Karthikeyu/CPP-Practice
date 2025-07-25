
#include<iostream>
#include<string>
using namespace std;


// Way to pass string as reference and promising that not modifying const
string PrintString(const string& s)
{

   // s += "shravani"; // can not modify as it is const
    cout << s<< endl;
}

void PrintChar(const char* s)
{
    cout << s << endl;
}

int main()
{
    // chars - String
    char a = 'a';
    cout << a <<endl;

    // string using char array - not recommended - 0 indicates that the characters are ended (std:string is built on top of this )
    char b[] = {'b','u','s','a', 0};
    cout << b << endl;;
   
    // string using const char* - it is important to use const as the memory can not be modified after allocation
    const char* d = "char* - busa";
    //d[2]  = 'a';   // can not modify

   // char* v = "ahelo";

    cout << d << endl;
    PrintChar(d);

    // std::string - template implementation of const char like char b[]

    string s = "123";
    s = "string - busa";
    cout << s << endl;
    PrintString(s);
};


// SO - the best way is to use std::string as it provides many string functionalities with little overhead. std::strings can be modified in runtime. 
// Char* are nomally declared as const therfore they can not be modified run time unless there is no const
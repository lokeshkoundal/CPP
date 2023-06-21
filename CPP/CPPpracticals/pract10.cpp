#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 int main(){
    ifstream in("pract1.cpp");
    string str;
    getline(in,str); 
    cout<<"text in file69 before writing : "<<str<<endl;

    in.close();

    ofstream out("pract1.cpp");
    string text;
    cout<<"Enter text to add in file69 : ";
    getline(cin,text);
    out<<text;

    out.close();


    string st;
    ifstream hin("pract1.cpp");
    getline(hin,st);
    cout<<"Text in file69 after writing  : "<<st;
    
    return 0;
 }

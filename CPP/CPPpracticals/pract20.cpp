#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ifstream fin("file69.txt");
    char ch;
    int i,alphabets=0,spaces=0,digits=0;

    while(fin)
    {
        fin.get(ch);
        i=ch;
        if(i>63 && i<91 || i>96 && i<123)
            alphabets++;
        else
            if(ch==' ')
                spaces++;
        else
            if(i>47&&i<58)
                digits++;
    }

    cout<<"No. of Alphabets = "<<alphabets<<endl;
    cout<<"\nNo. Of Digits = "<<digits<<endl;;
    cout<<"\nNo. Of White Spaces = "<<spaces<<endl;

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

struct String{
    int n;
    char* str = new char[n];

    String(const char* s){
        n = strlen(s);
        str = new char[n];
        strcpy(str,s);
    };

    ~String(){
        delete [] str;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* other){
        int l = n + strlen(other);
        char* temp = new char[l];
        strcpy(temp, str);
        delete [] str;
        strcat(temp, other);
        str = temp;
    }
};

int main()
{
    String s("Hello");
    s.print();
    s.append(" there");
    s.print();
    return 0;
}

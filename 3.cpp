#include<iostream>
#include<string.h>
using namespace std;
class mystring{
    int len;
    char *name;
    public:
        mystring(){
            len=10;
            name=new char[len+1];
        }
        mystring(char *s){
            len=strlen(s);
            name=new char[len+1];
            strcpy(name,s);
        }
        mystring(int l,char *s){
            len=l;
            name=new char(len+1);
            strcpy(name,s);
        }
        void join(mystring &s1,mystring &s2){
            len=s1.len+s2.len;
            delete name;
            name=new char[len+1];
            strcpy(name,s1.name);
            strcat(name,s2.name);
        }
        void display(){
            cout<<name<<endl;
        }
        ~mystring(){
        cout<<"Destructor Called "<<endl;
    }
};

int main(){
    char c[15]="KIIT";
    char c1[15]=" University";
    mystring s1(c),s2(c1);
    mystring s3;
    s3.join(s1,s2);
    s3.display();
    return 0;
}
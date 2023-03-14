#include<iostream>
#include<vector>
#include<list>
#include<typeinfo>
#include<tuple>
#include<ctime>
#include<fstream>
#include<math.h>
#include<valarray>

using namespace std;
class T100{
    string name;
public:
    virtual void show() const{
        cout<<name<<endl;
    }
    T100(string a):name(a){}
};
class T110:virtual public T100{
    string nname;
public:
    virtual void show()const{
        cout<<nname<<endl;
    }
    T110(string name,string a):T100(name),nname(a){}
};
class T101:virtual public T100{
    string namee;
public:
    virtual void show()const{
        cout<<namee<<endl;
    }
    T101(string name,string a):T100(name),namee(a){}
};
class T111:public T101,public T110{
    string ne;
public:
    T111(string a,string b,string c,string d):T100(a),T110(b,b),T101(c,c),ne(d){}
    void show()const{
        T101::show();
        T110::show();
    }
};
int main(){
    T110 t1("100","110");
    T101 t2("100","101");
    T100* p1;
    p1=&t1;
    p1->show();
    p1=&t2;
    p1->show();
    T111 t3("100","110","101","111");
    p1=&t3;
    p1->show();
    return 0;
}



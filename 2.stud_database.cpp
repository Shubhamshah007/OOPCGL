#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class db {
    int roll;
    char name[50];
    char Class[20];
    char Div[20];
    char dob[20];
    char bg[10],contact[20];
    char phone[20],licence[20];
    public: 
    static int stdno;
    static void count(){
        cout<<"No. of objects created"<<stdno;
    }
    void fin() {
        cout<<"\nInline Function!";
    }
    db() {
        roll=1;
        strcpy(name,"Parth Kulkarni");
        strcpy(Class,"Second year");
        strcpy(Div,"D");
        strcpy(dob,"11 october");
        strcpy(bg,"A+");
        strcpy(contact,"salger bk");
        strcpy(phone,"12345678");
        strcpy(licence,"123ABCD");
        ++stdno;
    }
    db(db*ob) {
        strcpy(name,ob-> name);
        strcpy(Class,ob->Class);
        strcpy(Div,ob->Div);
        strcpy(dob,ob->dob);
        strcpy(bg,ob->bg);
        strcpy(contact,ob->contact);
        strcpy(phone,ob->phone);
        strcpy(licence,ob->licence);
        ++stdno;
    }
    void getdata() {
        cout<<"\n\nEnter : name,Roll no,Class,Div,dob,bg,contact,phone,licence\n";
        cin>>name>>roll>>Class>>Div>>dob>>bg>>contact>>phone>>licence;
    }
    friend void display(db d);
    ~db() {
        cout<<"\n\n"<<this->stdno<<"-"<<this->name<<"(Object is destrayed!)";
    }
};
void display(db d) {
    cout<<"\n\nname:"<<d.name<<"\nRollno."<<d.roll<<"\nClass"<<d.Class<<"\nDiv"<<d.Div<<"\ndob"<<d.dob<<"\nbg"<<d.bg<<"\ncontact"<<d.contact<<"\nphone"<<d.phone<<"\nlicence"<<d.licence<<endl;

}
int db::stdno;
int main() {
    int n,i;
    db d1,*ptr[5];
    cout<<"Default values";
    display(d1);
    d1.getdata();
    cout<<endl;
    display(d1);
    db d2( & d1);
    cout<<"Use of copy constructor:";
    display(d2);
    cout<<"\nHow many objects you want to create?:";
    cin>>n;
    for (i=0;i<n;i++) {
        ptr[i]=new db();
        ptr[i]->getdata();
    }
    for (i=0;i<n;i++) {
        display( * ptr[i]);
    }
    db::count();
    for (i=0;i<n;i++) {
        delete(ptr[i]);
    }
    cout<<"\nObjects deleted!";
    return 0;
}
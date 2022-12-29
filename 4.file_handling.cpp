#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char ch;
    ofstream file;
    file.open("sample1.txt", ios::out);
    file<<"welcome to the world of programming" ;
    file.close();
    ifstream file;
    file.open("sample1.txt",ios::in);
    string line;
    while( getline(file,line)){
        cout<<line;
    }
    file.close();

    return 0;
}

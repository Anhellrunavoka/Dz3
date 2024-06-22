#include <iostream>
#include <Windows.h> 
#include <fstream>
#include <string>
#include "Dz3.h"
using namespace std;
string Words_For[4] = {
    "cats","on","and","the"
};
int words()
{
    ifstream read("read.txt");
    ofstream write("write.txt");
    string s,word;
    int count=0;
    char st[50];
    while(getline(read,s)){
        for (char st : s) {
            if (st != ' ') word += st;
            if (st == '.') word += '\n';
            if(st == ' ') {
                for (short i = 0; i < 4;i++) {
                    if (word == Words_For[i]) {
                        count++;
                    }
                }
                if (count == 0) {
                    write << word << ' ';
                    cout << word << " ";
                }
                count = 0;
                word = "";
            }
        }
    }
    cout << "Programm complete"<<endl;
    read.close();
    write.close();
    cout << "Menu\n [1]Main \n[2] Exit\n Your choise : ";
    int user;
    cin >> user;
    if (user == 1) main();
    else if (user == 2) cout<<"Programm complete";
	return 0;
}
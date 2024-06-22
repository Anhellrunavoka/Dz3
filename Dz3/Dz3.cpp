#include <iostream>
#include <Windows.h> 
#include <fstream>
#include <string>
#include "Words.h"
#include "Translate.h"
using namespace std;

//1
//string Words_For[4] = {
//    "cats","on","and","the"
//};
//int words()
//{
//    ifstream read("read.txt");
//    ofstream write("write.txt");
//    string s,word;
//    int count=0;
//    char st[50];
//    while(getline(read,s)){
//        for (char st : s) {
//            if (st != ' ') word += st;
//            if (st == '.') word += '\n';
//            if(st == ' ') {
//                for (short i = 0; i < 4;i++) {
//                    if (word == Words_For[i]) {
//                        count++;
//                    }
//                }
//                if (count == 0) {
//                    write << word << ' ';
//						cout<<word<<" ";
//                }
//                count = 0;
//                word = "";
//            }
//        }
//    }
//    cout << "Programm complete";
// read.close();
// write.close();
//	  return 0;
//}
//struct Translate {
//	char symbol;
//	const char* liter;
//};
//Translate Letters[] = {
//		{'А', "a"}, {'Б', "b"}, {'В', "v"}, {'Г', "h"}, {'Ґ', "g"},
//	  {'Д', "d"}, {'Е', "e"}, {'Є', "ye"}, {'Ж', "Zh"}, {'З', "z"},
//	  {'И', "y"}, {'І', "i"}, {'Ї', "yi"}, {'Й', "y"}, {'К', "k"},
//	  {'Л', "l"}, {'М', "m"}, {'Н', "n"}, {'О', "o"}, {'П', "p"},
//	  {'Р', "r"}, {'С', "s"}, {'Т', "t"}, {'У', "u"}, {'Ф', "f"},
//	  {'Х', "kh"}, {'Ц', "ts"}, {'Ч', "ch"}, {'Ш', "sh"}, {'Щ', "shch"},
//	   {'Ю', "yu"},{'Я', "ya"},{'Ь', ""}
//};
//int translate() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	ifstream read2("read2.txt");
//	ofstream write2("write2.txt");
//	string s,word,perevod;
//	getline(read2, s);
//	for (char i : s) {
//		if (i != ' ')word += i;
//		if (i == ' ')word += " ";
//	}
//	cout << word << endl;
//	for (char st : word) {
//		for (Translate s : Letters) {
//			if (st == s.symbol) {
//				perevod += s.liter;
//				break;
//			}
//			if (st == ' ') {
//				perevod += " ";
//				break;
//			}
//		}
//	}
//	cout << perevod << endl;
//
//	write2 << word<<endl<<perevod << endl;
//	read2.close();
//	write2.close();
//	cout << "Programm complete";
//	return 0;
//}
int main() {
		cout << "Menu\n [1]Delete words \n[2] Translate\n Your choise : ";
		int user;
		cin >> user;
		if (user == 1) words();
		else if (user == 2) translate();
		return 0;
}
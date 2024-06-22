#include <iostream>
#include <Windows.h> 
#include <fstream>
#include <string>
#include "Dz3.h"
using namespace std;
struct Translate {
	char symbol;
	const char* liter;
};
Translate Letters[] = {
		{'À', "a"}, {'Á', "b"}, {'Â', "v"}, {'Ã', "h"}, {'¥', "g"},
	  {'Ä', "d"}, {'Å', "e"}, {'ª', "ye"}, {'Æ', "Zh"}, {'Ç', "z"},
	  {'È', "y"}, {'²', "i"}, {'¯', "yi"}, {'É', "y"}, {'Ê', "k"},
	  {'Ë', "l"}, {'Ì', "m"}, {'Í', "n"}, {'Î', "o"}, {'Ï', "p"},
	  {'Ð', "r"}, {'Ñ', "s"}, {'Ò', "t"}, {'Ó', "u"}, {'Ô', "f"},
	  {'Õ', "kh"}, {'Ö', "ts"}, {'×', "ch"}, {'Ø', "sh"}, {'Ù', "shch"},
	   {'Þ', "yu"},{'ß', "ya"},{'Ü', ""}
};
int translate(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream read2("read2.txt");
	ofstream write2("write2.txt");
	string s,word,perevod;
	getline(read2, s);
	for (char i : s) {
		if (i != ' ')word += i;
		if (i == ' ')word += " ";
	}
	cout << word << endl;
	for (char st : word) {
		for (Translate s : Letters) {
			if (st == s.symbol) {
				perevod += s.liter;
				break;
			}
			if (st == ' ') {
				perevod += " ";
				break;
			}
		}
	}
	cout << perevod << endl;
	write2 << word<<endl<<perevod << endl;
	read2.close();
	write2.close();
	cout << "Programm complete"<<endl;
	cout << "Menu\n [1]Main \n[2] Exit\n Your choise : ";
	int user;
	cin >> user;
	if (user == 1) main();
	else if (user == 2) cout << "Programm complete";
	return 0;
}
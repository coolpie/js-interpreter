// interpreter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	while (1){
		str = "";
		cout << ">> ";
		getline(cin, str);
		if (str == "quit"){
			cout << "Quit";
			return 0;
		}
		cout << str << endl;
	}

	return 0;
}


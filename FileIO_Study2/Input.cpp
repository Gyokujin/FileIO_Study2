#include "Input.h"

void input()
{
	ifstream* inFile = new ifstream("CreateFile.txt");

	if (inFile->is_open())
	{
		string line;

		while (getline(*inFile, line))
		{
			cout << line << endl;
		}

		inFile->close(); // 다 읽고나면 close로 파일 닫기
	}
	else
	{
		cerr << "File Input Error" << endl;
	}

	cerr << "File Input End" << endl;
	delete inFile; // 동적 할당 해제
}
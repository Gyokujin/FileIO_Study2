#include "Output.h"

void output()
{
	ofstream* outFile = new ofstream("CreateFile.txt");

	if (outFile->is_open())
	{
		*outFile << "Hello World!" << endl; // 파일 쓰기
		*outFile << "Input Data" << endl;
		outFile->close(); // 파일 닫기
	}
	else
	{
		cout << "File Output Error" << endl;
	}

	cout << "File Output End" << endl;
	delete outFile; // 동적 할당을 해제하여 메모리 누수를 방지한다.
}
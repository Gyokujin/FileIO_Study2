#include "Output.h"

void output()
{
	ofstream* outFile = new ofstream("CreateFile.txt");

	if (outFile->is_open())
	{
		*outFile << "Hello World!" << endl; // ���� ����
		*outFile << "Input Data" << endl;
		outFile->close(); // ���� �ݱ�
	}
	else
	{
		cout << "File Output Error" << endl;
	}

	cout << "File Output End" << endl;
	delete outFile; // ���� �Ҵ��� �����Ͽ� �޸� ������ �����Ѵ�.
}
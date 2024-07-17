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

		inFile->close(); // �� �а��� close�� ���� �ݱ�
	}
	else
	{
		cerr << "File Input Error" << endl;
	}

	cerr << "File Input End" << endl;
	delete inFile; // ���� �Ҵ� ����
}
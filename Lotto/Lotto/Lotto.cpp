//Lotto Program

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int iLotto[45] = { };

	// rand()%45	-> 0~44����
	// rand()%45+1	-> 1~45����


	// 1 ~ 45 ���ڸ� ������� �־��ش�.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	// Swap �˰���
	/*
	int iNum = 1, iNum = 2, iNum = 3;
	iNum3 = iNum1;
	iNum3 = iNum2;
	iNum2 = iNum3;
	*/


	// Shuffle �˰���
	// �ַ� TCG������ ī����ӿ��� ���� ������ ����Ѵ�.
	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; ++i)
	{
		//��ġ�� �����°��� ���ڸ� �����ϴ°� �ƴ϶�!!!
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		//�׸��� ��ġ�� ����� ������ �ٲ���!!!
		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}



	for (int k = 0; k < 6; ++k)
	{
		cout << iLotto[k] << endl;
	}

	cout << "���ʽ���ȣ :" << iLotto[6] << endl;

	return 0;
}
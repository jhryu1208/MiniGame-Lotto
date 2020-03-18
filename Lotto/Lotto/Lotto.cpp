//Lotto Program

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int iLotto[45] = { };

	// rand()%45	-> 0~44까지
	// rand()%45+1	-> 1~45까지


	// 1 ~ 45 숫자를 차레대로 넣어준다.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	// Swap 알고리즘
	/*
	int iNum = 1, iNum = 2, iNum = 3;
	iNum3 = iNum1;
	iNum3 = iNum2;
	iNum2 = iNum3;
	*/


	// Shuffle 알고리즘
	// 주로 TCG게임인 카드게임에서 덱을 섞을때 사용한다.
	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; ++i)
	{
		//위치를 얻어오는거임 숫자를 대입하는게 아니라!!!
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		//그리고 위치에 저장된 수들을 바꿔줌!!!
		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}



	for (int k = 0; k < 6; ++k)
	{
		cout << iLotto[k] << endl;
	}

	cout << "보너스번호 :" << iLotto[6] << endl;

	return 0;
}
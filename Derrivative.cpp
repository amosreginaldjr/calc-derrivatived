#include<iostream>
#include<time.h>
#include<stdlib.h>
#include"Derrivative.h"
using namespace std;

void Derrivative::getUserAnswer()
{
	cout << "Your Answer: ";
	cin >> userAnswer;
}

string Derrivative::checkUserAnswer()
{
	return userAnswer;
}

bool Derrivative::getQuestion()
{
	questionSelector = getRandNum();
	switch (questionSelector)
	{
	case 1:
		cout << "Question: " << trigFuncNoX[0] << endl;
		if (checkUserAnswer() == trigFuncNoX[0])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	case 2:
		cout << "Question: " << trigFuncNoX[1] << endl;
		if (checkUserAnswer() == trigFuncNoX[1])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	case 3:
		cout << "Question: " << trigFuncNoX[2] << endl;
		if (checkUserAnswer() == trigFuncNoX[2])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	case 4:
		cout << "Question: " << trigFuncNoX[3] << endl;
		if (checkUserAnswer() == trigFuncNoX[3])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	case 5:
		cout << "Question: " << trigFuncNoX[4] << endl;
		if (checkUserAnswer() == trigFuncNoX[4])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	case 6:
		cout << "Question: " << trigFuncNoX[5] << endl;
		if (checkUserAnswer() == trigFuncNoX[5])
		{
			return 1; break;
		}
		else
			return 0;
		break; //BREAKS ARENT WORKING
	}
	//return 0;
}

int Derrivative::getRandNum()
{
	srand(time(NULL));
	int rNum = rand() % 5; //should be from 0 - 5
	return rNum;
}
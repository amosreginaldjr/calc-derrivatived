#pragma once
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Derrivative
{
private:
	int questionSelector;
	int getRandNum();
	string userAnswer;
	const string trigFuncNoX[6] = { "sin", "cos", "tan", "cot", "sec", "cosec" };
	const string trigFuncWithX[6] = { "sinx", "cosx", "tanx", "cotx", "secx", "cosecx" };
	const string trigFuncWithParX[6] = { "sin(x)", "cos(x)", "tan(x)", "cot(x)", "sec(x)", "cosec(x)" }; //par = ()

	const string derTrigFuncNoX[6] = { "cos", "-sin", "sec^2", "-cosec^2", "sectan", "coseccot" };
	const string derTrigFuncWithX[6] = { "cosx", "-sinx", "sec^2x", "-cosec^2x", "secxtanx", "cosecxcotx" };
	const string derTrigFuncParX[6] = { "cos(x)", "-sin(x)", "sec^2(x)", "-cosec^2(x)",
										"sec(x)tanx", "cosec(x)cot(x)" };

public:
	bool getQuestion(); //gets the question then the user has to enter the derrivative
	void getUserAnswer();
	string checkUserAnswer();
};
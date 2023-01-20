#include<iostream>
#include<time.h>
#include<stdlib.h>
#include"Derrivative.h"
using namespace std;

int main()
{
	Derrivative der;
	bool right_wrong;

	while (der.checkUserAnswer() != "math")
	{
		der.getUserAnswer();
		cout << der.getQuestion() << endl;

		right_wrong = der.getQuestion();
		if(right_wrong == 1)
			cout << "Correct!" << endl;
		else
			cout << "Wrong!" << endl;
	}

	/*it looks like the issue is the getUserAnswer is porompting twice.
	make a function for getUserAnswer and another for outputting "Your Entry: "*/

	return 0;
}


#include "QuizEB.h"
#include <queue>


using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	CS301FinalProject::QuizEB form;

	Application::Run(% form);

}

/*  ----------------- Work on Later --------------------
class Questions {
public:
	char* text;
	char* A1;
	char* A2;
	char* A3;
	int Answers;

	Questions() {}
	Questions(char* t, char* a1, char* a2, char* a3, int answ) {

		text = t;
		A1 = a1;
		A2 = a2;
		A3 = a3;
		Answers = answ;

	}
};

std::queue<Questions> LoadQuestions() {

	Questions q1 = Questions("Where is CSU East Bay located?", "Oakland", "San Fransisco", "Hayward", 3);
	Questions q2 = Questions("How many states are in the United States of America?", "13", "50", "81", 2);
	Questions q3 = Questions("How many planets are there in the Solar System?", "7", "8", "9", 2);

	std::queue<Questions> questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);

	return questions;
}

std::queue<Questions> questions;
Questions currentQuestions;
*/

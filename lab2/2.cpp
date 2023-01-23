#include <iostream>
#include <string>
using namespace std;

class TestGrader {
    string answers;
public:
    void setKey(string key) {
        answers = key;
    }
    
    string grade(string test) {
        int right = 0;
        int wrong = 0;
        string wrong_questions = "";
        for (int i = 0; i < 20; i++) {
            if (test[i] == answers[i]) {
                right++;
            }
            else {
                wrong++;
                wrong_questions += to_string(i+1) + " ";
            }
        }
        string result = "";
        if (right >= 15) {
            result += "Passed the exam. ";
        }
        else {
            result += "Failed the exam. ";
        }
        result += "Right answers: " + to_string(right) + ". Wrong answers: " + to_string(wrong) + ". ";
        if (wrong != 0) {
            result += "Incorrectly answered questions: " + wrong_questions;
        }
        return result;
    }
};

int main() {
    TestGrader tg;
    tg.setKey("BDAACABACDBCDADCCBDA");
    
    while (true) {
        string test;
        cout << "Enter test answers: ";
        cin >> test;
        if(test.length() != 20) {
        	cout << "Total answers must be 20" << endl;
        	continue;
        }
        for (int i = 0; i < test.length(); i++) {
            while (test[i] != 'A' && test[i] != 'B' && test[i] != 'C' && test[i] != 'D') {
                cout << "Invalid answer at question " << i+1 << ". Please enter A, B, C or D: ";
                cin >> test[i];
            }
        }
        cout << tg.grade(test) << endl;
        cout << "Enter 'q' to quit or any other key to continue: ";
        char choice;
        cin >> choice;
        if (choice == 'q') {
            break;
        }
    }
    
    return 0;
}


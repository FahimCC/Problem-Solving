#include <iostream>
#include <vector>

using namespace std;


class Person {
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }

};

class Student :  public Person {
private:
    vector<int> testScores;
    int sum = 0, sub = 0;
    double average = 0.0;
    char ch;
public:
    Student(string firstName, string lastName, int identification, vector<int> scores): Person(firstName, lastName, identification)
    {
        this->testScores = scores;
        sub = testScores.size();
    }
    char calculate()
    {
        for (int i = 0; i < sub; i++)
        {
            sum += testScores[i];
        }
        average = (double) sum / sub;

        if (90 <= average && average <= 100)
            ch = 'O';
        else if (80 <= average && average <= 90)
            ch = 'E';
        else if (70 <= average && average <= 80)
            ch = 'A';
        else if (55 <= average && average <= 70)
            ch = 'P';
        else if (40 <= average && average <= 55)
            ch = 'D';
        else if (average < 40)
            ch = 'T';

        return ch;
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
/* Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise. */

#include <bits/stdc++.h>
using namespace std;

void studentGrade(int marks)
{
    if (marks < 1 || marks > 100)
    {
        cout << "Invalid marks..";
    }

    if (marks < 35)
    {
        cout << "Fail";
    }
    else if (marks < 50)
    {
        cout << "Grade D";
    }
    else if (marks < 70)
    {
        cout << "Grade C";
    }
    else if (marks < 90)
    {
        cout << "Grade B";
    }
    else
    {
        cout << "Grade A";
    }
}

int main()
{
    int score;
    cout << "Enter your score:";
    cin >> score;
    studentGrade(score);
    return 0;
}
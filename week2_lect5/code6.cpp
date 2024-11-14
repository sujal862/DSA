#include <iostream>
using namespace std;
int main()
{
    float bio, maths, phy, hindi, eng, history;
    cout << "****This is the marks of student sujal ####### " << endl;
    cout << "enter the total marks in bio : ";
    cin >> bio;
    cout << "enter the total marks in maths : ";
    cin >> maths;
    cout << "enter the total marks in phy : ";
    cin >> phy;
    cout << "enter the total marks in hindi : ";
    cin >> hindi;
    cout << "enter the total marks in eng : ";
    cin >> eng;
    cout << "enter the total marks in history : ";
    cin >> history;
    float z = ((bio + maths + phy + hindi + eng + history) / 600) * 80;
    cout << "percentage student scored is: " << z << "%" << endl;
    if (z < 30)
    {
        cout << "student has failed";
    }

    else
    {
        if (bio < 35 || maths < 35 || phy < 35 || hindi < 35 || eng < 35 || history < 35)
            cout << "student has failed"<<endl;
    }
    switch (z > 60 && z<70)
    {
    case 1:
        cout << "grade is D" << endl;
        break;
    }

    switch (z > 70 && z<80)
    {
    case 1:
        cout << "grade is C" << endl;
        break;
    }

    switch (z > 80 && z<90)
    {
    case 1:
        cout << "grade is B" << endl;

        break;
    }

    switch (z > 90)
    {
    case 1:
        cout << "grade is A" << endl;
        break;
    }
}

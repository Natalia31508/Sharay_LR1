#include <iostream>
#include <string>

using namespace std;

//Шарай 5 вариант

double EnterNumberX()
{
    double x;
cin >> x;
return x;

}

double EnterNumberY()
{
    return 0;
}

double CalcArith(double num_x, double num_y)
{
    return 0;
}

double CalcGeom(double num_x, double num_y)
{
    return 0;
}

int main() {

    setlocale(LC_ALL, "Russian");
    double x = 0;
    double y = 0;

    double a = 0;
    double g = 0;
    while(true)
    {
        cout << "Task 1. Vvedite polozitejnoe chislo X" << endl;
        cout << "Task 2. Vvedite polozitejnoe chislo Y" << endl;
        cout << "Task 3. Vichislete sr. arefmiticheskoe chislo" << endl;
        cout << "Task 4. Vichislete sr. geometricheskoe" << endl;
        cout << endl << "Please enter the number of the desired function or 0 if you want to close the app: ";

        int task = 0;
        cin >> task;

        switch (task)
        {
        case 0:
            return 0;
        case 1:
        x = EnterNumberX();
        break;
            case 2:
        y = EnterNumberY();
        break;
          case 3:
        a = CalcArith(x, y);
        break;
          case 4:
        g = CalcGeom(x, y);
        break;
        default:
           return 0;
        }
    }

    return 0;
}
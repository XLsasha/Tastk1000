#include <iostream>
#include <cmath>

using namespace std;

void book_task_1()
{
    int wage = 15;
    int h;
    cout << "How many people were working today: ";
    int employeeCounter;
    cin >> employeeCounter;
    int sum = 0;

    for(int i = 0; i < employeeCounter; i++)
    {
        cout << "How many hours did employee " << i + 1 << " work? ";
        cin >> h;
        sum += h * wage;
    }
    cout << "Total salary for all employees: " << sum << endl;
}



int main()
{
    book_task_1();
    return 0;
}

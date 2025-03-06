#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
  float x, y;
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: ";
  cin >> y;

  string ask;
  cout << "What is the process you want to do (power/calculate): ";
  cin >> ask;

  if (ask == "power")
  {
    cout << "x^2 = " << x * x << " and y^2 = " << y * y << endl;

    string ask2;
    cout << "Do you want x power y or y power x (yes/no)? ";
    cin >> ask2;

    if (ask2 == "yes")
    {
      cout << "x power y: " << pow(x, y) << "\ny power x: " << pow(y, x) << endl;
    }
    else
    {
      cout << "Okay, no extra powers." << endl;
    }
  }
  else if (ask == "calculate")
  {
    char assignment;
    cout << "Enter the operator you want (+ - * /): ";
    cin >> assignment;

    if (assignment == '+')
    {
      cout << x + y << endl;
    }
    else if (assignment == '-')
    {
      cout << x - y << endl;
    }
    else if (assignment == '*')
    {
      cout << x * y << endl;
    }
    else if (assignment == '/')
    {
      if (y != 0)
      {
        cout << x / y << endl;
      }
      else
      {
        cout << "Invalid! Division by zero." << endl;
      }
    }
    else
    {
      cout << "Invalid operator." << endl;
    }
  }
  else
  {
    cout << "Invalid process name." << endl;
  }

  return 0;
}

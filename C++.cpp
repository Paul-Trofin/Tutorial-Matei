#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class atom
{
    public:
    string name;
    double x, y, z;
    double position()
    {
        double r = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
        return r;
    }

};

int sum(int x)
{
    if(x > 0)
    {
        return x + sum(x-1);
    }
    else
    {
        return 0;
    }
}

double maximum(double &num1, double &num2, double &num3)
{
    double maxnum12 = max(num1, num2);
    double maxnum123 = max(maxnum12, num3);
    return maxnum123;
}

int main()
{
    cout << "\n This is a C++ code that goes through some examples. \n";

    cout << "\n ------------- \n STRINGS \n ------------- \n";
    string fullName;
    cout << "\n Type your full name: ";
    getline(cin,fullName);
    cout << "\n Your full name is: " << fullName;

    cout << "\n\n ------------- \n SWITCH \n ------------- \n";
    int ArabicNumeral;
    cout << "\nEnter an integer between 1 and 5.\n";
    cin >> ArabicNumeral;
    cout << "\nArabic Numeral: " << ArabicNumeral << "\nRoman Numeral: ";
    switch (ArabicNumeral)
    {
    case 1:
        cout << "I\n";
        break;
    case 2:
        cout << "II\n";
        break;
    case 3:
        cout << "III\n";
        break;
    case 4:
        cout << "IV\n";
        break;
    case 5:
        cout << "V\n";
        break;
    }

    cout << "\n\n ------------- \n STRUCT \n ------------- \n";
    struct {
        string brand;
        string model;
    } GPU1, GPU2;

    GPU1.brand = "AMD";
    GPU1.model = "RX 580";

    GPU2.brand = "NVidia";
    GPU2.model = "RTX 2070";

    cout << "\nSome GPUs:\n";
    cout << GPU1.brand << " " << GPU1.model << "\n";
    cout << GPU2.brand << " " << GPU2.model << "\n";

    cout << "\n ------------- \n POINTERS \n ------------- \n";

    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";
    cout << &food << "\n";
    cout << *ptr << "\n";

    *ptr = "Pasta";
    cout << food << "\n";
    cout << *ptr << "\n";

    cout << "\n ------------- \n FUNCTIONS \n ------------- \n";
    cout << "\nEnter 3 real numbers: \n";
    cout << "\n";
    double num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    double maxnum = maximum(num1, num2, num3);
    cout << "\nThe maximum number is: " << maxnum << "\n";
    cout << "The Gauss sum for int(" << maxnum << ") is: " << sum(int(maxnum));
    
    cout << "\n ------------- \n CLASSES \n ------------- \n";
    atom H;
    H.name = "hydrogen";
    H.x = 1;
    H.y = 2;
    H.z = 3;

    cout << "\nThe atom name is: " << H.name << "\nDistance from origin: " << H.position();

    cout << "\n\n";
    return 0;
}
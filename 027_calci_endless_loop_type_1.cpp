//endless loops
#include <iostream>

using namespace std;

int expression(double x,char oper,double y)
{
    double result;
 if (oper == '+')
 result = x + y;
 else if (oper == '-')
 result = x - y;
 else if (oper == '*')
 result = x * y;
 else if (oper == '/')
 result = x / y;

 return result;
}

int main()
{
    double a,b;
    char operator1;
    cout << "Enter expression :";
    cin >>a>>operator1>>b;
    cout<<"result :"<<expression(a,operator1,b)<<"\n\n\n";
    while (true)
    {
        cout << "Enter expression :";
        cin >>a>>operator1>>b;
        cout<<"result :"<<expression(a,operator1,b)<<"\n\n";
    }
    return 0;

}

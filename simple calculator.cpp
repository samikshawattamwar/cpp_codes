#include <iostream>

using namespace std;

int main()
{
    char s;
    int a,b;
    cout<<"the operator you want: ";
    cin>>s;
    cout<<"enter two digit"<<endl;
    cin>>a;
    cin>>b;



    switch(s) {
        case '+' :
            cout << a << " + " << b << " = " << a + b;
            break;

        case '-' :
            cout << a << "-" << b << "=" << a-b;
            break;

        case '*' :
            cout << a << "*" << b << "=" << a*b;
            break;

        case '/' :
            cout << a << "/" << b << "=" << a/b;
            break;

        default:
            cout<< "operator is not correct!";
            break;


    }



return 0;
}

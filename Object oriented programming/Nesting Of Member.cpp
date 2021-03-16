#include <iostream>
#include<string>
using namespace std;


class binary {
private:
    string s;


public:
    void display_bin(void);
    void ones_compliment(void);
    void read(void);
    void chk_bin(void);

};

void binary ::read(void)
{
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}

void binary ::display_bin(void)
{
    cout<<"Your binary number is"<<endl;
    for (int i=0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary ::ones_compliment(void)
{
    for (int i=0; i<s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) ='1';
        }
        else
        {
            s.at(i) = '0';
        }

    }
}

void binary ::chk_bin(void)
{
    for (int i = 0; i<s.length(); i++)
    {
        if(s.at(i) !='0' && s.at(i) !='1')
        {
            cout<<"Incorrect binary number format"<<endl;

        }
    }
}
int main()
{
   binary B;
   B.read();
   B.chk_bin();
   B.display_bin();
   B.ones_compliment();
   B.display_bin();
}

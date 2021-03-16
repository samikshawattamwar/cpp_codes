#include <iostream>

using namespace std;

class shop{
   private:
       int itemid[1000];
       int itemprice[1000];
       int counter;
   public:
       void initcounter(void) {counter = 1;}
       void getprice(void);
       void displayprice(void);

};

void shop :: getprice(void)
{
    cout<<"Enter id of your item " <<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}


void shop :: displayprice(void)
{
    for(int i = 0; i<counter; i++)
    {
        cout<<"Price of your item with id "<<itemid[i] <<" is "<<itemprice[i]<<endl;
    }
}
int main()
{
    shop laxmi;
    laxmi.initcounter();
    laxmi.getprice();
    laxmi.getprice();
    laxmi.getprice();
    laxmi.getprice();
    laxmi.displayprice();
    return 0;
}

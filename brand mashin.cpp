#include <iostream>
#include<cstring>
using namespace std;
struct Car {
    char brand[255];
    char model[255];
    int distance = 0;
    void setInfo()
    {
        cin.getline(brand,255);
        cin.getline(model,255);
    }
void drive(int d)
{
    distance +=d;
}
void showData(int d)
{
    cout <<"Brand:"<<brand<<endl;
    cout <<"Model:"<<model<<endl;
    cout<<"Distance driver"<<distance<<"Km";
}
};

    int main()
    {
        Car car;
        car.setInfo ();
        int d;
        cin>>d;
        car.drive(d);
        car.showData (d);
        return 0;

    }

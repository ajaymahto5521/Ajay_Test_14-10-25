#include<iostream>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(double r)
    {
        radius =r;
    }
   
    double area(){
        return 3.14*radius*radius;
    }
    void display()
    {
        cout<<"Radius: "<<radius<<endl;
        cout<<"Area: "<<area()<<endl;
    }

};

int main()
{
   double r;
    cout<<"Enter radius: ";
    cin>>r;
    Circle c(r);
    c.display();

    return 0;

}
#include<iostream>
using namespace std;
class Employee
{
    private:
        int a, b;
    public:
        int c, d;
        void setdata(int a1, int b1);  //Declaration
        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
        }
};
void Employee :: setdata(int a1, int b1){
    a = a1;
    b = b1;
}
int main(){
    Employee vighnesh;
    //vighnesh.a = 56; // a is private---can't be accessed directly
    vighnesh.setdata(1,2);
    vighnesh.d = 5;
    vighnesh.c = 8;
     
    vighnesh.getdata();
     
    return 0;
}
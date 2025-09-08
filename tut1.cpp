#include<iostream>
using namespace std;

class Employee{

    private : 
        int a,b,c;

    public : 
        int d,e;

        void setdata(int a1,int b1,int c1){          /* THIS IS DEFINITION INSIDE CLASS
                                                     I COULD ALSO HAVE DONE IT OUTSIDE THE CLASS*/
            a = a1;
            b = b1;
            c = c1;

        }

        void getdata(){

            cout<<"The Value Of A is : "<<a<<endl;
            cout<<"The Value Of B is : "<<b<<endl;
            cout<<"The Value Of C is : "<<c<<endl;
            cout<<"The Value Of D is : "<<d<<endl;
            cout<<"The Value Of E is : "<<e<<endl;
        }
};

// LIKE THIS :- 

/*void Employee :: setdata(int a1,int b1,int c1){       OUTSIDE THE CLASS DEFINITION

    a = a1;
    b = b1;
    c = c1;
}
*/

int main(){

    Employee Hiten;

    Hiten.d = 69;
    Hiten.e = 569;
    // Hiten.a = 5; #This Will Throw Error As 'a' Is Private !!!!!

    Hiten.setdata(1,5,9);
    Hiten.getdata();

    return 0;
}
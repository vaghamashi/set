#include <iostream>

using namespace std;

class x {

public : 

    int a,b,c;

};

class y : public x {

    public :
    
    int setData (){

        cout << "Enter the value of a : ";
        cin >> a;

        cout << "Enter the value of b : ";
        cin >> b;

        cout << "Enter the value of c : ";
        cin >> c;


    } 

    int getData (){

        cout << "Your Sum of three cube is : "<< (a*a*a)+(b*b*b)+(c*c*c);

    }


};

int main(int argc, char const *argv[])
{
    y obj;

    obj.setData(); 
    obj.getData();

    return 0;
}

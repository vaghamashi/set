#include <iostream>

using namespace std;


class p{

 public:

     float degree;

    

};

class q : public p{

    public:


    float setData (){
    
        cout<<"Enter your temperature : ";
        cin >> degree;


        return degree;
    }

    float toFehrenheit(){

        cout << endl <<"Given celsius into Fahrenheit : "<< (degree=(degree*9/5)+32);

    }


};

class r : public q {

    public:
    float toKelvin(){

        cout << endl <<"Given Fahrenheit into Kelvin : "<<(degree-32)*(5/9)+273.15;
    }
};

int main(int argc, char const *argv[])
{
    r temp;

    temp.setData();
    temp.toFehrenheit();
    temp.toKelvin();

    return 0;
}

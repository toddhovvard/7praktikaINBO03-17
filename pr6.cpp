#include <iostream>
using namespace std;
struct Property
{
virtual ~Property() {}
virtual float worth() = 0;
};
struct Appartment : Property

{
	double cost;
	Appartment(float a): cost(a){
	}
float worth()
{
return 0.001*cost;
}

};

struct Car : Property
{
float amount;
Car(float a): amount(a) {}
float worth()
{
return 0.005*amount;
}
};

struct CountryHouse : Property
{
float nalog;
CountryHouse (float t): nalog(t) {}
float worth()
{
return 0.002*nalog;
}
};

int main()
{
Property *M[7];
M[0] = new Appartment(2300000);
M[1] = new Appartment(10000000);
M[2] = new Appartment(5600000);
M[3] = new Car(700000);
M[4] = new Car(13000000);
M[5] = new CountryHouse(23500000);
M[6] = new CountryHouse(34000000);


for(int i = 0; i<7; i++)
{
cout<<"nalog "<<i+1<<" raven "<<
fixed<<M[i]->worth()<<" ?."<<endl;
delete M[i];
}
}

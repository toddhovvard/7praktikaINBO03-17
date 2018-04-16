#include <iostream>
using namespace std;

class Cat
{
protected:
	 int col1;
public:
	Cat() { col1 = 1; }
};

class Dog
{
protected:
	int col2;
public:
	Dog() { col2 = 2; }
};

class Parrot
{
protected:
	int col3;
public:
	Parrot() { col3 = 5; }
};

struct Animal : public Cat, public Dog, public Parrot
{
	void showcol()
	{
		printf("êîë-âî êîøåê: %i\n êîë-âî ñîáàê: %i\nêîë-âî ïîïóãàåâ: %i\n", col1, col2, col3);
	}
	~Animal(){}
};

int main()
{
	setlocale(0, "");
	Animal i;
	i.showcol();
	system("pause");
	return 0;
}

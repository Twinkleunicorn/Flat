#include<iostream>
#include "Flat_.h"
using namespace std;

int main()
{
	Flat_ f(2000);
	Room_ r(15, "Kitchen");
	f.addRoom(r);
	f.addRoom(Room_(28, "living room"));
	f.info();
	system("pause");
}
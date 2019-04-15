#include "Room_.h"

Room_::Room_()
{
	this->S = 20;
	this->name = new char[strlen("hall") + 1];
	strcpy_s(this->name, strlen("hall") + 1, "hall");
}


Room_::Room_(int S, const char *name)
{
	this->S = S;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Room_::set_S(int a)
{
	this->S = a;
}

int Room_::get_S()
{
	int a = 0;
	cout << "Area of room:" << endl;
	cin >> a;
	this->S = a;
	return S;
}

void Room_::set_name()
{
	char tmp[100];
	if (name != nullptr)
	{
		delete[] name;
	}
	cout << "Name of room:" << endl;
	cin >> tmp;
	this->name = new char[strlen(name + 1)];
	strcpy_s(this->name, strlen(tmp) + 1, tmp);
}


bool Room_::get_name()
{
	return name;
}

Room_::Room_(const Room_ & obj)
{
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name), obj.name);
	this->S = obj.S;
}

void Room_::rewrite(const Room_ & p)
{
	this->S = p.S;
	if (strlen(this->name) != strlen(p.name)) {
		delete[]this->name;
		this->name = new char[strlen(p.name) + 1];
	}
	strcpy_s(this->name, strlen(p.name) + 1, p.name);
}

void Room_::info()const
{
	cout << "Name: " << name << endl;
	cout << "Volume: " << S << endl;
}

Room_::~Room_()
{
	delete[] this->name;
}

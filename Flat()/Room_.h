#pragma once
#include<iostream>
using namespace std;
class Room_
{
	int S;
	char *name;

public:
	Room_();
	Room_(int S, const char *name);
	void set_S(int a);
	int get_S();
	void set_name();
	bool get_name();
	void rewrite(const Room_&p);
	Room_(const Room_ &obj);
	void info()const;
	~Room_();
};

#pragma once
#include"Room_.h"
#include <iostream>
using namespace std;

class Flat_ {
	int price;
	Room_ *rooms;
	int cntRooms;
public:
	Flat_(int price) {
		this->price = price;
		this->rooms = nullptr;
		this->cntRooms = 0;
	}
	void addRoom(const Room_ &r) {
		if (this->rooms == nullptr) {

			this->rooms = new Room_[1];

			rooms[0].rewrite(r);
			cntRooms = 1;
			return;
		}
		Room_ *tmp = new Room_[cntRooms + 1];
		for (size_t i = 0; i < cntRooms; i++)
			tmp[i].rewrite(rooms[i]);

		tmp[cntRooms].rewrite(r);
		delete[]rooms;
		rooms = tmp;
		cntRooms++;
	}
	int getFlatArea() const {
		int area = 0;
		for (size_t i = 0; i < cntRooms; i++)
		{
			area += rooms[i].get_S();
		}
		return area;
	}
	int checkPrice(const Flat_& obj) {
		if (this->price == obj.price) {
			return true;
		}
		return false;
	}

	int checkArea(const Flat_ &obj)
	{
		if (this->getFlatArea() == obj.getFlatArea()) { return true; }
		return false;
	}




	void info() {
		cout << "Flat amount = " << this->price
			<< "\n count of rooms = " << cntRooms
			<< "Flat area = " << this->getFlatArea()
			<< "Rooms:\n";
		for (size_t i = 0; i < cntRooms; i++)
		{
			rooms[i].info();
		}
	}
};


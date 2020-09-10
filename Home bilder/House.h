#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Part abstract {
	bool done;
	string type;

public:
	size_t price;
	bool isDone(bool done) {
		this->done = done;
		return done;
	}
	void setPrice(size_t price) {
		this->price = price;
	}
	void setType(const string& type) {
		this->type = type;
	}
	void print()const {
		cout << type << "is ";
		if (done == true) {
			cout << "done" << endl;
		}
		else {
			cout << "in proces" << endl;
		}
	}
};
class Fundetion :public Part {
public:

};
class Walls :public Part {
public:

};
class Window:public Part {
public:

};
class Roof :public Part {
public:

};
class Door :public Part {
public:

};
class House :public Part {
	vector<Part*>parts;
public:
	void addPart(Part* part) {
		parts.push_back(part);
	}
	void WatchCondition() {
		for (auto p : parts) {
			p->print();
		}
	}
	void calculateTotalPrice() {
		size_t sum=0;
		for (auto p : parts) {
			sum += p->price;
		}
		cout << "Total price->" << sum << endl;
	}
};
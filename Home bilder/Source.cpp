#include<iostream>
#include"House.h"
using namespace std;

int main() {
	Fundetion fun;
	fun.setType("Fundation");
	fun.isDone(0);
	fun.setPrice(3456);
	Roof roof;
	roof.setType("Roof");
	roof.isDone(1);
	roof.setPrice(223423);
	Door door;
	door.setType("Door");
	door.isDone(1);
	door.setPrice(53453);
	Window wind;
	wind.setType("Windows");
	wind.isDone(1);
	wind.setPrice(3534534);
	Walls wall;
	wall.setType("Walls");
	wall.isDone(0);
	wall.setPrice(3434);
	House house;
	house.addPart(&fun);
	house.addPart(&roof);
	house.addPart(&door);
	house.addPart(&wind);
	house.addPart(&wall);
	house.WatchCondition();
	house.calculateTotalPrice();
}
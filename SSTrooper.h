#ifndef SSTROOPER_H
#define SSTROOPER_H


class SSTrooper
{
public:
	SSTrooper(); //Constructor

	void handle_input(); // takes input
	void move(); // moves the Trooper
	void show(); 


private:

	
	int x, y; // (X,Y) Position

	int xVel, yVel; // (X,Y) Velocity


protected:

};


#endif


//test
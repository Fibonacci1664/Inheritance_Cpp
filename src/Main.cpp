/*
 * Main.cpp
 *
 *  Created on: 13 Jul 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

//Super class
class Animal
{
public:
	void speak()
	{
		cout << "Grrrrr" << endl;
	}
};

//Sub class
class Cat: public Animal
{
public:
	void jump()
	{
		cout << "Cat jumping" << endl;
	}
};

class Tiger: public Cat
{
public:
	void attackHuman()
	{
		cout << "Attacking" << endl;
	}
};

int main()
{
	Animal a;

	a.speak();

	Cat cat;

	cat.speak();
	cat.jump();

	Tiger tiger;

	tiger.attackHuman();
	tiger.jump();
	tiger.speak();

	return 0;
}


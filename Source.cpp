#include <iostream>
#include "Shoes.h"
using namespace std;


void printInfo(Shoes shoes) {

	cout << '\t' << "Producer Name: " << shoes.getProducerName() << '\n';
	cout << '\t' << "Price: " << shoes.getPrice() << '\n';
	cout << '\t' << "Size: " << shoes.getSize() << '\n';
	cout << '\t' << "Color: " << shoes.getColor() << '\n';
	cout << '\t' << "ID: " << shoes.id << '\n';
	cout << '\t' << "Model: " << shoes.model << '\n';
	cout << '\t' << shoes.getA() << '\n';
	cout << '\t' << shoes.getB() << '\n';

}


int main() {

	Shoes myShoes("Nike",1000,41,"white",5,3);
	myShoes.id = 1042;
	myShoes.model = 102;
	
	Shoes mySecondShoes("Adidas", 1200, 42, "black_red", 2, 718281);
	mySecondShoes.id = 1043;
	mySecondShoes.model = 406;

	Shoes myFriendsShoes("Puma", 2000, 45, "white-black", 3, 1415);
	myFriendsShoes.id = 1043;
	myFriendsShoes.model = 406;

	cout << "My Shoes:" << '\n';
	printInfo(myShoes);

	cout << "My Second Shoes:" << '\n';
	printInfo(mySecondShoes);

	cout << "My Friend's Shoes:" << '\n';
	printInfo(myFriendsShoes);


	return 0;

}
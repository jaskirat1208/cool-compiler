package group19TestCases;
interface Vehicle {
	noOfWheels() : Int;
};
interface Roadways {
	func(): String;
};

class Scooter implements Vehicle,Roadways {
	noOfWheels() : Int { 2 };
};
class Car implements Vehicle {
	noOfWheels() : Int { 4 };
};

class Main {
	activa : Scooter;
	printWheels : Int { activa.noOfWheels() };
};
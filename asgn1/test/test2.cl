package group19TestCases;
interface Vehicle {
	noOfWheels() : Int;
};

class Scooter implements Vehicle {
	noOfWheels() : Int { 2 };
};
class Car implements Vehicle {
	noOfWheels() : Int { 4 };
};

class Main {
	activa : Scooter;
	printWheels : Int { activa.noOfWheels() };
};
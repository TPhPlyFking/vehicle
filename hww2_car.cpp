#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
	string type;
	int maxSpeed;
	string fuelType;
	int weight;
	int capacity;
public:
	Vehicle(string t, int mSp, string fT, int w, int c) {
		type = t;
		maxSpeed = mSp;
		fuelType = fT;
		weight = w;
		capacity = c;
	}

	// getting method
	string getType(){
		return type;
	}
	int getSpeed() {
		return maxSpeed;
	}
	string getFuelType() {
		return fuelType;
	}
	int getWeight() {
		return weight;
	}
	int getCapacity() {
		return capacity;
	}
	
	//setting method
	void setType(string t) {
		type = t;
	}
	void setSpeed(int mSp) {
		maxSpeed = mSp;
	}
	void setFuelType(string fT) {
		fuelType = fT;
	}
	void setWeight(int w) {
		weight = w;
	}
	void setCapacity(int c) {
		capacity = c;
	}

	//accelerate method
	void accelerate() {
		cout << "The " << type << " is accelerating to " << maxSpeed << " km/h." << endl;
	}
	
	//display method
	void display() {
		cout << "Type of vehicle: " << type << " || Max speed " << maxSpeed << " km/h" << " || Fuel Type: "
			<< fuelType << " || Weight: " << weight << " tan" << " || Capacity: " << capacity << " people" << endl;
	}
};

int main() {
	Vehicle car("Car", 120, "Gasoline", 1.5, 5);
	Vehicle car1("SUV", 120, "Gasoline", 1, 7);
	Vehicle car2("Sedan", 120, "Gasoline", 1.5, 5);
	Vehicle bus("Bus", 90, "Diesel", 6, 29);
	Vehicle truck("Truck", 80, "Diesel", 8.5, 4);
	Vehicle container("Container", 80, "Diesel", 22, 4);
	Vehicle motobike("Motobike", 70, "Gasoline", 0.2, 2);

	//method
	car.accelerate();
	bus.accelerate();
	truck.accelerate();
	container.accelerate();
	motobike.accelerate();
	cout << endl;

	car1.display();
	car2.display();
	bus.display();
	truck.display();
	container.display();
	motobike.display();
	cout << endl;
	
	//Nhap du lieu moi
	string userType, userFuel;
	int userSpeed, userCapacity, userWeight;
	cout << "\nNhap loai xe: ";
	cin >> userType;
	cout << "Nhap toc do toi da: ";
	cin >> userSpeed;
	cout << "Nhap loai nhien lieu: ";
	cin >> userFuel;
	cout << "Nhap so can nang(tan): ";
	cin >> userWeight;
	cout << "Nhap so nguoi chua toi da: ";
	cin >> userCapacity;


	Vehicle userVehicle(userType, userSpeed, userFuel, userWeight, userCapacity);
	userVehicle.display();
	userVehicle.accelerate();




}
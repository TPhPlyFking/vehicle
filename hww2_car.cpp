#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string type;       // loại xe (Car, Bus, Truck, ...)
    int maxSpeed;      // tốc độ tối đa
    string fuelType;   // loại nhiên liệu (Gasoline, Diesel, Electric...)
    double weight;     // trọng lượng xe (tấn)
    int capacity;      // sức chứa (số người)

public:
    // Constructor
    Vehicle(string t, int mSp, string fT, double w, int c) {
        type = t;
        maxSpeed = mSp;
        fuelType = fT;
        weight = w;
        capacity = c;
    }

    // Getter methods
    string getType() { return type; }
    int getSpeed() { return maxSpeed; }
    string getFuelType() { return fuelType; }
    double getWeight() { return weight; }
    int getCapacity() { return capacity; }

    // Setter methods
    void setType(string t) { type = t; }
    void setSpeed(int mSp) { maxSpeed = mSp; }
    void setFuelType(string fT) { fuelType = fT; }
    void setWeight(double w) { weight = w; }
    void setCapacity(int c) { capacity = c; }

    // Hành vi accelerate
    void accelerate() {
        cout << "The " << type << " is accelerating to "
             << maxSpeed << " km/h." << endl;
    }

    // Hiển thị thông tin
    void display() {
        cout << "Type: " << type
             << " || Max Speed: " << maxSpeed << " km/h"
             << " || Fuel: " << fuelType
             << " || Weight: " << weight << " tons"
             << " || Capacity: " << capacity << " people"
             << endl;
    }
};

int main() {
    // Một số phương tiện mẫu
    Vehicle car("Car", 120, "Gasoline", 1.5, 5);
    Vehicle bus("Bus", 90, "Diesel", 6, 30);
    Vehicle truck("Truck", 80, "Diesel", 8.5, 3);
    Vehicle bike("Motorbike", 70, "Gasoline", 0.2, 2);

    // Gọi hành vi
    car.accelerate();
    bus.accelerate();
    truck.accelerate();
    bike.accelerate();
    cout << endl;

    // Hiển thị thông tin
    car.display();
    bus.display();
    truck.display();
    bike.display();
    cout << endl;

    // Người dùng nhập thêm 1 xe mới
    string userType, userFuel;
    int userSpeed, userCapacity;
    double userWeight;

    cout << "\nNhap loai xe: ";
    cin >> userType;
    cout << "Nhap toc do toi da (km/h): ";
    cin >> userSpeed;
    cout << "Nhap loai nhien lieu: ";
    cin >> userFuel;
    cout << "Nhap trong luong (tan): ";
    cin >> userWeight;
    cout << "Nhap suc chua toi da (nguoi): ";
    cin >> userCapacity;

    Vehicle userVehicle(userType, userSpeed, userFuel, userWeight, userCapacity);

    cout << "\nThong tin xe vua nhap:\n";
    userVehicle.display();
    userVehicle.accelerate();

    return 0;
}

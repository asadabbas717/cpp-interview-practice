#include <iostream>
#include <string>
using namespace std;
class Engine { public: void start() const { cout << "engine started\n"; } };
class Car { Engine engine; string model; public: Car(string m) : model(move(m)) {} void drive() const { cout << model << ": "; engine.start(); } };
int main() { Car car("Civic"); car.drive(); }

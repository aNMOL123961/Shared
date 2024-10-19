#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Constructor to initialize feet and inches
    Distance(int ft, float in) : feet(ft), inches(in) {}

    // Function to convert distance to meters
    operator float() const {
        // Convert feet and inches to total feet
        float totalFeet = feet + inches / 12.0;
        // Convert feet to meters (1 meter = 3.33 feet)
        float meters = totalFeet / 3.33;
        return meters;
    }

    // Function to display the distance
    void display() const {
        cout << feet << " feet and " << inches << " inches" << endl;
    }
};

int main() {
    // Create a Distance object
    Distance dist(10, 6.5);

    // Display the original distance
    cout << "Original distance: ";
    dist.display();

    // Convert the distance to meters
    float meters = dist;

    // Display the distance in meters
    cout << "Distance in meters: " << meters << " meters" << endl;

    return 0;
}


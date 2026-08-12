#include <iostream>
using namespace std;
int main() {
    int roomType, days;
    char pool, spa, gym, restaurant;
    double bill = 0, serviceBill = 0;
    cout << "--- Welcome to the Hotel Booking System ---\n\n";
    cout << "Room Types:\n";
    cout << "1. Standard Room  (3000/day)\n";
    cout << "2. Deluxe Room    (5000/day)\n";
    cout << "3. Luxury Room    (8000/day)\n";
    cout << "Select Room Type (1-3): ";
    cin >> roomType;
    if(roomType < 1 || roomType > 3){
        cout << "Invalid room type! Exiting...\n";
        return 0;
    }
    cout << "Enter number of days to stay: ";
    cin >> days;
    if(days <= 0){
        cout << "Invalid number of days! Exiting...\n";
        return 0;
    }
    switch(roomType){
        case 1: bill = days * 3000; break;
        case 2: bill = days * 5000; break;
        case 3: bill = days * 8000; break;
    }
    cout << "\n--- Extra Services ---\n";
    cout << "Do you want Swimming Pool access? (y/n): ";
    cin >> pool;
    if(pool == 'y' || pool == 'Y'){
        serviceBill += 500 * days;
    }
    cout << "Do you want Spa access? (y/n): ";
    cin >> spa;
    if(spa == 'y' || spa == 'Y'){
        serviceBill += 1000 * days;
    }
    cout << "Do you want Gym access? (y/n): ";
    cin >> gym;
    if(gym == 'y' || gym == 'Y'){
        serviceBill += 300 * days;
    }
    cout << "Do you want to order from Restaurant? (y/n): ";
    cin >> restaurant;
    if(restaurant == 'y' || restaurant == 'Y'){
        int foodChoice, foodQty;
        cout << "\nRestaurant Menu:\n";
        cout << "1. Breakfast Combo (500 per meal)\n";
        cout << "2. Lunch Combo     (800 per meal)\n";
        cout << "3. Dinner Combo    (1000 per meal)\n";
        cout << "Select your choice (1-3): ";
        cin >> foodChoice;
        cout << "Enter quantity: ";
        cin >> foodQty;
        switch(foodChoice){
            case 1: serviceBill += 500 * foodQty; break;
            case 2: serviceBill += 800 * foodQty;break;
            case 3: serviceBill += 1000 * foodQty; break;
            default: cout << "Invalid food choice!\n"; break;
        }
    }
    double total = bill + serviceBill;
    cout << "\n--- Booking Summary ---\n";
    cout << "Room Bill: PKR " << bill << endl;
    cout << "Extra Services Bill: PKR " << serviceBill << endl;
    cout << "-----------------------------\n";
    cout << "Total Bill: PKR " << total << endl;
    cout << "\nBooking Successful! Thank you for choosing our Hotel.\n";
    return 0;
}

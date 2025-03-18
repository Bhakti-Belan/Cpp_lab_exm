#include<iostream>
using namespace std;

class Vehicle {
public:
    int id, rpd, ac;  
    string type;

    void set(int i, string t, int rent, bool av=true) {
        id = i;
        type = t;
        rpd = rent;
        ac = av;
    }

    void display_vehicle() {
        cout << "\n------------------------------------------------------------------\n";
        cout << "\nVehicle Id: " << id;
        cout << "\nVehicle Type: " << type;
        cout << "\nVehicle Rent Per Day: " << rpd;
        cout << "\n------------------------------------------------------------------\n";
    }

    bool rent_vehicle() {
        if (ac) {
            ac = false;
            return true;
        }
        return false;
    }
};

class RentalService {
public:
    Vehicle v[5];
    int vc = 0;

    void addVehicle(int i, string t, int rent) {
        if (vc < 5) {
            v[vc].set(i, t, rent);
            cout << "\n" << this->v[vc].type << " Added Successfully!!";
            vc++;
        } else {
            cout << "\nVehicle Capacity Is Full!!!";
        }
    }

    void display_Available_vehicle() {
        for (int j = 0; j < vc; j++) {
            v[j].display_vehicle();
        }
    }

    int findById(int id) {
        for (int i = 0; i < vc; i++) {
            if (v[i].id == id)
                return i; 
        }
        return -1; 
    }

    bool book_vehicle(int vid) {
        int index = findById(vid);
        if (index != -1) {
            if (v[index].rent_vehicle()) {
                return true; 
            } else {
                return false;
        }
        return false;  
    }
};

class Rental : public RentalService {
public:
   
    void rent_vehicles(int id, int nod) {
        int index = findById(id);
        if (index != -1 && book_vehicle(id)) {
            cout << "\nRented Vehicle Successfully!!";
            cout << "\n----------------------Rental Details------------------------";
            v[index].display_vehicle();
            calculate_rent(id, nod);
        } else {
            cout << "\nVehicle Not Available";
        }
    }

    
    void calculate_rent(int id, int nod) {
        int index = findById(id);
        if (index != -1) {
            cout << "\nTotal Rent Of " << this->v[index].type << " for " << nod << " days is: " << this->v[index].rpd * nod;
        }
    }

   
    void display_rentals() {
        cout << "\n----------------------Rented Vehicles------------------------";
        for (int i = 0; i < vc; i++) {
            if (v[i].ac == false) {  
                v[i].display_vehicle();
            }
        }
    }
};

class Person {
protected:
    int id;
    string name;

public:
    Person(int i, string n) {
        id = i;
        name = n;
    }

    void display_person() {
        cout << "\nId: " << id;
        cout << "\nName: " << name;
    }
};

class Customer : public Person {
public:
    int nod, vid;

    Customer(int id, string n) : Person(id, n) {}

    void display_Cust() {
        cout << "\nId: " << id;
        cout << "\nName: " << name;
    }

    void BookVehicle(Rental &r, int id, int d) {
        r.rent_vehicles(id, d);
    }
};

int main() {
    Rental r;
    r.addVehicle(1, "Sedan", 5000);
    r.addVehicle(2, "SUV", 3000);
    r.addVehicle(3, "Hatchback", 2000);
    r.addVehicle(4, "Scorpio", 7000);
    r.addVehicle(5, "Maruti", 2000);
    
    r.display_Available_vehicle();
    
    
    
    r.addVehicle(6, "Nano", 1000);

    Customer c(1, "Bhakti");
    c.BookVehicle(r, 1, 3);  

    Customer c1(2, "Neeta");
    c1.BookVehicle(r, 1, 5);  

    
    r.display_rentals();

    return 0;
}

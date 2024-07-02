#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int i = 1;

class Equipment {
public: Equipment(string Model, int Price) {
    model = Model;
    price = Price;
}

public:
    string model;
    int price;
};

class Bats : public Equipment {
public:
    Bats(string model, int price) : Equipment(model, price) {
    
    }
public:
    string model[4] = { "DeMarini Prism +","Louisville Slugger LXT","Easton Ghost Double Barrel", "Rawlings Mantra"};
    int price[4] = {35, 40, 40, 35};
};

class Gloves : public Equipment {
public:
    Gloves(string model, int price) : Equipment(model, price) {

    }
public:
    string model[4] = { "Rawlings Liberty Advanced F","Wilson A2000 F","Rawlings Liberty Advanced C", "Wilson A2000 C" };
    int price[4] = { 20, 15, 25, 25 };
};

class Helmets : public Equipment {
public:
    Helmets(string model, int price) : Equipment(model, price) {

    }
public:
    string model[4] = { "RIP - IT Vision Pro","DeMarini Paradox Protege","Easton Prowess C", "Mizuno Samurai C" };
    int price[4] = { 10, 15, 20, 15 };
};

class Cages : public Equipment{
public:
    Cages(string model, int price) : Equipment(model, price) {

    }
public:
    string model[4] = { "Cage 1: 1 Hour","Cage 2: 1 Hour","Cage 3: 1/2 Hour", "Cage 4: 1/2 Hour" };
    int price[4] = { 40, 40, 25, 25 };
};

class Customer {
public:
    Customer(string fName, string lName) {
        last = lName;
        first = fName;
    }
public:
    string last;
    string first;
 
private:
    int cardNumber;

};

int cardNumber = 0;
string model = "";
int price = 0;;
string fName = "";
string lName = "";

Bats bat(model, price);
Gloves glove(model, price);
Helmets helmet(model, price);
Cages battingCage(model, price);
Customer customer(fName, lName);

//bat selection menu
void batMenu() {
    int batNum = 1;
    cout << "\t\t\tSelect your bat from the following: \n" << endl;
    for (int i = 0; i <= 3; ++i) {
        cout << "\t\t\t";
        cout << "Enter " << batNum << "\t to select  " << bat.model[i] << endl;
        batNum++;
    }
}

//glove selection menu
void gloveMenu() {
    int gloveNum = 1;
    cout << "\n\n\n\n\t\t\tSelect your glove from the following: \n" << endl;
    for (int i = 0; i <= 3; i++) {
        cout << "\t\t\t";
        cout << "Enter " << gloveNum << "\t to select  " << glove.model[i] << endl;
        gloveNum++;
    }
}

//helmet selection menu
void helmetMenu() {
    int helmetNum = 1;
    cout << "\n\n\n\n\t\t\tSelect your helmet from the following: \n" << endl;
    for (int i = 0; i <= 3; ++i) {
        cout << "\t\t\t";
        cout << "Enter " << helmetNum << "\t to select  " << helmet.model[i] << endl;
        helmetNum++;
    }
}

//cage selection menu
void cageMenu() {
    int cageNum = 1;
    cout << "\n\n\n\n\t\t\tSelect your bat from the following: \n" << endl;
    for (int i = 0; i <= 3; ++i) {
        cout << "\t\t\t";
        cout << "Enter " << cageNum << "\t to select  " << battingCage.model[i] << endl;
        cageNum++;
    }
}

int main() {

    //login window
    map<string, string>dict = { {"smokemath", "1.618"} }; //map creates dictionary containing login credentials 
    string username, password;
    cout << "\n\n\t\t\tEnter username: ";
    cin >> username;
    cout << "\n\n\t\t\tEnter password: ";
    cin >> password;
    // Checks if username and password are correct
    if (dict.find(username) != dict.end() && dict[username] == password) {
        cout << "\n\n\t\t\tLogin Successful!\n\n\n";
        system("PAUSE");
        system("CLS");
    }
    else {
        cout << "\n\n\t\t\tIncorrect username or password. Please try again.\n\n\n";
        system("PAUSE");
        system("CLS");
    }

    
        cout << "\n\n\t\t\tWelcome to Cru Softball Rentals\n" << endl;

        batMenu();
        
        cout << "\n\n\n\t\t\tYour Selection: ";
        int batSelection = 0;
        cin >> batSelection;
        system("CLS");

        gloveMenu();

        cout << "\n\n\n\t\t\tYour Selection: ";
        int gloveSelection = 0;
        cin >> gloveSelection;
        system("CLS");
        
        helmetMenu();

        cout << "\n\n\n\t\t\tYour Selection: ";
        int helmetSelection = 0;       
        cin >> helmetSelection;
        system("CLS");

        cageMenu();

        cout << "\n\n\t\t\tYour Selection: ";
        int cageSelection = 0;
        cin >> cageSelection;        
        system("CLS");

        //personal info
        cout << "\n\n\n\n\t\t\tEnter First Name: ";
        cin >> customer.first;
        cout << "\n\n\t\t\tEnter Last Name: ";
        cin >> customer.last;
        system("CLS");
                
        int invoiceTotal = bat.price[batSelection - 1] + glove.price[gloveSelection - 1] + helmet.price[helmetSelection - 1] + battingCage.price[cageSelection - 1];
            
            cout << setw(18) << "\n\n\t\t\tInvoice for: " << setw(18) << customer.first + " " + customer.last << endl;
            cout << "\n\n\n\t\t\t" << "--------|----------------------------|-----|" << endl;
            cout << "\t\t\t" << setw(8) << left << "Item" << "|" << setw(26) << "Name" << "  |" << setw(8) << "Price|"<< endl;
            cout << "\t\t\t" << "--------|----------------------------|-----|" << endl;
            cout << "\t\t\t" << setw(8) << left << "Bat" << "|" << setw(28) << bat.model[batSelection - 1] << "|" << "$  " << bat.price[batSelection - 1]<<"|" << endl;
            cout << "\t\t\t" << setw(8) << left << "Glove" << "|" << setw(28) << glove.model[gloveSelection - 1] << "|" << "$  " << glove.price[batSelection - 1] <<"|"<< endl;
            cout << "\t\t\t" << setw(8) << "Helmet" << "|" << setw(28) << helmet.model[helmetSelection - 1] << "|" << "$  " << helmet.price[batSelection - 1] <<"|" << endl;
            cout << "\t\t\t" << setw(8) << "Cage" << "|" << setw(28) << battingCage.model[cageSelection - 1] << "|" << "$  "<< battingCage.price[cageSelection - 1] << "|\n\n\n" << endl;
            cout << "\t\t\t" << setw(8) << "Total: " << setw(28) << " " << "  $" << invoiceTotal << endl;

	return 0;
}


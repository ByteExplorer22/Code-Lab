#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;
void Menu();

class Customers{
public:
	string name, gender, city;
	int age, mobile_no;
	static int cust_id;
	char all[9999];

	void setDetails() {
    ofstream out("Customers_data.txt", ios::app);
    if (out.is_open()) {
        cout << "Enter Customer Id: ";
        cin >> cust_id;
        cout << endl;

        cout << "Enter Name: ";
        cin.ignore();
       	getline(cin,name);
        cout << endl;

        cout << "Enter Gender: ";
        cin >> gender;
        cout << endl;

        cout << "Enter City: ";
        cin >> city;
        cout << endl;

        cout << "Enter Age: ";
        cin >> age;
        cout << endl;

        cout << "Enter Mobile no.: ";
        cin >> mobile_no;
        cout << endl;

        out << "Customer Id: " << cust_id << endl << "Name: " << name
            << endl << "Gender: " << gender << endl << "City: " << city << endl << "Age: "
            << age << endl << "Mobile number: " << mobile_no << endl;

        out.close();
        cout << endl;
        cout << "Saved" << endl << "Note: Your details are saved for future purpose" << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}

	void showDetails(){
		ifstream in("Customers_data.txt");
		{
			if(!in){
				cout <<"Error caused in file"<< endl;
			}
			while(!(in.eof())){
				in.getline(all,9999);
				cout <<all<< endl;
			}
			in.close();
		}
	}
};

int Customers::cust_id;

class Cabs{
public:
	int CabChoice;
	int kilometres;
	static float CabCost;

	void CabDetails(){
		cout << "We are collabarated with the fastest, safest and smartest cab service around the country"<< endl;
		cout << "-----------OLA Cabs -----------"<< endl;
		cout << "1. Rent a luxury cab= 45 Rs per Km"<< endl;
		cout <<"2. Rent a normal cab= 25 Rs per Km"<< endl;
		cout << endl;

		cout <<"Press 1 for Luxury cab: ";
		cout << endl;

		cout <<"Press 2 for Normal cab: ";
		cin>>CabChoice;
		cout << endl;

		cout <<"Enter kilometres to travel: ";
		cin>>kilometres;

		int HireCab;
		

		if(CabChoice==1){
			CabCost = kilometres * 45;
			cout <<"Total CabCost: "<< CabCost <<" Rs"<< endl;
			cout << "Press 1 to hire this cab " << endl;
			cout << "Press 2 to hire another cab " << endl;
			cin >> HireCab;

			system("CLS");
			if(HireCab == 1){
				cout << "You have hired this cab successfully" << endl;
				cout << "Goto Menu and take reciept" << endl;	
			}
			else if(HireCab == 2){
				CabDetails();
			}
			else{
				cout << "Invalid Input! Redirecting to Previous menu" << endl << "Please Wait" << endl;
				Sleep(999);
				system("CLS");
				CabDetails();
			}
		}
		else if(CabChoice == 2){
			CabCost = kilometres * 25;
			cout <<"Total CabCost: "<< CabCost <<" Rs"<< endl;
			cout << "Press 1 to hire this cab " << endl;
			cout << "Press 2 to hire another cab " << endl;
			cin >> HireCab;

			system("CLS");
			if(HireCab == 1){
				cout << "You have hired this cab successfully" << endl;
				cout << "Goto Menu and take reciept" << endl;	
			}
			else if(HireCab == 2){
				CabDetails();
			}
			else{
				cout << "Invalid Input! Redirecting to Previous menu" << endl << "Please Wait" << endl;
				Sleep(999);
				system("CLS");
				CabDetails();
			}
		}
		else{
			cout << "Invalid Input! Redirecting to Previous menu" << endl << "Please Wait" << endl;
			system("CLS");
			Menu();

			}

		cout << "Press 1 to redirect Main Menu" << endl;
		cin >> HireCab;
		system("CLS");

		if(HireCab == 1){
			Menu();
		}
		else{
			cout << "Invalid input! Redirecting to Main menu" << endl;
			Menu();
		}

	}
};

float Cabs::CabCost;
class Booking{
public:
	int HotelChoice;
	int packChoice;
	static float HotelCost;
	int gotoMenu;

	void hotels(){
		string myHotels[] = { "Grand View Hotel", "Azure Skyline Resort", "Paradise Retreat Lodge", "Serenity Springs Retreat", "Royal Oasis Hotel"};

		cout << "\n List of Availble Hotels" << endl;
		int i=0;
		int LengthOfArray = sizeof(myHotels) / sizeof(myHotels[0]);
		while(i < LengthOfArray){
			cout << (i+1) << "." << myHotels[i] << endl;
			i++;
		}

		cout << "Enter the Hotel Code to book that Hotel or\n Enter 0 to exit : " << endl;
		cin>>HotelChoice;

		if(HotelChoice == 1){
			cout << "-------- Welcome to Grand View Hotel -------- " << endl;
			cout << "Packages Offered by Grand View Hotel: " << endl;
			cout << "\t 1. Standard: Rs 5000" << endl;
			cout << "\t 2. Premium: Rs 10,000" << endl;
			cout << "\t 3. Premium: Rs 12,000" << endl;

			cout << endl;
			cout << "Press the number code of package to book or \n Press 0 to go back" << endl;
			cin>>packChoice;

			if( packChoice == 1 ){
				HotelCost = 5000.00;
				cout << "You have successfully booked Standard Package at Grand View Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;

			}
			else if ( packChoice == 2){
				HotelCost = 10000.00;
				cout << "You have successfully booked Premium Package at Grand View Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 3 ){
				HotelCost = 12000.00;
				cout << "You have successfully booked Luxury Package at Grand View Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 0){
				cout << "Returning back" << endl;
				hotels();
			}
			else{
				cout << "Invalid input! Returning to Menu" << endl;
				Sleep(999);
				system("CLS");
				hotels();
			}

			cout << "Press 1 to return to Main menu" << endl;
			cin >> gotoMenu;
			system("CLS");
			if( gotoMenu == 1){
				Menu();
			}
			else{
				Menu();
			}
		}

		else if(HotelChoice == 2){
			cout << "-------- Welcome to Azure Skyline Resort -------- " << endl;
			cout << "Packages Offered by Azure Skyline Resort: " << endl;
			cout << "\t 1. Standard: Rs 5000" << endl;
			cout << "\t 2. Premium: Rs 10,000" << endl;
			cout << "\t 3. Premium: Rs 12,000" << endl;

			cout << endl;
			cout << "Press the number code of package to book or \n Press 0 to go back" << endl;
			cin>>packChoice;

			if( packChoice == 1 ){
				HotelCost = 5000.00;
				cout << "You have successfully booked Standard Package at Azure Skyline Resort" << endl;
				cout << "Goto menu and take reciept" << endl;

			}
			else if ( packChoice == 2){
				HotelCost = 10000.00;
				cout << "You have successfully booked Premium Package at Azure Skyline Resort" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 3 ){
				HotelCost = 12000.00;
				cout << "You have successfully booked Luxury Package at Azure Skyline Resort" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 0){
				cout << "Returning back" << endl;
				hotels();
			}
			else{
				cout << "Invalid input! Returning to Menu" << endl;
				Sleep(999);
				system("CLS");
				hotels();
			}
			cout << "Press 1 to return to Main menu" << endl;
			cin >> gotoMenu;
			system("CLS");
			if( gotoMenu == 1){
				Menu();
			}
			else{
				Menu();
			}
		}

		else if(HotelChoice == 3){
			cout << "-------- Welcome to Paradise Retreat Lodge -------- " << endl;
			cout << "Packages Offered by Paradise Retreat Lodge: " << endl;
			cout << "\t 1. Standard: Rs 5000" << endl;
			cout << "\t 2. Premium: Rs 10,000" << endl;
			cout << "\t 3. Premium: Rs 12,000" << endl;

			cout << endl;
			cout << "Press the number code of package to book or \n Press 0 to go back" << endl;
			cin>>packChoice;

			if( packChoice == 1 ){
				HotelCost = 5000.00;
				cout << "You have successfully booked Standard Package at Paradise Retreat Lodge" << endl;
				cout << "Goto menu and take reciept" << endl;

			}
			else if ( packChoice == 2){
				HotelCost = 10000.00;
				cout << "You have successfully booked Premium Package at Paradise Retreat Lodge" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 3 ){
				HotelCost = 12000.00;
				cout << "You have successfully booked Luxury Package at Paradise Retreat Lodge" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 0){
				cout << "Returning back" << endl;
				hotels();
			}
			else{
				cout << "Invalid input! Returning to Menu" << endl;
				Sleep(999);
				system("CLS");
				hotels();
			}
			cout << "Press 1 to return to Main menu" << endl;
			cin >> gotoMenu;
			system("CLS");
			if( gotoMenu == 1){
				Menu();
			}
			else{
				Menu();
			}
		}

		else if(HotelChoice == 4){
			cout << "-------- Welcome to Serenity Springs Retreat -------- " << endl;
			cout << "Packages Offered by Serenity Springs Retreat: " << endl;
			cout << "\t 1. Standard: Rs 5000" << endl;
			cout << "\t 2. Premium: Rs 10,000" << endl;
			cout << "\t 3. Premium: Rs 12,000" << endl;

			cout << endl;
			cout << "Press the number code of package to book or \n Press 0 to go back" << endl;
			cin>>packChoice;

			if( packChoice == 1 ){
				HotelCost = 5000.00;
				cout << "You have successfully booked Standard Package at Serenity Springs Retreat" << endl;
				cout << "Goto menu and take reciept" << endl;

			}
			else if ( packChoice == 2){
				HotelCost = 10000.00;
				cout << "You have successfully booked Premium Package at Serenity Springs Retreat" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 3 ){
				HotelCost = 12000.00;
				cout << "You have successfully booked Luxury Package at Serenity Springs Retreat" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 0){
				cout << "Returning back" << endl;
				hotels();
			}
			else{
				cout << "Invalid input! Returning to Menu" << endl;
				Sleep(999);
				system("CLS");
				hotels();
			}
			cout << "Press 1 to return to Main menu" << endl;
			cin >> gotoMenu;
			system("CLS");
			if( gotoMenu == 1){
				Menu();
			}
			else{
				Menu();
			}
		}

		else if(HotelChoice == 5){
			cout << "-------- Welcome to Royal Oasis Hotel-------- " << endl;
			cout << "Packages Offered by Royal Oasis Hotel: " << endl;
			cout << "\t 1. Standard: Rs 5000" << endl;
			cout << "\t 2. Premium: Rs 10,000" << endl;
			cout << "\t 3. Premium: Rs 12,000" << endl;

			cout << endl;
			cout << "Press the number code of package to book or \n Press 0 to go back" << endl;
			cin>>packChoice;

			if( packChoice == 1 ){
				HotelCost = 5000.00;
				cout << "You have successfully booked Standard Package at Royal Oasis Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;

			}
			else if ( packChoice == 2){
				HotelCost = 10000.00;
				cout << "You have successfully booked Premium Package at Royal Oasis Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 3 ){
				HotelCost = 12000.00;
				cout << "You have successfully booked Luxury Package at Royal Oasis Hotel" << endl;
				cout << "Goto menu and take reciept" << endl;
			}
			else if ( packChoice == 0){
				cout << "Returning back" << endl;
				hotels();
			}
			else{
				cout << "Invalid input! Returning to Menu" << endl;
				Sleep(999);
				system("CLS");
				hotels();
			}
			cout << "Press 1 to return to Main menu" << endl;
			cin >> gotoMenu;
			system("CLS");
			if( gotoMenu == 1){
				Menu();
			}
			else{
				Menu();
			}
		}
		else{
			system("CLS");
			Menu();
		}
	}
};

float Booking::HotelCost;

class Charges: public Booking, Cabs, Customers{

public:
	void printBill(){
		ofstream outf("Receipt.txt");
		{
			outf << "----------Voyage Master ----------" << endl;
			outf << "-----------Receipt-----------" << endl;
			outf << "_______________________________" << endl;

			outf << "Customer id" << Customers::cust_id << endl;
			outf << "Description \t\t Total" << endl;
			outf << "Hotel Cost:\t\t" << fixed << setprecision(2) << Booking::HotelCost << endl;
			outf << "Trave(cab) cost: \t" << fixed << setprecision(2) << Cabs::CabCost << endl;

			outf << "_________________________________" << endl;
			outf << "Total Charges: \t\t" << fixed << setprecision(2) << Booking::HotelCost + Cabs::CabCost << endl;
			outf << "__________________________________" << endl;
			outf << "-----------THANK YOU -------------" << endl;
		}
		outf.close();
	}

	void showBill(){

		ifstream ins("Receipt.txt");
		{
			if(!ins){
				cout <<"Error caused in file"<< endl;
			}
			while(!(ins.eof())){
				ins.getline(all,9999);
				cout << all << endl;
			}
			ins.close();
		}
	}
};
void Menu()
{
    cout << "\t\t      * ABC Travels *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    int mainChoice;
    int inChoice;
    int menuChoice;

    cout << "\n\nEnter your choice: ";
    cin >> mainChoice;

    system("CLS");

    Customers c1;
    Booking b1;
    Cabs c2;
    Charges b2;

    if (mainChoice == 1) {
        cout << "------Customers-------" << endl;
        cout << "1. New Customer" << endl;
        cout << "2. Old Customer" << endl;

        cout << "Enter choice: ";
        cin >> inChoice;

        system("CLS");
        if (inChoice == 1) {
            c1.setDetails();
        }
        else if (inChoice == 2) {
            c1.showDetails();
        }
        else {
            cout << "Invalid Input! Redirecting to Previous Menu " << endl;
            Sleep(1100);
            system("CLS");
            Menu();
        }

        cout << "Press 1 to return to the main menu: ";
        cin >> menuChoice;

        system("CLS");
        if (menuChoice == 1) {
            Menu();
        }
        else {
            cout << "Invalid Input! Returning to Main menu" << endl;
            Menu();
        }
    }
    else if (mainChoice == 2) {
        c2.CabDetails();
    }
    else if (mainChoice == 3) {
        b1.hotels();
    }
    else if (mainChoice == 4) {
        cout << "--> Get your receipt <--" << endl;
        b2.printBill();

        cout << "Your receipt is already printed and saved. Access it from File Manager" << endl;
        cout << "To display your receipt on the screen press 1 " << endl;
        cout << "To return to the main menu enter 0" << endl;
        cin >> menuChoice;

        if (menuChoice == 1) {
            system("CLS");
            b2.showBill();

            cout << "Press 1 or any number to return to the main menu: " << endl;
            cin >> menuChoice;

            system("CLS");

            if (menuChoice == 1) {
                Menu();
            }
            else {
                Menu();
            }

        }
        else if (menuChoice == 0) {
            cout << "Redirecting to the main menu" << endl;
            system("CLS");
            Menu();
        }
        else {
            cout << "Invalid input! Returning to Menu" << endl;
            system("CLS");
            Menu();
        }
    }
    else if (mainChoice == 5) {
        cout << "--Exiting the System--" << endl;
        // You should not return 0 from a function declared as "void".
        // Instead, you can use "return;" to exit the function.
        return;
    }
    else {
        cout << "Invalid input! Returning to Menu" << endl;
        Sleep(1100);
        system("CLS");
        Menu();
    }
}

class ManageMenu{
protected:
	string Username;

public:
	ManageMenu(){

		cout << "\n\n\n\n \t Enter your name to continue as admin: ";
		cin >> Username;

		system("CLS");
		Menu();
	}
};
int main(int argc, char const *argv[])
{
	ManageMenu startObj;
	return 0;
}
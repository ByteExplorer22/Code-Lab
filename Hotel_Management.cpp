#include <iostream>
using namespace std;

int main() {
    int quant;
    int choice;

    // Available quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken_roll = 0;

    // Sold Quantity
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken_roll = 0;

    // Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken_roll = 0;

    // Price chart
    // rooms = 1200, pasta = 100, burger = 125, noodles = 150, shake = 80, chicken_roll = 150;

    //Tracking Purchased Items:
    int purchased_burger=0;
    int purchased_pasta=0;
    int purchased_shake=0;
    int purchased_noodles=0;
    int purchased_rooms=0;
    int purchased_chicken_roll=0;
    // Storing of data
    cout << "\t\t**** Quantity of items we have ****" << endl;
    cout << "Rooms available: ";
    cin >> Qrooms;
    cout << "Quantity of pasta: ";
    cin >> Qpasta;
    cout << "Quantity of burger: ";
    cin >> Qburger;
    cout << "Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "Quantity of shake: ";
    cin >> Qshake;
    cout << "Quantity of Chicken_roll: ";
    cin >> Qchicken_roll;

    // Creating menu
    while (true) {
        cout << "\nPlease select from the menu option" << endl;
        cout << "1. Rooms" << endl;
        cout << "2. Pasta" << endl;
        cout << "3. Burger" << endl;
        cout << "4. Noodles" << endl;
        cout << "5. Shake" << endl;
        cout << "6. Chicken_roll" << endl;
        cout << "7. Information regarding sales and collection" << endl;
        cout << "8. Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of Rooms you need: ";
                cin >> quant;
                if ((Qrooms - Srooms) >= quant) {
                    Srooms += quant;
                    Total_rooms += (1200 * quant);
                    cout << quant << " rooms have been allotted." << endl;
                    purchased_rooms=purchased_rooms+quant;
                } else {
                    cout << "Only " << (Qrooms - Srooms) << " rooms are available." << endl;
                }
                break;

            case 2:
                cout << "Enter the number of Pasta you need: ";
                cin >> quant;
                if ((Qpasta - Spasta) >= quant) {
                    Spasta += quant;
                    Total_pasta += (100 * quant);
                    cout << quant << " plates of pasta have been allotted." << endl;
                    purchased_pasta=purchased_pasta+quant;
                } else {
                    cout << "Only " << (Qpasta - Spasta) << " plates of pasta are available." << endl;
                }
                break;

            case 3:
                cout << "Enter the number of Burgers you need: ";
                cin >> quant;
                if ((Qburger - Sburger) >= quant) {
                    Sburger += quant;
                    Total_burger += (125 * quant);
                    cout << quant << " burgers have been allotted." << endl;
                    purchased_burger=purchased_burger+quant;
                } else {
                    cout << "Only " << (Qburger - Sburger) << " burgers are available." << endl;
                }
                break;

            case 4:
                cout << "Enter the number of Noodles you need: ";
                cin >> quant;
                if ((Qnoodles - Snoodles) >= quant) {
                    Snoodles += quant;
                    Total_noodles += (150 * quant);
                    cout << quant << " plates of noodles have been allotted." << endl;
                    purchased_noodles=purchased_noodles+quant;
                } else {
                    cout << "Only " << (Qnoodles - Snoodles) << " plates of noodles are available." << endl;
                }
                break;

            case 5:
                cout << "Enter the number of Shakes you need: ";
                cin >> quant;
                if ((Qshake - Sshake) >= quant) {
                    Sshake += quant;
                    Total_shake += (80 * quant);
                    cout << quant << " shakes have been allotted." << endl;
                    purchased_shake=purchased_shake+quant;
                } else {
                    cout << "Only " << (Qshake - Sshake) << " shakes are available." << endl;
                }
                break;

            case 6:
                cout << "Enter the number of Chicken_roll you need: ";
                cin >> quant;
                if ((Qchicken_roll - Schicken_roll) >= quant) {
                    Schicken_roll += quant;
                    Total_chicken_roll += (150 * quant);
                    cout << quant << " chicken rolls have been allotted." << endl;
                    purchased_chicken_roll=purchased_chicken_roll+quant;
                } else {
                    cout << "Only " << (Qchicken_roll - Schicken_roll) << " chicken rolls are available." << endl;
                }
                break;

            case 7:
                cout << "Details of the Sales and Collection" << endl;
                cout << "-------------------------------------" << endl;

                cout << "Number of rooms we had: " << Qrooms << endl;
                cout << "Number of rooms sold: " << Srooms << endl;
                cout << "Remaining rooms: " << Qrooms - Srooms << endl;
                cout << "Total rooms collection for the day: " << (Srooms * 1200) << endl;

                cout << "-------------------------------------" << endl;

                cout << "Number of plates of pasta we had: " << Qpasta << endl;
                cout << "Number of plates of pasta sold: " << Spasta << endl;
                cout << "Remaining plates of pasta: " << Qpasta - Spasta << endl;
                cout << "Total pasta collection for the day: " << (Spasta * 100) << endl;

                cout << "-------------------------------------" << endl;

                cout << "Number of burgers we had: " << Qburger << endl;
                cout << "Number of burgers sold: " << Sburger << endl;
                cout << "Remaining burgers: " << Qburger - Sburger << endl;
                cout << "Total burger collection for the day: " << (Sburger * 125) << endl;

                cout << "-------------------------------------" << endl;

                cout << "Number of plates of noodles we had: " << Qnoodles << endl;
                cout << "Number of plates of noodles sold: " << Snoodles << endl;
                cout << "Remaining plates of noodles: " << Qnoodles - Snoodles << endl;
                cout << "Total noodles collection for the day: " << (Snoodles * 150) << endl;

                cout << "-------------------------------------" << endl;

                cout << "Number of shakes we had: " << Qshake << endl;
                cout << "Number of shakes sold: " << Sshake << endl;
                cout << "Remaining shakes: " << Qshake - Sshake << endl;
                cout << "Total shakes collection for the day: " << (Sshake * 80) << endl;

                cout << "-------------------------------------" << endl;

                cout << "Number of chicken rolls we had: " << Qchicken_roll << endl;
                cout << "Number of chicken rolls sold: " << Schicken_roll << endl;
                cout << "Remaining chicken rolls: " << Qchicken_roll - Schicken_roll << endl;
                cout << "Total chicken roll collection for the day: " << (Schicken_roll * 150) << endl;

                cout << "-------------------------------------" << endl;
                break;

            case 8:
            	cout<<"Items Purchased"<<endl;
            	cout<<"--------------------------"<<endl;
            	cout<<"Item"<<"			"<<"Quantity_bought"<<"			"<<"Total"<<endl;
            	if(purchased_burger>0){
            		cout<<"Burgers"<<"			"<<purchased_burger<<"			"<<purchased_burger*125;
            	}

            	if(purchased_pasta>0){
            		cout<<"Pasta"<<"			"<<purchased_pasta<<"			"<<purchased_pasta*100;
            	}

            	if(purchased_shake>0){
            		cout<<"Shake"<<"			"<<purchased_shake<<"			"<<purchased_shake*80<<endl;
            	}

            	if(purchased_rooms>0){
            		cout<<"Rooms"<<"			"<<purchased_rooms<<"			"<<purchased_rooms*1200<<endl;
            	}

            	if(purchased_noodles>0){
            		cout<<"noodles"<<"			"<<purchased_noodles<<"			"<<purchased_noodles*150<<endl;
            	}

            	if(purchased_chicken_roll>0){
            		cout<<"Chicken_roll"<<"			"<<purchased_chicken_roll<<"		"<<purchased_chicken_roll*150;
            	}
                return 0;

            default:
                cout << "Enter a valid number between 1 to 8" << endl;
        }
    }

    return 0;
}

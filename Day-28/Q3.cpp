#include <iostream>
#include <string>
using namespace std;

class TicketBooking {
    int ticketNo;
    string name;
    int seats;
    float totalAmount;
    bool booked;

public:

    TicketBooking() {
        ticketNo = 101;
        seats = 50;
        booked = false;
        totalAmount = 0;
    }

    void showTickets() {
        cout << "\nAvailable Seats: " << seats << endl;
        cout << "Ticket Price: Rs. 200 per seat\n";
    }

    void bookTicket() {
        int noOfSeats;

        if (seats > 0) {
            cout << "Enter your name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter number of seats: ";
            cin >> noOfSeats;

            if (noOfSeats <= seats) {
                seats -= noOfSeats;
                totalAmount = noOfSeats * 200;
                booked = true;

                cout << "Ticket Booked Successfully!\n";
            }
            else {
                cout << "Not enough seats available!\n";
            }
        }
        else {
            cout << "No seats available!\n";
        }
    }

    void cancelTicket() {

        if (booked) {
            seats += totalAmount / 200;
            booked = false;

            cout << "Ticket Cancelled Successfully!\n";
        }
        else {
            cout << "No booking found!\n";
        }
    }

    void showBooking() {

        if (booked) {
            cout << "\nBooking Details\n";
            cout << "Ticket Number: " << ticketNo << endl;
            cout << "Customer Name: " << name << endl;
            cout << "Amount Paid: Rs. " << totalAmount << endl;
        }
        else {
            cout << "No booking available!\n";
        }
    }
};


int main() {

    TicketBooking ticket;
    int choice;

    do {

        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Show Available Tickets\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Show Booking Details\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;


        switch(choice) {

            case 1:
                ticket.showTickets();
                break;

            case 2:
                ticket.bookTicket();
                break;

            case 3:
                ticket.cancelTicket();
                break;

            case 4:
                ticket.showBooking();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);


    return 0;
}
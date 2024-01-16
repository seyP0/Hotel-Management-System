#include <iostream>

using namespace std;

class Booking //Basic information that is needed for a full booking
//Parent class that inherits to Room, Guest and Payment class
{
	public:
		int id;
		string from;
		string to;
		int guest_num;
	void setBooking(int id, string from, string to, int guest_num) {
		this -> id=id;
		this -> from = from;
		this -> to=to;
		this -> guest_num=guest_num;
	}
	void getBooking()
	{
		cout<<"Booking ID: "<<id<<endl;
		cout<<"Date from: "<< from <<" to " << to << endl;
		cout << "Guest Number: " <<guest_num<<endl;
	}

	
};
class Room : public Booking  // class inheritance
{
	public:
		int id;
		string room_type;
	void setRoom(int id, string room_type) {
		this->id=id;
		this->room_type=room_type;
	}
	void getRoom ()
	{ cout << "Room id: " << id << endl;
	cout << "Room type: " << room_type << endl;
	}
};

class Guest : public Booking {
	public:
		string name;
		string surname;
		int age;
	void setGuest(string name, string surname, int age) {
		this -> name=name;
		this -> surname=surname;
		this -> age=age;
	}
	void getGuest(){
		cout << "Guest Name: " << name << endl;
		cout << "Guest Surname: "<< surname << endl;
		cout << "Age: "<<age<< endl;
	}
};

class Payment : public Booking {
	
	public:
		int amount;
		string cardNumber;
	void setPayment (int amount, string cardNumber) {
		amount = amount;
		cardNumber = cardNumber;
	}
	
	void getPayment () {
		cout << "Amount: " << amount << endl;
		cout << "Card Number: " << cardNumber << endl;
	}
};

int main() {
	Guest guest;
	Room room;
	room.setBooking(1001, "27-Jul-2022" , "30-Jul-2022", 2);
	room.setRoom(201, "AC room");
	room.getBooking();
	room.getRoom();
	guest.setBooking(1002, "20-jun-2022", "30-jun-2022", 4);
	guest.setGuest("Nil", "Thomson", 35);
	guest.getBooking();
	guest.getGuest();
	Payment pay;
	pay.setBooking(1003, "20-jun-2022", "30-jun-2022", 4);
	pay.setPayment(3500, "N00001234");
	pay.getBooking();
	pay.getPayment();
	return 0;
}
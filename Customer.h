#include<iostream>
#include"Tour.h"
#include"Favorite.h"
#include"Inquiry.h"
#include"Review.h"
#define size 2
#define SIZE 2
using namespace std;

class Customer {
private:
	int CustomerID;
	char FirstName[10];
	char LastName[20];
	char Email[30];
	int ContactNumber;
	int birthYear;
	int birthMonth;
	int birthDay;
	Tour* objTour[SIZE];
	Favorite* objFav[size];
	Review* objRev[size];
	int noofReviews;
	Inquiry *inq;
public:
	Customer();
	Customer(string c_ID, int c_time, string c_date, string c_status);
	Customer(int c_favid1, int c_favid2);
	Customer(int cus_id, const char Fname[10]);
	void setDetails(int cusID, const char fName[10], const char lName[30], const char email[30], int contactNum, int bY, int bM, int bD);
	int getCustID();
	char getFirstName();
	char getLastName();
	char getEmail();
	int getContactNum();
	int getYear();
	int getMonth();
	int getDay();
	void DisplayTour();
	void displayFavorite();
	void addReview(Review* rev);
	void displayCustomer();
	void addInquiry(Inquiry *inq1);
	~Customer();
};
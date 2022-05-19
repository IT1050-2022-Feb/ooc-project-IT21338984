#include "Customer.h"
Customer::Customer()
{
	int j;

	for (j = 0; j < SIZE; j++) {

		objTour[j] = new Tour("",0, "", "");

	}
	cout << "This is Customer Constructor" << endl;
}

Customer::Customer(string c_ID, int c_time, string c_date, string c_status) {

	int j;

	for (j = 0; j < SIZE; j++) {

		objTour[j] = new Tour(c_ID, c_time, c_date, c_status);

	}

}

Customer::Customer(int c_favid1, int c_favid2)
{
	objFav[0] = new Favorite(c_favid1);
	objFav[1] = new Favorite(c_favid2);
}

Customer::Customer(int cus_id, const char Fname[10])
{
	CustomerID = cus_id;
	strcpy(FirstName , Fname);
	noofReviews = 0;
}

void Customer::setDetails(int cusID, const char fName[10], const char lName[30], const char email[30], int contactNum, int bY, int bM, int bD)
{
	CustomerID = cusID;
	strcpy(FirstName, fName);
	strcpy(LastName, lName);
	strcpy(Email, email);
	ContactNumber = contactNum;
	birthYear = bY;
	birthMonth = bM;
	birthDay = bD;
}
int Customer::getCustID()
{
	return CustomerID;
}
char Customer::getFirstName()
{
	return FirstName[10];
}
char Customer::getLastName()
{
	return LastName[20];
}
char Customer::getEmail()
{
	return Email[30];
}
int Customer::getContactNum()
{
	return ContactNumber;
}
int Customer::getYear()
{
	return birthYear;
}
int Customer::getMonth()
{
	return birthMonth;
}
int Customer::getDay()
{
	return birthDay;
}

void Customer::DisplayTour() {

	for (int i = 0; i < SIZE; i++) {
		objTour[i]->getStatus();
	}
}

void Customer::displayFavorite()
{
	for (int i = 0; i < size; i++)
	{
		objFav[i]->displayFavDetails();
	}
}

void Customer::addReview(Review* rev)
{
	for (int i = 0; i < size; i++)
	{
		if (noofReviews < size)
		{
			objRev[i] = rev;
		}
	}
}

void Customer::displayCustomer()
{
	cout << "Customer ID : " << CustomerID << endl;
	cout << "Customer Name : " << FirstName << endl;
	for (int i = 0; i < noofReviews; i++)
	{
		objRev[i]->displayRevDetails();
	}
}

void addInquiry(Inquiry* in1)
{
	in1;
}

Customer::~Customer()
{
	cout << "Customer getting deleted" << endl;
	for (int i = 0; i < size; i++)
	{
		delete objFav[i];
	}
	cout << "The end of the programe" << endl;
	
	cout << "Customer getting deleted." << endl;
	for (int i = 0; i < SIZE; i++) {
		delete objTour[i];
	}
	cout << "THe end of the program." << endl;

	cout << "End of Customer" << endl;
}
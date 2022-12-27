#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan;
    double rate;
    double amount;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
	double prevb;
	double intr;
	double total;
	double newb;

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	prevb = loan;
	while(newb != 0){
	     intr = (rate/100)*prevb;
    	 total = prevb + intr;
	     newb = total - amount;
	     if(total < amount ){
	         amount = total;
	         newb = 0;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevb;
	cout << setw(13) << left << intr;
	cout << setw(13) << left << total;
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newb;
	cout << "\n";
	    break;
	         
	     }
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevb;
	cout << setw(13) << left << intr;
	cout << setw(13) << left << total;
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newb;
	cout << "\n";
	    prevb = newb; 
	    i++;
	    
	   }
	
	return 0;
}


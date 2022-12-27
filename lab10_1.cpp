#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
  cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";



  for (int j = 1; loan > 0; j++){
    double I = loan * rate / 100;
    double total = loan + I;
    double NB = total - pay;
    cout << fixed << setprecision(2); 
	  cout << setw(13) << left << j; 
	  cout << setw(13) << left << loan;
	  cout << setw(13) << left << I;
	  cout << setw(13) << left << total;
	  
      if (total < pay) pay = total; 
	  cout << setw(13) << left << pay;
	  
	  if (NB < 0) NB = 0;
	  cout << setw(13) << left << NB;
	  
	  cout << "\n";	
	  loan = NB;
  }

	
	return 0;
}

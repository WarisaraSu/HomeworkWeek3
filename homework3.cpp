#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main ()
{
	int first , second , third , mid_term , final ;
	cout << "================QUIZZES===============" << endl;
	cout << " Enter first quizz (10) : ";
	cin >> first ;
	cout << " Enter second quizz (10) : ";
	cin >> second ;
	cout << " Enter third quizz (10) : ";
	cin >> third ;
	cout << "================MID-TERM==============" << endl;
	cout << " Enter mid - term (40) : ";
	cin >> mid_term ;
	cout << "================FINAL===============" << endl;
	cout << " Enter first final (50) : ";
	cin >> final ;
	float Quizztotal , sum , total ;
	sum = first + second + third ;
	Quizztotal = sum / 3 ;
	cout << " Quizz Total : " << Quizztotal << endl ;
	cout << " Mid term : " << mid_term << endl ;
	cout << " Final: " << final << endl ;
	total = Quizztotal + mid_term + final ;
	cout << " Total : " << total << endl;
	cout << " Our Score is " << ((total) >= 50 ? "PASS " : " FAIL " ) << endl;
	system ("pause");
	return(0);

}
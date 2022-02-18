#include <iostream>
#include <C:\Users\elokr\Documents\Projects\FG FT 21\C++\Assignments\CelciusToFahrenheit\Header.h>

using namespace std;

int main() {

	double celsius;
	cout << "Write a number in celsius: " << endl;
	cin >> celsius;
	cout << celsius << " is " << CelsiusToFahrenheit(celsius) << " fahrenheit." << endl;

}

double CelsiusToFahrenheit(double celsius) {
	return ((celsius * 9) / 5) + 32;
}
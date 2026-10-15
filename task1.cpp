/*
//Mahad Abubakar L1F26BSCS0314
//Task 1
#include <iostream>
using namespace std;
int main()
{
	//welcome page
	cout << "Hello World!" << endl;
	cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026" << endl;
	cout << "Welcome!" << endl;
	cout << 2026 << endl << 45 << endl << 45 * 3 << endl << 1000 + 500 - 250 << endl;
	//total fees
	cout << "Total Fee: " << 45000 + 9000 << endl;
		return 0;
}
*/


//Task 2
/*
#include <iostream>
//standard library not mentioned
using namespace std;
int main()
{
	//no statement terminator in the bottom line
	cout << "Orientation Day" << endl;
	// no << before 450
	cout << "Total students: " << 450 << endl;
	cout << "Seats left: " << 500 - 450 << endl;
	//no double quotes
	cout << "Have a nice day" << endl;

	//Part B

	//we need to add brackets around the first 3 numbers 
	cout << "Average: " << (60 + 70 + 80) / 3 << endl;

		return 0;
}
*/

//Task3
/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Expression 1: " << 10 + 5 * 2 << endl;
	cout << "Expression 2: " << (10 + 5) * 2 << endl;

	//the operators are evaluated left to right
	cout << "Expression 3: " << 20 - 5 - 3 << endl;
	cout << "Expression 4: " << 100 / 7 << endl;
	cout << "Expression 5: " << 100 % 7 << endl;

	// added brackets on everything after 2 *
	cout << "Expression 6: " << 2 * (3 + 8 / 4 - 1) << endl;
	return 0;
}
*/

//Task 4
/*
#include <iostream>
using namespace std;

int main() {
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;

    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee Paid: " << feePaid << endl;

    semester = semester + 1;
    feePaid = feePaid + 5000;

    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feePaid << endl;

    int remainingFee = totalFee - feePaid;
    float percentagePaid = (feePaid * 100.0) / totalFee;

    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Percentage Paid: " << percentagePaid << endl;

	//int x;
	//cout << x;

    // 2ndYear: Invalid (starts with a digit)
    // student_name: Valid
    // total-marks: Invalid (contains a hyphen)
    // _fee: Valid
    // Roll No: Invalid (contains a space)
    // marks2: Valid

    // Observation:
    // it gave a garbage value and its unsafe to rely on it when i put int x; and didnt assign a value to it

    return 0;
}
*/

/*
//Task 5
#include <iostream>
using namespace std;

int main() {
    int age, creditHours, feePerCreditHour;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> creditHours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    int totalFee = creditHours * feePerCreditHour;
    int discountedFee = totalFee - 2000;

    cout << "Total Fee: Rs " << totalFee << endl;
    cout << "Fee after discount: Rs " << discountedFee << endl;

    int birthYear = 2026 - age;
    int yearTurns25 = birthYear + 25;

    cout << "Year of Birth: " << birthYear << endl;
    cout << "Year you will turn 25: " << yearTurns25 << endl;

    // Experiments:
    // 1. cin reads integers separated by spaces, newlines, or tabs.
    //    Therefore, all three input formats work the same way.
    // 2. If I enter 19.8 for age, cin stores 19.

    return 0;
}
	*/

/*
	//Task 6
#include <iostream>
using namespace std;

int main() {
    int price, quantity;
    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    int total = price * quantity;
    int tax = total * 5 / 100;
    int grandTotal = total + tax;

    cout << "Total: " << total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Grand Total: " << grandTotal << endl;

    // Experiment:
    // With price = 99 and quantity = 7, total = 693.
    // Tax = 693 * 5 / 100 = 34 because int removes the decimal part.
    // A calculator gives 34.65 because it uses decimal arithmetic.

    return 0;
}
	*/


/*
	//Task 7
#include <iostream>
using namespace std;

int main() {
    int celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    int fahrenheit = celsius * 9 / 5 + 32;
    cout << "Temperature in Fahrenheit: "
         << fahrenheit << endl;

    return 0;
}
	*/

	//Task 8
	
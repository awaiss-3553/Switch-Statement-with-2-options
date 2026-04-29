#include <iostream>
using namespace std;
int main() {
	double Obtained_marks, Total_marks;
	int choice;
	
	cout << "Enter Total Marks: ";
	cin >> Total_marks;
	cout << "Enter Obtained Maeks: ";
	cin >> Obtained_marks;
	
	cout << "Enter your choice: ";
    cin >> choice;
    
    int  percentage;
    percentage = (Obtained_marks/Total_marks)*100;
    
	switch(choice) {
        case 1:
            cout << "Percentage: " << percentage << "%" <<endl;
            break;
            
        case 2:
            cout << "Grade: ";
            if(percentage >= 90) {
                cout << "A" <<endl;
            } else if(percentage >= 80) {
                cout << "B" <<endl;
            } else if(percentage >= 70) {
                cout << "C" <<endl;
            } else if(percentage >= 60) {
                cout << "D" <<endl;
            } else if(percentage >= 50) {
                cout << "E" <<endl;
            } else {
                cout << "F" <<endl;
            }
            break;
            
        default:
            cout << "Invalid choice! Please select 1 or 2" <<endl;
    }
	
	return 0;
}


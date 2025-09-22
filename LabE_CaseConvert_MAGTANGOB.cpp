//Jiano Freo Magtangob
//BSIS-2B

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string title, upperTitle, lowerTitle;
    
    // Get input from user
    cout << "Enter book title: ";
    getline(cin, title);
    
    // Create copies for conversion
    upperTitle = title;
    lowerTitle = title;
    
    // Convert to uppercase using transform and toupper
    transform(upperTitle.begin(), upperTitle.end(), upperTitle.begin(), ::toupper);
    
    // Convert to lowercase using transform and tolower
    transform(lowerTitle.begin(), lowerTitle.end(), lowerTitle.begin(), ::tolower);
    
    // Display the results
    cout << "Original Title: " << title << endl;
    cout << "Uppercase (for storage): " << upperTitle << endl;
    cout << "Lowercase (for searching): " << lowerTitle << endl;
    
    return 0;
}
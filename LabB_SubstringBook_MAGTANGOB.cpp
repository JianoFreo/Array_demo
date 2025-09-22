//Jiano Freo Magtangob
//BSIS-2B
#include <iostream>
#include <string>
using namespace std;

int main() {
    string title, bookCode;
    
    // Get input from user
    cout << "Enter book title: ";
    getline(cin, title);
    
    // Check if title has at least 3 characters
    if (title.length() >= 3) {
        // Extract first 3 characters using substr()
        bookCode = title.substr(0, 3);
        
        // Convert to title case (first letter uppercase, rest lowercase)
        bookCode[0] = toupper(bookCode[0]);
        for (int i = 1; i < bookCode.length(); i++) {
            bookCode[i] = tolower(bookCode[i]);
        }
    } else {
        // If title is less than 3 characters, use the whole title
        bookCode = title;
        if (!bookCode.empty()) {
            bookCode[0] = toupper(bookCode[0]);
        }
    }
    // Display the result
    cout << "\nBook Title: " << title << endl;
    cout << "Generated Book Code: " << bookCode << endl;
    
    return 0;
}
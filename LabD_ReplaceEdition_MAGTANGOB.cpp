//Jiano Freo Magtangob
//BSIS-2B

#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookInfo;
    string oldEdition = "1st Edition";
    string newEdition = "2nd Edition";
    size_t position = 0;
    
    // Get input from user
    cout << "Enter book title: ";
    getline(cin, bookInfo);
    
    // Store original input for display
    string original = bookInfo;
    
    // Replace all occurrences of "1st Edition" with "2nd Edition"
    while ((position = bookInfo.find(oldEdition, position)) != string::npos) {
        bookInfo.replace(position, oldEdition.length(), newEdition);
        position += newEdition.length(); // Move past the replacement
    }
    
    // Display the results
    cout << "\nOriginal: " << original << endl;
    cout << "Updated:  " << bookInfo << endl;
    
    // Check if any replacements were made
    if (original == bookInfo) {
        cout << "Note: No '1st Edition' found to replace." << endl;
    } else {
        cout << "Successfully updated edition information!" << endl;
    }
    
    return 0;
}
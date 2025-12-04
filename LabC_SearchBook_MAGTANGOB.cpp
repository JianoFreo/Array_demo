#include <iostream>
#include <string>
using namespace std;

int main() {
    string title, keyword;
    size_t position;
    
    // Get input from user
    cout << "Enter book title: ";
    getline(cin, title);
    
    cout << "Enter keyword to search: ";
    getline(cin, keyword);
    
    // Search for keyword in title using find()
    position = title.find(keyword);
    
    // Display the result
    cout << "\nBook Title: " << title << endl;
    cout << "Keyword: " << keyword << endl;
    
    // Check if keyword was found
    if (position != string::npos) {
        cout << "Result: Found at index " << position << endl;
    } else {
        cout << "Result: Not found" << endl;
    }
    
    return 0;
}
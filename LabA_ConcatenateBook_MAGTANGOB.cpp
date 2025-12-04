#include <iostream>
#include <string>
using namespace std;

int main() {
    string author, title, result;
    
    // Get input from user
    cout << "Enter author's name: ";
    getline(cin, author);  // Using getline to handle spaces in names
    
    cout << "Enter book title: ";
    getline(cin, title);
    
    // Concatenate author and title with separator
    result = author + " - " + title;
    
    // Display the result
    cout << "\nConcatenated Result:" << endl;
    cout << result << endl;
    
    return 0;
}
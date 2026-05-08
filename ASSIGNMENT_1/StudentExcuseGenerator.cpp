// StudentExcuseGenerator.cpp
// A fun console program that generates creative excuses for missing homework.
// Uses vectors to store excuse templates and random selection for variety.

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

using namespace std;

// Function to replace all occurrences of {name} placeholder with actual name
string replacePlaceholder(string templ, const string& name) {
    string placeholder = "{name}";
    size_t pos = 0;
    // Loop until no more placeholders remain
    while ((pos = templ.find(placeholder, pos)) != string::npos) {
        templ.replace(pos, placeholder.length(), name);
        pos += name.length(); // Advance past the inserted name
    }
    return templ;
}

int main() {
    // Seed the random number generator with current time for true randomness
    srand(static_cast<unsigned int>(time(0)));

    // Store all excuse templates in a vector
    vector<string> excuseTemplates = {
        "{name} couldn't complete the assignment because the laptop battery died unexpectedly.",
        "{name} tried finishing the homework, but the internet stopped working for the entire night.",
        "{name} was ready to submit the assignment when the file mysteriously disappeared.",
        "{name} couldn't finish the assignment because the laptop decided to install updates for six hours.",
        "{name} was about to complete the homework when the Wi-Fi mysteriously disappeared.",
        "{name} tried finishing the assignment, but the computer keyboard suddenly stopped cooperating.",
        "{name} had the assignment ready, but the printer ran out of ink at midnight.",
        "{name} accidentally sent the assignment to themselves instead of the teacher. It was unread.",
        "{name}'s dog sat on the keyboard and deleted everything. The dog shows no remorse.",
        "{name} was fully focused until a three-hour power cut struck at the worst possible moment.",
        "{name} completed the assignment, but the cloud storage decided to sync it to a parallel universe.",
        "{name} tried submitting the work, but the college portal crashed and took the file with it.",
        "{name} had a great excuse ready, but forgot to write that down too.",
        "{name} was distracted by an important YouTube tutorial that turned into a six-hour rabbit hole.",
        "{name} finished everything, but accidentally saved it as a blank document and didn't notice."
    };

    string studentName;

    cout << "============================================" << endl;
    cout << "    Welcome to Student Excuse Generator     " << endl;
    cout << "============================================" << endl;
    cout << "Enter your name: ";
    getline(cin, studentName);

    // Handle empty input — use default name instead of crashing
    if (studentName.empty()) {
        cout << "No name entered! Using 'Student' as default." << endl;
        studentName = "Student";
    }

    // Pick a random excuse from the list
    int randomIndex = rand() % excuseTemplates.size();
    string selectedExcuse = excuseTemplates[randomIndex];

    // Replace {name} placeholder with the actual student name
    string finalExcuse = replacePlaceholder(selectedExcuse, studentName);

    cout << "\n--------------------------------------------" << endl;
    cout << "Your Excuse: " << finalExcuse << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}

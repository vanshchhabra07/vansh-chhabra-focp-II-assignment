// AIRoastGenerator.cpp
// A fun console program that generates random roasts based on user's name.
// Uses vectors to store templates and random selection for variety.

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include <algorithm> // for find

using namespace std;

// Function to replace all occurrences of a placeholder with actual name
string replacePlaceholder(string templ, const string& name) {
    string placeholder = "{name}";
    size_t pos = 0;
    // Keep replacing until no more placeholders found
    while ((pos = templ.find(placeholder, pos)) != string::npos) {
        templ.replace(pos, placeholder.length(), name);
        pos += name.length(); // Move past the replaced text
    }
    return templ;
}

int main() {
    // Seed random number generator with current time for true randomness
    srand(static_cast<unsigned int>(time(0)));

    // Store all roast templates in a vector
    vector<string> roastTemplates = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name} once Googled 'how to Google things'. Still waiting for the results.",
        "The only thing {name} commits to regularly is forgetting to commit their code.",
        "{name}'s error log is longer than their resume.",
        "{name} uses Stack Overflow so much that the website sends them a birthday card.",
        "{name} tried to write a sorting algorithm once. It took three days and sorted nothing.",
        "Scientists say the universe is 13.8 billion years old. {name}'s code compiles slower.",
        "{name}'s Wi-Fi password is stronger than their logic.",
        "They say practice makes perfect. {name} is proof that some things are just beyond practice.",
        "{name} put the 'fun' in 'function that never works'."
    };

    string userName;

    cout << "====================================" << endl;
    cout << "      Welcome to AI Roast Generator  " << endl;
    cout << "====================================" << endl;
    cout << "Enter your name: ";
    getline(cin, userName);

    // Handle empty input
    if (userName.empty()) {
        cout << "No name entered! Using 'Anonymous' instead." << endl;
        userName = "Anonymous";
    }

    // Randomly pick a roast template
    int randomIndex = rand() % roastTemplates.size();
    string selectedRoast = roastTemplates[randomIndex];

    // Replace placeholder with actual name
    string finalRoast = replacePlaceholder(selectedRoast, userName);

    cout << "\n------------------------------------" << endl;
    cout << "Your Roast: " << finalRoast << endl;
    cout << "------------------------------------" << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

void displayHeader() {
    cout << "===============================================\n";
    cout << "  NETFLIX INTERACTIVE RECOMMENDATION ASSISTANT \n";
    cout << "===============================================\n";
}

void recommendContent(int genreChoice, int moodChoice){
    cout << "\n-----------------------------------------------\n";
    cout << " YOUR PERSONALISED NETFLIX RECOMMENDATIONS \n";
    cout << "-------------------------------------------------\n";

    if (genreChoice == 1){ //Action / Sci-Fi
        if (moodChoice == 1){
            cout << "Title: Cyberpunk: Edgerunners\n";
            cout << "Type :Anime/ Sci-Fi Action\n";
            cout << "Description: A high-octane story about a street kid trying to survive in Night City.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Stranger Things\n";
            cout << "Type : Sci-Fi / Mystery Series\n";
            cout << "Description: A group of young friends uncover supernatural forces and secret government exploits.\n";
        }
        else{
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 2){
        //Drama / Thriller
        if(moodChoice == 1){
            cout << "Title: Squid Game\n";
            cout << "Type : Thriller / Drama\n";
            cout << "Description: Hundreds of cash-strapped players accept a strange invitation to compete in children's games.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: The Queen's Gambit\n";
            cout << "Type : Drama / Period Series\n";
            cout << "Description: A young orphaned chess prodigy rises to the top of the chess world while struggling with emotional issues.\n";
        }
        else{
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 3){
        //Animation / Comedy
        if (moodChoice == 1) {
            cout << "Title: The Mitchells vs. The Machines\n";
            cout << "Type : Animated Comedy / Sci-Fi\n";
            cout << "Description: A quirky family must save the world from a robot apocalypse during a road trip.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: BoJack Horseman\n";
            cout << "Type : Animated Comedy / Drama\n";
            cout << "Description: A washed-up actor, who happens to be a horse, navigates life and relationships in Hollywood.\n";
        }
        else{
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else{
        cout << "Invalid Genre Selection. Please run the program again.\n";
    }
    cout << "===============================================\n";
}

int main() {
    int genreChoice, moodChoice;
    displayHeader();
    cout << "SELECT YOUR PREFERRED GENRE:\n";
    cout << "1. Action / Sci-Fi\n";
    cout << "2. Drama / Thriller\n";
    cout << "3. Animation / Comedy\n";
    cout << "Enter your choice (1-3): ";
    cin >> genreChoice;
    cout << "\nSELECT YOUR VIEWING MOOD:\n";
    cout << "1. Intense / Exciting\n";
    cout << "2. Story-Rich / Chill\n";
    cout << "Enter your choice (1-2): ";
    cin >> moodChoice;
    recommendContent(genreChoice, moodChoice);
    return 0;
}
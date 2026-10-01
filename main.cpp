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
        else if (moodChoice == 1){
            cout << "Title: The Old Guard\n";
            cout << "Type : Action / Fantasy\n";
            cout << "Description: A team of immortal warriors fight to protect their secret and their freedom from those who want to exploit them.\n";
        }
        else if (moodChoice == 1){
            cout << "Title: Extraction\n";
            cout << "Type : Action / Thriller\n";
            cout << "Description: A black-market mercenary embarks on a deadly mission to rescue the kidnapped son of an international crime lord.\n";
        }
        else if (moodChoice == 1){
            cout << "Title: The Witcher\n";
            cout << "Type : Fantasy / Action Series\n";
            cout << "Description: A solitary monster hunter struggles to find his place in a world where people often prove more wicked than beasts.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Stranger Things\n";
            cout << "Type : Sci-Fi / Mystery Series\n";
            cout << "Description: A group of young friends uncover supernatural forces and secret government exploits.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: The Adam Project\n";
            cout << "Type : Sci-Fi / Adventure\n";
            cout << "Description: A time-traveling pilot teams up with his younger self to save the the future and confront his past.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Lost in Space\n";
            cout << "Type : Sci-Fi / family Adventure Series\n";
            cout << "Description: A family of space explorers must survive on an alien planet after their ship crashes.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Black Mirror\n";
            cout << "Type : Sci-Fi / Anthology Series\n";
            cout << "Description: An anthology series exploring the dark side of technology and its impact on society.\n";
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
        else if (moodChoice == 1){
            cout << "Title: Ozark\n";
            cout << "Type : crime Drama / Thriller Series\n";
            cout << "Description: A financial advisor drags his family into the Ozarks to launder money for a dangerous drug cartel.\n";
        }
        else if (moodChoice == 1){
            cout << "Title: You\n";
            cout << "Type : Psychological Thriller Series\n";
            cout << "Description: A charming bookstore manager becomes dangerously obsessed with the woman he falls for.\n";
        }
        else if (moodChoice == 1){
            cout << "Title: Mindhunter\n";
            cout << "Type : Thriller / Drama Series\n";
            cout << "Description: FBI agents interview imprisoned serial killers to understand how they think and solve ongoing cases.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: The Queen's Gambit\n";
            cout << "Type : Drama / Period Series\n";
            cout << "Description: A young orphaned chess prodigy rises to the top of the chess world while struggling with emotional issues.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: The Crown\n";
            cout << "Type : Historical Drama Series\n";
            cout << "Description: A chronicle of the reign of Queen Elizabeth II and the political and personal events that shaped her era.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Atypical\n";
            cout << "Type : Coming-of-Age Drama / Comedy Series\n";
            cout << "Description: A teenager on the autism spectrum decides to start dating, sending his family on a journey of self-discovery.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Marriage Story\n";
            cout << "Type : Drama / Romance Series\n";
            cout << "Description: A deeply personal story of a marriage falling apart and the emotional journey of divorce.\n";
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
        else if (moodChoice == 2){
            cout << "Title: Hilda\n";
            cout << "Type : Animated Adventure / Fantasy Series\n";
            cout << "Description: A fearless young girl journeys through a magical world of giants and other magical creatures.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Big Mouth\n";
            cout << "Type : Animated Comedy Series\n";
            cout << "Description: A group of teenagers navigate the awkward and hilarious challenges of puberty with the help of their hormone monsters.\n";
        }
        else if (moodChoice == 2){
            cout << "Title: Klaus\n";
            cout << "Type : Animated Comedy / Holiday Film\n";
            cout << "Description: A selfish postman befrinds a reclusive toymaker, sparking an unlikely friendship that brings joy to a frozen town.\n";
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
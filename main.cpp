#include <iostream>
#include <string>
#include <random>

using namespace std;

// Generate a random index between 0 and n-1
int getRandomIndex(int n) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dist(0, n - 1);
    return dist(gen);
}

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
            string titles[4] = {
                "Cyberpunk: Edgerunners",
                "The Old Guard",
                "Extraction",
                "The Witcher"
            };
            string types[4] = {
                "Anime / Sci-Fi Action",
                "Action / Fantasy",
                "Action / Thriller",
                "Fantasy / Action Series"
            };
            string descriptions[4] = {
                "A high-octane story about a street kid trying to survive in Night City.",
                "A team of immortal warriors fight to protect their secret and their freedom from those who want to exploit them.",
                "A black-market mercenary embarks on a deadly mission to rescue the kidnapped son of an international crime lord.",
                "A solitary monster hunter struggles to find his place in a world where people often prove more wicked than beasts."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2){
            string titles[4] = {
                "Stranger Things",
                "The Adam Project",
                "Lost in Space",
                "Black Mirror"
            };
            string types[4] = {
                "Sci-Fi / Mystery Series",
                "Sci-Fi / Adventure",
                "Sci-Fi / family Adventure Series",
                "Sci-Fi / Anthology Series"
            };
            string descriptions[4] = {
                "A group of young friends uncover supernatural forces and secret government exploits.",
                "A time-traveling pilot teams up with his younger self to save the the future and confront his past.",
                "A family of space explorers must survive on an alien planet after their ship crashes.",
                "An anthology series exploring the dark side of technology and its impact on society."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else{
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 2){
        //Drama / Thriller
        if(moodChoice == 1){
            string titles[4] = {
                "Squid Game",
                "Ozark",
                "You",
                "Mindhunter"
            };
            string types[4] = {
                "Thriller / Drama",
                "crime Drama / Thriller Series",
                "Psychological Thriller Series",
                "Thriller / Drama Series"
            };
            string descriptions[4] = {
                "Hundreds of cash-strapped players accept a strange invitation to compete in children's games.",
                "A financial advisor drags his family into the Ozarks to launder money for a dangerous drug cartel.",
                "A charming bookstore manager becomes dangerously obsessed with the woman he falls for.",
                "FBI agents interview imprisoned serial killers to understand how they think and solve ongoing cases."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2){
            string titles[4] = {
                "The Queen's Gambit",
                "The Crown",
                "Atypical",
                "Marriage Story"
            };
            string types[4] = {
                "Drama / Period Series",
                "Historical Drama Series",
                "Coming-of-Age Drama / Comedy Series",
                "Drama / Romance Series"
            };
            string descriptions[4] = {
                "A young orphaned chess prodigy rises to the top of the chess world while struggling with emotional issues.",
                "A chronicle of the reign of Queen Elizabeth II and the political and personal events that shaped her era.",
                "A teenager on the autism spectrum decides to start dating, sending his family on a journey of self-discovery.",
                "A deeply personal story of a marriage falling apart and the emotional journey of divorce."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else{
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 3){
        //Animation / Comedy
        if (moodChoice == 1) {
            string titles[4] = {
                "The Mitchells vs. The Machines",
                "Arcane",
                "Castlevania",
                "Love, Death & Robots",
            };
            string types[4] = {
                "Animated Comedy / Sci-Fi",
                "Animated Action / Fantasy Series",
                "Animated Dark fantasy / Action Series",
                "Animated Anthology / Sci-Fi Series"
            };
            string descriptions[4] = {
                "A quirky family must save the world from a robot apocalypse during a road trip.",
                "Two sisters from different worlds must work together to save their city from an ancient evil.",
                "A vampire hunter and his companion face off against a powerful demon in a dark fantasy world.",
                "A collection of short stories exploring the intersection of technology and humanity."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2){
            string titles[4] = {
                "BoJack Horseman",
                "Hilda",
                "Big Mouth",
                "Klaus"
            };
            string types[4] = {
                "Animated Comedy / Drama",
                "Animated Adventure / Fantasy Series",
                "Animated Comedy Series",
                "Animated Comedy / Holiday Film"
            };
            string descriptions[4] = {
                "A washed-up actor, who happens to be a horse, navigates life and relationships in Hollywood.",
                "A fearless young girl journeys through a magical world of giants and other magical creatures.",
                "A group of teenagers navigate the awkward and hilarious challenges of puberty with the help of their hormone monsters.",
                "A selfish postman befrinds a reclusive toymaker, sparking an unlikely friendship that brings joy to a frozen town."
            };
            int index = getRandomIndex(4);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
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
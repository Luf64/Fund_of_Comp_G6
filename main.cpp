#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <limits>
#include <cstdlib>
#include <thread>

using namespace std;

// Generate a random index between 0 and n-1
int getRandomIndex(int n)
{
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dist(0, n - 1);
    return dist(gen);
}

void displayHeader()
{
    cout << "===============================================\n";
    cout << "  NETFLIX INTERACTIVE RECOMMENDATION ASSISTANT \n";
    cout << "===============================================\n";
}

void recommendContent(int genreChoice, int moodChoice)
{
    cout << "\n-----------------------------------------------\n";
    cout << " YOUR PERSONALISED NETFLIX RECOMMENDATIONS \n";
    cout << "-------------------------------------------------\n";

    if (genreChoice == 1)
    { // Action / Sci-Fi
        if (moodChoice == 1)
        {
            string titles[6] = {
                "Cyberpunk: Edgerunners",
                "The Old Guard",
                "Extraction",
                "The Witcher",
                "Mad Max: Fury Road",
                "The Matrix"};
            string types[6] = {
                "Anime / Sci-Fi Action",
                "Action / Fantasy",
                "Action / Thriller",
                "Fantasy / Action Series",
                "Action / Sci-Fi",
                "Sci-Fi / Action"};
            string descriptions[6] = {
                "A high-octane story about a street kid trying to survive in Night City.",
                "A team of immortal warriors fight to protect their secret and their freedom from those who want to exploit them.",
                "A black-market mercenary embarks on a deadly mission to rescue the kidnapped son of an international crime lord.",
                "A solitary monster hunter struggles to find his place in a world where people often prove more wicked than beasts.",
                "In a post-apocalyptic wasteland, a woman rebels against a tyrannical ruler in search for her homeland.",
                "A computer hacker learns from mysterious rebels about the true nature of his reality and his role in the war against its controllers."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2)
        {
            string titles[6] = {
                "Stranger Things",
                "The Adam Project",
                "Lost in Space",
                "Black Mirror",
                "Interstellar",
                "Dune"};
            string types[6] = {
                "Sci-Fi / Mystery Series",
                "Sci-Fi / Adventure",
                "Sci-Fi / family Adventure Series",
                "Sci-Fi / Anthology Series",
                "Sci-Fi / Drama",
                "Sci-Fi / Adventure"};
            string descriptions[6] = {
                "A group of young friends uncover supernatural forces and secret government exploits.",
                "A time-traveling pilot teams up with his younger self to save the the future and confront his past.",
                "A family of space explorers must survive on an alien planet after their ship crashes.",
                "An anthology series exploring the dark side of technology and its impact on society.",
                "A team of explorers travel through a wormhole in space in an attempt to ensure humanity's survival.",
                "A noble family becomes embroiled in a war for control over the galaxy's most valuable asset."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else
        {
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 2)
    {
        // Drama / Thriller
        if (moodChoice == 1)
        {
            string titles[6] = {
                "Squid Game",
                "Ozark",
                "You",
                "Mindhunter",
                "Breaking Bad",
                "Prisoners"};
            string types[6] = {
                "Thriller / Drama",
                "crime Drama / Thriller Series",
                "Psychological Thriller Series",
                "Thriller / Drama Series",
                "Crime / Thriller Series",
                "Crime / Thriller"};
            string descriptions[6] = {
                "Hundreds of cash-strapped players accept a strange invitation to compete in children's games.",
                "A financial advisor drags his family into the Ozarks to launder money for a dangerous drug cartel.",
                "A charming bookstore manager becomes dangerously obsessed with the woman he falls for.",
                "FBI agents interview imprisoned serial killers to understand how they think and solve ongoing cases.",
                "A chemistry teacher diagnosed with cancer turns to manufacturing and selling methamphetamine to secure his family's future.",
                "When Keller Dover's daughter and her friend go missing, he takes matters into his own hands as the police pursue multiple leads."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2)
        {
            string titles[6] = {
                "The Queen's Gambit",
                "The Crown",
                "Atypical",
                "Marriage Story",
                "The Shawshank Redemption",
                "Forrest Gump"};
            string types[6] = {
                "Drama / Period Series",
                "Historical Drama Series",
                "Coming-of-Age Drama / Comedy Series",
                "Drama / Romance Series",
                "Drama",
                "Drama / Romance"};
            string descriptions[6] = {
                "A young orphaned chess prodigy rises to the top of the chess world while struggling with emotional issues.",
                "A chronicle of the reign of Queen Elizabeth II and the political and personal events that shaped her era.",
                "A teenager on the autism spectrum decides to start dating, sending his family on a journey of self-discovery.",
                "A deeply personal story of a marriage falling apart and the emotional journey of divorce.",
                "Two imprisoned men bond over a number of years, finding solace and eventual redemption through acts of common decency.",
                "The presidencies of Kennedy and Johnson, the Vietnam War, the Watergate scandal and other historical events unfold from the perspective of an Alabama man."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else
        {
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else if (genreChoice == 3)
    {
        // Animation / Comedy
        if (moodChoice == 1)
        {
            string titles[6] = {
                "The Mitchells vs. The Machines",
                "Arcane",
                "Castlevania",
                "Love, Death & Robots",
                "Spider-Man: Into the Spider-Verse",
                "Attack on Titan"};
            string types[6] = {
                "Animated Comedy / Sci-Fi",
                "Animated Action / Fantasy Series",
                "Animated Dark fantasy / Action Series",
                "Animated Anthology / Sci-Fi Series",
                "Animated Action / Adventure",
                "Animated Action / Dark Fantasy"};
            string descriptions[6] = {
                "A quirky family must save the world from a robot apocalypse during a road trip.",
                "Two sisters from different worlds must work together to save their city from an ancient evil.",
                "A vampire hunter and his companion face off against a powerful demon in a dark fantasy world.",
                "A collection of short stories exploring the intersection of technology and humanity.",
                "Teen Miles Morales becomes the Spider-Man of his universe, and must join with five spider-powered individuals to stop a threat.",
                "After his hometown is destroyed, young Eren Yeager vows to cleanse the earth of the giant humanoid Titans."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else if (moodChoice == 2)
        {
            string titles[6] = {
                "BoJack Horseman",
                "Hilda",
                "Big Mouth",
                "Klaus",
                "Spirited Away",
                "Toy Story"};
            string types[6] = {
                "Animated Comedy / Drama",
                "Animated Adventure / Fantasy Series",
                "Animated Comedy Series",
                "Animated Comedy / Holiday Film",
                "Animated Fantasy / Adventure",
                "Animated Comedy / Adventure"};
            string descriptions[6] = {
                "A washed-up actor, who happens to be a horse, navigates life and relationships in Hollywood.",
                "A fearless young girl journeys through a magical world of giants and other magical creatures.",
                "A group of teenagers navigate the awkward and hilarious challenges of puberty with the help of their hormone monsters.",
                "A selfish postman befrinds a reclusive toymaker, sparking an unlikely friendship that brings joy to a frozen town.",
                "During her family's move to the suburbs, a sullen 10-year-old girl wanders into a world ruled by gods, witches, and spirits.",
                "A cowboy doll is profoundly threatened and jealous when a new spaceman figure supplants him as top toy in a boy's room."};
            int index = getRandomIndex(6);
            cout << "Title: " << titles[index] << "\n";
            cout << "Type : " << types[index] << "\n";
            cout << "Description: " << descriptions[index] << "\n";
        }
        else
        {
            cout << "Invalid Mood Selection. Please run the program again.\n";
        }
    }
    else
    {
        cout << "Invalid Genre Selection. Please run the program again.\n";
    }
    cout << "===============================================\n";
}

int getValidChoice(const string &prompt, int minVal, int maxVal)
{
    int choice;
    while (true)
    {
        cout << prompt;
        if (cin >> choice && choice >= minVal && choice <= maxVal)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
            return choice;
        }
        if (cin.eof())
            exit(0); // input closed, avoid infinite loop

        cin.clear();                                         // reset error state (for letters etc.)
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // throw away bad input
        cout << "Invalid input. Please enter a number from "
             << minVal << " to " << maxVal << ".\n\n";
    }
}

int main()
{
    string restartChoice; // Used string instead of char to work with getline

    do
    {
        displayHeader();
        cout << "SELECT YOUR PREFERRED GENRE:\n";
        cout << "1. Action / Sci-Fi\n";
        cout << "2. Drama / Thriller\n";
        cout << "3. Animation / Comedy\n";
        int genreChoice = getValidChoice("Enter your choice (1-3): ", 1, 3);

        cout << "\nSELECT YOUR VIEWING MOOD:\n";
        cout << "1. Intense / Exciting\n";
        cout << "2. Story-Rich / Chill\n";
        int moodChoice = getValidChoice("Enter your choice (1-2): ", 1, 2);

        recommendContent(genreChoice, moodChoice);

        // Implementing the "Press Enter to exit / Type R to restart" logic discussed earlier
        cout << "\nType 'R' and press Enter to restart, or just press Enter to exit: ";
        getline(cin, restartChoice);
        cout << "\n";

    } while (restartChoice == "r" || restartChoice == "R");

    cout << "Enjoy your show!\n"
         << endl;
    this_thread::sleep_for(chrono::seconds(3));
    return 0;
}
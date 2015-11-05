#include <iostream>

using namespace std;

bool yes(string ansr)// function returns true if a player wants to play
{
    bool result = false;
    if(ansr != "quit" && ansr != "QUIT" && ansr != "no" && ansr != "NO" && ansr != "No" && ansr != "exit" && ansr != "EXIT"
        && ansr != "Nope" && ansr != "NOPE" && ansr != "nope" && ansr != "End" && ansr != "END" && ansr != "end")
        result = true;

    return result;
}

int main()
{
    string ans;
    cout << "Would you like to play Hangman?" << endl;
    cin >> ans;
    while(yes(ans))// play again loop
    {
        cout << "######### HANGMAN ##########" << endl << endl;// game start header
        // game logic here
        
        cout << "Would you like to play again?" << endl;// check for play again
        cin >> ans;
    }
}

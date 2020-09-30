/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
using namespace std;

void win()
{
    cout << "\nYOU WON !!\n" << endl;
}

void lose()
{
    cout << "\nYOU LOSE :( !!\n" << endl;
}

void draw()
{
    cout << "\nDRAW.\n" << endl;
}

int main()
{
    bool play = true;
    while (play) {
    srand(time(NULL));
    
    cout<<"GAME: ROCK PAPER SCISSOR\n\n";
    cout<<"Winning Rules of the Rock paper scissor game as follows \n\n";
    cout<<"Rock vs paper -> paper wins \n";
    cout<<"Rock vs scissor -> Rock wins \n";
    cout<<"paper vs scissor -> scissor wins \n";
    
    cout << "\n---\n\nlet's begin, Please pick your choice from below: \n\n";
    cout << "Enter 1 for Rock\n";
    cout << "Enter 2 for Paper\n";
    cout << "Enter 3 for Scissor\n\n";
    
    int choice;
    cin >> choice;
    
    if(choice ==1){
        cout << "You've picked ROCK \n\nI'ts computer's turn\n\n";
    } else if (choice == 2) {
        cout << "You've picked PAPER \n\nI'ts computer's turn\n\n";
    } else if (choice ==3) {
        cout << "You've picked SCISSOR \n\nI'ts computer's turn\n\n";
    } else {
        cout << "INVALID CHOICE\n\n";
       return 0;
    }
    
    
    int randomNumber = (rand() % 3)+1;
    
    cout << randomNumber << endl;
    
   if(randomNumber ==1){
        cout << "Computer has picked ROCK \n\n";
    } else if (randomNumber == 2) {
        cout << "Computer has picked PAPER \n\n";
    } else if (randomNumber ==3) {
        cout << "Computer has picked SCISSOR \n\n";
    } else {
        cout << "INVALID CHOICE\n\n";
       return 0;
    }
    
    if (choice == randomNumber){
        draw();
    } 
    
    if (choice == 1){
        if (randomNumber == 2){
            lose();
        } else if(randomNumber ==3){
            win();
        }
    } else if (choice ==2) {
        if (randomNumber ==1){
            win();
        } else if (randomNumber == 3){
            lose();
        }
    } else if (choice ==3) {
        if (randomNumber ==1){
            lose();
        } else if (randomNumber ==2){
            win();
        }
    } 
    
    cout << "Would you like to play again? \n\n";
    cout << "Enter 1 for yes\n";
    cout << "Enter 2 for No \n";
    
    int ans;
    cin >> ans;
    
    if (ans == 1) {
        play = true;
    } else if(ans ==2 ) {
        play = false;
    } else {
        cout << "INVALID OPTION" ;
        return 0;
    }

    }


    
    
    
}



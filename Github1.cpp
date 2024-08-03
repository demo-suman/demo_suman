#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 int main(){
     cout<< "\n\t\t-------------------------Welcome to the Number Guessing Game------------\n"<<endl;
     cout<< "\n\t\t------>> you will have to guess a number between 1 to 100.";
     cout<< "\n\t\t------>> lets start playing and Best of Luck."<<endl;

     srand(time(0));
     int randnumber = ( rand() %100)+1;
     cout<< "\n^^**You will have total 5 change to guess the correct number.**^^\n";
     int chanceLeft = 5;
     int playerinput;

     for( int i = 1;i<= 5; i++)
     {
        cout << "\n------>Enetr the Number: ";
        cin >> playerinput;

        if(playerinput == randnumber)
        {
            cout<< "\ncongrats!!. you have successfully guccessfully guessed the right number\n";
            cout<< "\nThnaks for playing. have a nice Day";
            break;
        }
        else{
            if(playerinput > randnumber)
            {
                cout<< "\n""Insert a smaller Number . try Again"""<<endl;
            }
            else{
                cout<< "\n""[ insert Left a large Number . try Again ]"""<<endl;
            }
        }
        chanceLeft--;
        cout<< "\n( chances left to gguess the Randoes Number: " <<chanceLeft << " )"<<endl;
        if(chanceLeft == 0)
        {
            cout<< "\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<< " the random number was : " << randnumber <<endl;
            cout<< " Thanks for playing have a nice day.";
        }
         }
         cout<< "\n ";
         return 0;
 } 
 
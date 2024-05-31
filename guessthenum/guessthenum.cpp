#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int) time(NULL));  // to give random number with the current time
    int num=(rand()%100)+1;           // Generate a random number between 1 and 100
    int guess;
    cout<<"Starting the game..."<<endl;
      cout<<"Enter your guess between 100 ";
    do
    {
        cin>>guess;
        if (guess>num)
        {
           cout<<"Enter smaller number"<<endl;
        }
        else if(guess<num){
            cout<<"Enter larger number"<<endl;
        }
        else{
            cout<<"Correct guess"<<endl;
        }
        
    } while (guess!=num);       // Continue the loop until the user guesses the correct number
    cout<<"Game end";
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand ((unsigned int) time (NULL));
    int number =(rand() % 100) +1; // 0-99+1= 1-100
    int guess=0;
    cout<<"\t\t\tLets Play The Number Guessing Game\n\n";
    do
    {
     cout << "Guess no (1-100):";   
     cin >> guess;
     
     if (guess > number)
     cout <<"Guess lower!" << endl;
     else if (guess < number )
     cout << "Guess upper!" << endl;
     else
     cout << "Well Played YOU WON!, thanks for playing see you again" << endl;
    } while (guess != number);
    return 0;
}
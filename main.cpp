#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));
    string user_input;
    int number = rand()%100;
    while (true) {
        cout<<"Enter a number between 1 and 100 (q to quit): ";
        cin>>user_input;
        if (user_input == "q") {
            cout<<"You have chosen to quit"<<endl;
            cout<<"number was: ";
            cout<<number<<endl;
            break;
        }
        int user_number = stoi(user_input);
        if (user_number > number) {
            cout<<"Guess is higher than number."<<endl;
        }
        else if (user_number < number){
            cout<<"Guess is lower than number."<<endl;
        }
        else if (user_number == number){
            cout<<"You are correct number is: ";
            cout<<number<<endl;
            break;
        }
    }
    return 0;
}
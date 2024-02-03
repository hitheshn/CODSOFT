#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

static int trails = 0;

int randomNumberGenerator(){
    srand(time(NULL));
    return (rand() % 100) + 1;
}

int main(){
    int randNum,GuessNum=NULL;
    randNum = randomNumberGenerator();
    cout<<"Start playing the Number guessing game!!"<<endl;
    cout<<"Guess the secret Number(1 - 100) to complete the game"<<endl;
    cout<<endl;
    while(GuessNum != randNum){
        cout<<"Enter the guess Number:";
        cin>>GuessNum;
        trails += 1;
        if(randNum == GuessNum){
            cout<<"You correctly guessed the secret number "<<randNum<<endl;
            cout<<"You guessed the number in "<<trails<<" trails"<<endl;
        }
        else if(randNum < GuessNum){
            cout<<"Secret Number is lower than the guessed number"<<endl;
        }
        else if(randNum > GuessNum){
            cout<<"Secret Number is higher than the guessed number"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
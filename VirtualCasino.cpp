#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int money = 100;

void play(int bet){
    char c[] = {'J','Q','K'};
    srand(time(NULL));
    cout << "shuffling......" << endl;
    int x = rand() % 3;
    int y = rand() % 3;
    char temp = c[x];
    c[x] = c[y]; c[y] = temp;
    
    cout << "make your guess" << endl;
    int myguess;
    cin >> myguess;
    if(c[myguess-1] == 'K'){
        cout << "you won" << endl;
        money += bet;
    }
    else{
        cout << "you lost" << endl;
        money -= bet;
    }
}

int main(){
    cout << "*VIRTUAL CASINO*" << endl;
    int bet;
    while(money > 0){
        cout << "you have " << money <<" money, enter your bet:";
        cin >> bet;
        if (bet==0 || bet>money) break;
        play(bet);
        cout << "\n*******************************************************************\n" << endl;
    }

    return 0;
}
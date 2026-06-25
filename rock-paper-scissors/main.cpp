// rock, paper, scissors 
#include <iostream>
#include <ctime>
char getuserinput();
char getcompinput();
void showchoice(char choice);
void choosewinner(char user, char computer);
int main(){
    srand(time(0));
    char user;
    char computer;
    user = getuserinput();
    computer = getcompinput();
    std::cout << "You chose: ";
    showchoice(user);
    std::cout << "The computer chose: ";
    showchoice(computer);
    std::cout << "***** DRUM ROLL *****\n";
    choosewinner(user, computer);
    return 0;
}
char getuserinput(){
    char user;
    std::cout << "************* Rock, Paper, Scissors *************" << "\n";
    do{
        std::cout << "Enter r for rock, p for paper, and s for scissors: ";
        std::cin >> user;
    } while(user != 'r' && user != 'p' && user != 's');
    return user;
}
char getcompinput(){
    char computer;
    int num = rand() % 3 + 1;
    switch(num){
        case 1: computer = 'r'; break;
        case 2: computer = 'p'; break;
        case 3: computer = 's'; break;
    }
    return computer;
}
void showchoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n"; break;
        case 'p': std::cout << "Paper\n"; break;
        case 's': std::cout << "Scissors\n"; break;
    }
}
void choosewinner(char user, char computer){
    if (user == computer){
        std::cout << "It's a tie!\n";
    }
    else if ((user == 'r' && computer == 's') ||
             (user == 's' && computer == 'p') ||
             (user == 'p' && computer == 'r')){
                std::cout << "You win!\n" ;
             }
    else{
        std::cout << "You lose!\n";
    }
}
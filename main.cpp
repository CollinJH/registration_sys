#include <iostream>
#include <fstream>
#include <string>

using namespace std;



class Menu
{
public:
    Menu();
    void setMenuChoice();
    int getMenuChoice() const;

    
private:
    int loopNum;
};

Menu::Menu()
{
    loopNum = 0;
}

void Menu::setMenuChoice()
{
    char menuChoice;
    while (loopNum == 0)
    {
    cout << "login or sign up? (L or S): ";
    cin >> menuChoice;
    {
    if (menuChoice == 'L')
    {
        loopNum = 1;
    } 
    else if (menuChoice == 'S')
    {
        loopNum = 2;
    } else 
        cout << "error try again: \n";
    }
    }
}

int Menu::getMenuChoice() const
{
    return loopNum;
}


string login();
string signup();


int main()
{
    Menu menu;
    int choice;
    menu.setMenuChoice();
    choice = menu.getMenuChoice();

    if (choice == 1)
    {
        cout << "you logged in\n";
    } else if (choice == 2)
    {
        cout << "you are signing u\n";
    }

    


    return 0;

}


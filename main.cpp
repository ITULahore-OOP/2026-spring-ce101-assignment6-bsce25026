#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
int main()
{
    cout<<"WELCOME TO YOUR GUILD";
    string guildName;
    cout << "Enter Guild Name: ";
    cin >> guildName;
    Guild g(guildName);

    int choice;

    while(true){
        cout << "Select the option you wish to run";
        cout << "1. Add Hero\n";
        cout << "2. Add Warrior\n";
        cout << "3. Add Knight\n";
        cout << "4. Show Guild Members\n";
        cout << "5. Show Guild Stats\n";
        cout << "0. Exit"<<endl;
        cout << "Choice: ";
        cin >> choice;

        if(choice == 0){
            cout << "EXITING PROGRAM!"<<endl;
            break;
        }

        if(choice == 1){
            string name;
            int health, power;

            cout << "Hero Name: "<<endl;
            cin >> name;
            cout << "Health: \n";
            cin >> health;
            cout << "Power: \n";
            cin >> power;

            Hero *h = new Hero(name, health, power);
            g += h;
        }

        else if(choice == 2){
            string name;
            int health, power, armor;

            cout << "Warrior Name: \n";
            cin >> name;
            cout << "Health: \n";
            cin >> health;
            cout << "Power: \n";
            cin >> power;
            cout << "Armor Rating: \n";
            cin >> armor;

            Warrior *w = new Warrior(name, health, power, armor);
            g += w;

            cout << "Effective Health: \n" << w->calculateEffectiveHealth() << endl;
        }

        else if(choice == 3){
            string name;
            int health, power, armor, charge;

            cout << "Knight Name: \n";
            cin >> name;
            cout << "Health: \n";
            cin >> health;
            cout << "Power: \n";
            cin >> power;
            cout << "Armor Rating: \n";
            cin >> armor;
            cout << "Charge Bonus: \n";
            cin >> charge;

            Knight *k = new Knight(name, health, power, armor, charge);
            g += k;

            cout << "Burst Damage: \n" << k->calculateBurstDamage() << endl;
        }

        else if(choice == 4){
            cout << g;
        }

        else if(choice == 5){
            g.displayGuildStats();
        }

        else{
            cout << "Invalid option.\n";
        }
    }
    return 0;
}
//
//  main.cpp
//  Hw3num7
//
//  Created by Brian Morales on 1/23/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <iostream>
#include <string>
#include "CustomerData.h"
using namespace std;

int main()
{
    string name;
    char answ;
    bool choice;
    
    CustomerData customer1;
    
    cout << "Good Evening, would you like to be in our mailing list? y/n ";
    cin >> answ;
    
    while (tolower(answ) != 'y' && tolower(answ) != 'n')
    {
        cout << "Please enter a proper character (y/n): ";
        cin >> answ;
    }
    
    if(tolower(answ) == 'y')
    {
        customer1.setMailing(choice);
        
        cout << "Please enter your first name: ";
        cin >> name;
        customer1.setFrst(name);
        cin.ignore();
        
        cout << "Please enter your last name: ";
        cin >> name;
        customer1.setLst(name);
        cin.ignore();
        
        cout << "Pleaes enter your address: ";
        getline(cin, name);
        customer1.setAdd(name);
        
        cout << "Pleae enter your city: ";
        cin >> name;
        customer1.setCty(name);
        
        cout << "Please enter your state: ";
        cin >> name;
        customer1.setStte(name);
        
        cout << "Please enter your zip code: ";
        cin >> name;
        customer1.setZp(name);
        
        cout << "Please enter your phone number(#######): ";
        getline(cin, name);
        customer1.setPhne(name);
        
        customer1.printinfo();
    }
    
    else
        cout << "Have a good day. =)\n";


        
}

//
//  FirstController.cpp
//  FirstAfternoonCPlusPlus
//
//  Created by Paladugu, Sai neeraj on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;


void FirstController :: start()
{
    cout << "words here please :D" << endl;
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "Hi how old are you?" << endl;
    int age;
    cin >> age;
    cout << "You typed in " << age << endl;
    cout << "Type in your name ;D" << endl;
    string name;
    cin >> name;
    cout << "Your name is " << name << " wow cool - :P" << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << " You typed" << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl ;
}

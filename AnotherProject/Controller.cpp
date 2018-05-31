//
//  Controller.cpp
//  AnotherProject
//
//  Created by Amaya Penunuri, Yael on 1/29/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    int counting[5];
    for (int i = 1; i < 6; i++)
    {
        counting [i] = i;
        cout << "count is " << counting [i] << endl;
    }

    cout << "Random person starts saying 'Hi'" << endl;
    double AmountOfHi[100];
    for (int i = 1; i < 100; i += 1)
    {
        AmountOfHi [i] = i * 1.156;
        cout << "Random Person has said 'Hi' " << AmountOfHi [i] << " times" << endl;
    }
    
    string amountOfStupid[3];
    amountOfStupid[1] = "Lvl_1";
    amountOfStupid[2] = "Lvl_2";
    amountOfStupid[3] = "Lvl_3";
    for(int i = 1; i < 4; i++)
    {
        cout << amountOfStupid[i] << endl;
    }
}


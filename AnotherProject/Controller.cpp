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
    vector<int> counting(5);
    for (int i = 1; i < 6; i++)
    {
        counting [i] = i;
        cout << "count is " << counting [i] << endl;
    }
    
    cout << "Calvin starts to pee" << endl;
    vector<double> litersOfPiss(100.00);
    for (double i = 1; i < 100.00; i += 0.01)
    {
        litersOfPiss [i] = i;
        cout << "Calvin has let out " << litersOfPiss [i] << " liters of piss" << endl;
    }
    
    vector<string> amountOfStupid(3);
    amountOfStupid[1] = "Lvl_1";
    amountOfStupid[2] = "Lvl_2";
    amountOfStupid[3] = "Lvl_3";
    for(int i = 1; i < 4; i++)
    {
        cout << amountOfStupid[i] << endl;
    }
}


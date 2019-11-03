//
//  main.cpp
//  SimpleReflex
//
//  Created by MD Tanvir Anjum on 3/11/19.
//  Copyright © 2019 Smart Lab. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

string Reflex_Vaccuum_Agent(char location, string status)
{
    if(status == "Dirty")
    {
        return "Suck\n";
    }
    else if(location == 'A')
    {
        return "Right\n";
    }
    else if(location == 'B')
    {
        return "Left\n";
    }
    else
        return "Wrong\n";
}

int main(int argc, const char * argv[]) {

    string status;
    char Location;
    
    cin >> Location >> status ;
    
    cout << Reflex_Vaccuum_Agent(Location, status);
    
    return 0;
}

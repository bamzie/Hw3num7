//
//  CustomerData.hpp
//  Hw3num7
//
//  Created by Brian Morales on 1/23/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef CustomerData_hpp
#define CustomerData_hpp
#include "PersonData.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class CustomerData : public PersonData
{
protected:
    int customerNumber;
    int num;
    bool mailingList;
    PersonData customer;
public:
    CustomerData()
    {
        customerNumber = 0;
        mailingList = true;
        num++;
    };
    
    //Mutators
    
    void setCustomern()
    {   customerNumber = num;       }
    
    void setMailing( bool answ)
    {
        if (answ == true)
            mailingList = answ;
        else
            mailingList = false;
    }
    
    void setLst(string last)
    {   customer.setLname(last);    }
    
    void setFrst(string first)
    {   customer.setFname(first);   }
    
    void setAdd(string addy)
    {   customer.setAddy(addy);     }
    
    void setCty(string city)
    {   customer.setCity(city);     }
    
    void setStte(string state)
    {   customer.setState(state);   }
    
    void setZp(string zip)
    {   customer.setZip(zip);       }
    
    void setPhne(string number)
    {   customer.setPhone(number);  }
    
    void printinfo()
    {
        cout << "Customer " << getCN() << " name: " << customer.getFname() << " " << customer.getLname() << endl;
        cout << "Address: " << customer.getAddy() << " " << customer.getCity() << " " << customer.getState() << " " << customer.getZip() << endl;
        cout << "Phone number: " << customer.getPhone() << endl;
    }
    
    
    
    //Accessors
    bool getMailing() const
    {   return mailingList; }
    int getCN() const
    {   return customerNumber + 1;  }
    
    
    
    
};

#endif /* CustomerData_hpp */

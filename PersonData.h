//
//  Peter Chudinov (pj6593), Brian Moralez (kp5575)
//  homework 3: 7
//

#ifndef PersonData_hpp
#define PersonData_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class PersonData
{
protected:
    string lastname;
    string firstname;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    PersonData()
    {
        lastname = "";
        firstname = "";
        address = "";
        city = "";
        state = "";
        zip = "";
        phone = "";
    }
    //overload constructor
    PersonData(string l, string f, string addy, string cty, string stte, string zp, string num)
    {
        lastname = l;
        firstname = f;
        address = addy;
        city = cty;
        state = stte;
        zip = zp;
        phone = num;
    }
    
    //Mutators
    void setLname(string last)
    {   lastname = last;    }
    void setFname(string first)
    {   firstname = first;  }
    void setAddy(string addy)
    {   address = addy;     }
    void setCity(string cty)
    {   city = cty;         }
    void setState(string stte)
    {   state = stte;       }
    void setZip(string zp)
    {   zip = zp;           }
    void setPhone(string num)
    {   phone = num;        }
    
    //Accessors
    string getLname() const
    {   return lastname;    }
    string getFname() const
    {   return firstname;   }
    string getAddy() const
    {   return address;     }
    string getCity() const
    {   return city;        }
    string getState() const
    {   return state;       }
    string getZip() const
    {   return zip;         }
    string getPhone() const
    {   return phone;       }
    

};
#endif /* PersonData_hpp */

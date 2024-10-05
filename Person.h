#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
        
  protected:
  
  string name;
  string surname;
  int phone_number;
  string mail;
  int emergency_phone_number;
  string emergency_mail;
  
  
  
  
  public:
        
        
  Person();
  Person(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail);
        
  void set_name(string name);
  string get_name() const;
  
  
  void set_surname(string surname);
  string get_surname() const;
  
  void set_phone_number(int phone_number);
  int get_phone_number() const;
   
  void set_mail(string mail);
  string get_mail() const;
  
  
  void set_emergency_phone_number(int emergency_phone_number);
  int get_emergency_phone_number() const;
  
  void set_emergency_mail(string emergency_mail);
  string get_emergency_mail() const;
        
  friend bool operator < (Person P1,Person P2);        
        
};



  





#endif 
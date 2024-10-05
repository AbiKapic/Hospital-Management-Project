#include "Person.h"

    Person::Person() {

        mail = "";
        emergency_phone_number = 0;
        emergency_mail = "";
        phone_number = 0;
        name = "";
        surname = "";
        
        
        
          
  }
  
  Person::Person(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail) {
       
       this->mail = mail;
       this->emergency_phone_number = emergency_phone_number;
       this->emergency_mail = emergency_mail;
       this->phone_number = phone_number;
       this->name = name;
       this->surname = surname;
       
      
       
       
       
          
  }
        
  void Person::set_name(string name) {
          
                this->name = name;
 
          
  }
  string Person::get_name() const {
          return name;
  }
  
  
  void Person::set_surname(string surname) {
                 this->surname = surname;

  }
  string Person::get_surname() const {
          return surname;
  }
  
  void Person::set_phone_number(int phone_number) {
           this->phone_number = phone_number;
  }
  int Person::get_phone_number() const {
          return phone_number;
  }
   
  void Person::set_mail(string mail) {
          this->mail = mail;
  }
  string Person::get_mail() const {
          return mail;
  }
  
  
  void Person::set_emergency_phone_number(int emergency_phone_number) {
          this->emergency_phone_number = emergency_phone_number;
  }
  int Person::get_emergency_phone_number() const {
          return emergency_phone_number;
  }
  
  void Person::set_emergency_mail(string emergency_mail) {
          this->emergency_mail = emergency_mail;
  }
  string Person::get_emergency_mail() const {
          return emergency_mail;
  }
        

   
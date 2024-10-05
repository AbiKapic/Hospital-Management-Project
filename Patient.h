#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Visitor.h"



class Patient : public Person {
        
      
      private:
      int patient_id;
      string medical_history;
      string location;
      string patients_condition;
      Visitor patients_visitor;
      
      
      
      public:
      
      Patient();
      Patient(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail);
      
      void set_medical_history(string medical_history);
      string get_medical_history() const;
      
      
      void set_location(string location);
      string get_location() const;
      
      void set_patients_condition(string patients_condition);
      string get_patients_condition() const;
      
      void set_visitor(Visitor patients_visitor);
      Visitor get_visitor() const;
      
      void set_patient_id(int id);
      int get_patient_id() const;
        
     friend bool operator < (Patient P1,Patient P2);   
     friend bool operator > (Patient P1,Patient P2);        
        
        
};


       



#endif
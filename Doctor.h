#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include "Patient.h"


class Doctor : public Person {
        
      
      private:
      
       int doctor_id;
       bool has_a_patient;
      
      
      public:
      
       Doctor();
       Doctor(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail);
        
       void set_doctor_id(int id);
       int get_doctor_id() const;
        
       void set_patient(bool has_a_patient);
       bool get_patient() const;
       
       
      friend bool operator < (Doctor D1,Doctor D2);    
       
       
        
        
        
        
};

       
        


#endif
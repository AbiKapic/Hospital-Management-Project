#include "Patient.h" 
 
      Patient::Patient() : Person() {}
      
      Patient::Patient(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail) : Person(name,surname,phone_number,mail,emergency_phone_number,emergency_mail){}
      
      void Patient::set_medical_history(string medical_history) {
              this->medical_history = medical_history;
      }
      string Patient::get_medical_history() const {
              return medical_history;
      }
      
      
      void Patient::set_location(string location) {
              this->location = location;
      }
      string Patient::get_location() const {
              return location;
      }
      
      void Patient::set_patients_condition(string patients_condition) {
              this->patients_condition = patients_condition;
      }
      string Patient::get_patients_condition() const {
              return patients_condition;
      }
      
      void Patient::set_visitor(Visitor patients_visitor) {
              this->patients_visitor = patients_visitor;
      }
      Visitor Patient::get_visitor() const {
              return patients_visitor;
      }
      
      
      void Patient::set_patient_id(int id) {
              this->patient_id = id;
      }
      int Patient::get_patient_id() const {
              return patient_id;
      }
        
       bool operator < (Patient P1,Patient P2) {
               
               if(P1.get_patient_id() < P2.get_patient_id()) {
                       
                       return true;
               }
             
                       return false;
               
               
       }   
       
       
          bool operator > (Patient P1,Patient P2) {
                  
                  if(P1.get_location() > P2.get_location()) {
                          return true;
                  }
                  
                 
                          return false;
                  
                  
                  
          }        

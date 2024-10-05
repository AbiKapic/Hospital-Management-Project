#include "Doctor.h"  
  
  
       Doctor::Doctor() : Person() {
       
               has_a_patient = false;
       
        }
       Doctor::Doctor(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail): Person(name,surname,phone_number,mail,emergency_phone_number,emergency_mail)  {
             
             has_a_patient = false;
             
       }
        
        
       void Doctor::set_doctor_id(int id) {
            
               this->doctor_id = id;
        
           
       }
       int Doctor::get_doctor_id() const {
           
                return doctor_id;
        
           
       }
        
        void Doctor::set_patient(bool has_a_patient) {
            
                this->has_a_patient = has_a_patient;
        
            
        }
        
        bool Doctor::get_patient() const {
            
                return has_a_patient;
        
            
        }
       
       
        bool operator < (Doctor D1,Doctor D2) {
                    
                if(D1.get_doctor_id() < D2.get_doctor_id())  return true;
                    
                return false;
                    
        }   

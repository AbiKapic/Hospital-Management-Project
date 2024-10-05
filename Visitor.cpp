#include "Visitor.h"

      Visitor::Visitor() : Person() {}
      
      Visitor::Visitor(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail): Person(name,surname,phone_number,mail,emergency_phone_number,emergency_mail) {
      }
        
        void Visitor::set_id(int id) {
                this->visitor_id = id;
        }
        
        int Visitor::get_id() const {
                return visitor_id;
        }
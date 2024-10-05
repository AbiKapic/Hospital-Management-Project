#ifndef VISITOR_H
#define VISITOR_H

#include "Person.h"


class Visitor : public Person {
        
      
      private:
      
      int visitor_id;
      
      
      
      
      
      public:
        
        Visitor();
        
        Visitor(string name,string surname, int phone_number, string mail, int emergency_phone_number,string emergency_mail);           
          
        
        void set_id(int id);
        int get_id() const;
        
        
        
        
};

  

#endif
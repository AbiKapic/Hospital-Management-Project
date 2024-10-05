#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
using namespace std;

class Inventory {
        
  private: 
  
  string name_of_product;
  string type_of_product;
  int number_of_items;
  
 
  
  
  
  public:
  
  Inventory();
  Inventory(int quantity,string name, string type);
  
  
  void set_number_of_items(int no_items);
  int get_number_of_items() const;
  
  void set_name_of_product(string name);
  string get_name_of_product() const;
  
  void set_type_of_product(string type);
  string get_type_of_product() const;
        
        
        
        
        
        
        
};


 





#endif
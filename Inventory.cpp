 #include "Inventory.h"
 
 

  Inventory::Inventory() {
     
      number_of_items = 0;
      name_of_product = "";
      type_of_product = "";
 
  }
  
  Inventory::Inventory(int quantity,string name, string type) {
     
      this->number_of_items = quantity;
      this->name_of_product = name;
      this->type_of_product = type;
  
      
  }
  
  
  void Inventory::set_number_of_items(int no_items) {
      
        this->number_of_items = no_items;
  
      
  }
  
  int Inventory::get_number_of_items() const {
    
      return number_of_items;
  
      
  }
  
  void Inventory::set_name_of_product(string name) {
      
      name_of_product = name;
  }
  
  string Inventory::get_name_of_product() const {
    
      return name_of_product;
 
  }
  
  void Inventory::set_type_of_product(string type) {
    
      type_of_product = type;
  
      
  }
 
  string Inventory::get_type_of_product() const {
     
      return type_of_product;
  
      
  }
        







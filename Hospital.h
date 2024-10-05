#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include "Visitor.h"
#include "Inventory.h"
#include "Person.h"

using namespace std;

class Hospital {
  
  private: 
  
  vector<Patient> Patients;
  vector<Doctor> Doctors;
  vector<Visitor> Visitors;
  vector<Inventory> Inv;
  
  string hospital_name;
  
  
  
  
  
  public:
       
      Hospital();
      Hospital(string name_of_hospital);
       
      void set_name_hospital(string name);
       
      string get_name_hospital() const;
       
      vector<Patient> get_patients();
       
      void insert_patients(Patient P);
      void insert_doctors(Doctor D);
      void insert_visitors(Visitor V);
      void insert_supply(Inventory S);   
        
      void display_patients();
      void display_inventory();
      void display_doctors();
  
      void patients_delete(int ind);
      void inventory_delete(int ind);
      void doctor_delete(int ind);
  
      
      void patients_edit(int ind);
      void doctors_edit(int ind);
      void inventory_edit(int ind);
      
      
      void sort_patients_by_location();
      void sort_patients_by_id();
      void sort_doctor_by_id();
      
      
};

     
 
  
  
  
     
  
        
        
        

#endif
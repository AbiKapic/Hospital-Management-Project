#include "Hospital.h"

      Hospital::Hospital() {
          this->hospital_name = "";
      }
      Hospital::Hospital(string name_of_hospital) {
            this->hospital_name = name_of_hospital;
      }
       
      void Hospital::set_name_hospital(string name) {
          this->hospital_name = name;
      }
       
      string Hospital::get_name_hospital() const {
          return hospital_name;
      }
       
      vector<Patient> Hospital::get_patients() {
            return Patients;
      }
       
      void Hospital::insert_patients(Patient P) {
           Patients.push_back(P);
      }
      void Hospital::insert_doctors(Doctor D) {
          Doctors.push_back(D);
      }
      void Hospital::insert_visitors(Visitor V) {
          Visitors.push_back(V);
      }
      void Hospital::insert_supply(Inventory I) {
           Inv.push_back(I);
      }  
        
      void Hospital::display_patients() {
            for(int i=0;i<Patients.size();i++) {
                  cout<<"PATIENT no.  "<<i+1<<endl;
                  cout<<Patients[i].get_name()<<" "<<Patients[i].get_surname()<<" has an id of: "<<Patients[i].get_patient_id()<<endl;
                  cout<<"Phone number: "<<Patients[i].get_phone_number()<<endl;
                  cout<<"Condition: "<<Patients[i].get_patients_condition()<<endl;
                  cout<<"Email: "<<Patients[i].get_mail()<<endl;
                  cout<<"Medical report: "<<Patients[i].get_medical_history()<<endl;
                  cout<<"Emergency phone email: "<<Patients[i].get_emergency_phone_number()
                  <<" "<<Patients[i].get_emergency_mail()<<endl;
                  cout<<"Location: "<<Patients[i].get_location()<<endl<<endl<<endl;
                 
                  
          }
      }
      void Hospital::display_inventory() {
          
              for(int i=0;i<Inv.size();i++) {
                  cout<<"Inventory no. "<<i+1<<endl;
                  cout<<Inv[i].get_type_of_product()<<" "<<Inv[i].get_name_of_product()<<" has a quantity of: "<<Inv[i].get_number_of_items()<<endl;
                  
                 
                  
          }
      }
      void Hospital::display_doctors() {
           for(int i=0;i<Doctors.size();i++) {
                  cout<<"Doctor no. "<<i+1<<endl;
                  cout<<Doctors[i].get_name()<<" "<<Doctors[i].get_surname()<<" has an id of: "<<Doctors[i].get_doctor_id()<<endl;
                  cout<<"Phone number: "<<Doctors[i].get_phone_number()<<endl;
                  cout<<"Email: "<<Doctors[i].get_mail()<<endl;
                  cout<<"Emergency phone and email: "<<Doctors[i].get_emergency_phone_number()
                  <<" "<<Doctors[i].get_emergency_mail()<<endl;
                 
                  
          }
  }
      
  
      void Hospital::patients_delete(int ind) {
                            Patients.erase(Patients.begin() + ind-1);

      }
      void Hospital::inventory_delete(int ind) {
                             Inv.erase(Inv.begin()+ind-1);

      }
      void Hospital::doctor_delete(int ind) {
                            Doctors.erase(Doctors.begin() + ind - 1);
      }
      
  
      
      void Hospital::patients_edit(int ind) {
              for(int i=0;i<Patients.size();i++) {
                 
                 
                 if(ind-1 == i) {
                  cout<<"Patient no. "<<i+1<<endl;
                     string name,surname,email,em_email,medical_history,location,cond;
                                  int id,phone_number,em_contact;
                                                       cin.ignore(1000,'\n');

                                  cout<<"Edit name: ";
                                  getline(cin,name);
                                  cout<<"Edit surname: ";
                                  getline(cin,surname);
                                  cout<<"Edit id: ";
                                  cin>>id;
                                  cout<<"Edit phone number: ";
                                  cin>>phone_number;
                                  cout<<"Edit email: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,email);
                                  cout<<"Edit emergency phone number contact: ";
                                  cin>>em_contact;
                                  cout<<"Edit emergency mail contact: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,em_email);
                                  
                                  cout<<"Edit medical history: ";
                                  getline(cin,medical_history);
                                  
                                  cout<<"Edit location(floor,bed,wing,room): ";
                                  getline(cin,location);
                                  
                                  cout<<"Edit condition: ";
                                  getline(cin,cond);
                                  
                                  Patients[i].set_name(name);
                                  Patients[i].set_surname(surname);
                                  Patients[i].set_patient_id(id);
                                  Patients[i].set_phone_number(phone_number);
                                  Patients[i].set_mail(email);
                                  Patients[i].set_emergency_phone_number(em_contact);
                                  Patients[i].set_emergency_mail(em_email);
                                 
                                  Patients[i].set_medical_history(medical_history);
                                  Patients[i].set_location(location);
                                  Patients[i].set_patients_condition(cond);
                                  
                                  
                 }
                  
          }
      }
      void Hospital::doctors_edit(int ind) {
         
          for(int i=0;i<Doctors.size();i++) {
                 
                 
                 if(ind-1 == i) {
                  cout<<"Doctor no. "<<i+1<<endl;
                     string name,surname,email,em_email;
                     cin.ignore(1000,'\n');
                                  int id,phone_number,em_contact;
                                  cout<<"Edit name: ";
                                  getline(cin,name);
                                  cout<<"Edit surname: ";
                                  getline(cin,surname);
                                  cout<<"Edit id: ";
                                  cin>>id;
                                  cout<<"Edit employee phone number: ";
                                  cin>>phone_number;
                                  cout<<"Edit employe mail: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,email);
                                  cout<<"Edit employee emergency phone number contact: ";
                                  cin>>em_contact;
                                  cout<<"Edit employee emergency mail contact: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,em_email);
                                  
                               
                                  
                                  Doctors[i].set_name(name);
                                  Doctors[i].set_surname(surname);
                                  Doctors[i].set_doctor_id(id);
                                  Doctors[i].set_phone_number(phone_number);
                                  Doctors[i].set_mail(email);
                                  Doctors[i].set_emergency_phone_number(em_contact);
                                  Doctors[i].set_emergency_mail(em_email);
                                  Doctors[i].set_patient(true);
                                  
                                  
                                  
                 }
                  
          }
      }
      void Hospital::inventory_edit(int ind) {
                  
            for(int i=0;i<Inv.size();i++) {
                 
                 
                 if(ind-1 == i) {
                  cout<<"Item no. "<<i+1<<endl;
                     string name,type;
                     int q;
                                          cin.ignore(1000,'\n');

                                  
                                  cout<<"Edit name: ";
                                  getline(cin,name);
                                  cout<<"Edit supply type: ";
                                  getline(cin,type);
                                  cout<<"Edit supply quantity: ";
                                  cin>>q;
                                 
                                  
                               
                                  
                                  Inv[i].set_name_of_product(name);
                                   Inv[i].set_type_of_product(type);
                                  Inv[i].set_number_of_items(q);
                              
                                  
                                  
                                  
                 }
                  
          }
      }
      
      
      void Hospital::sort_patients_by_location() {
          
             for(int i=0;i<Patients.size();i++) {
                   
                   for(int j=i;j<Patients.size();j++) {
                           
                           
                           if(Patients[i] > Patients[j]) {
                                   
                                   Patient P2 = Patients[i];
                                   Patients[i] = Patients[j];
                                   Patients[j] = P2;
                                   
                           }
                           
                           
                   }
                   
           }
      }
      void Hospital::sort_patients_by_id() {
          
            for(int i=0;i<Patients.size();i++) {
                   
                   for(int j=i;j<Patients.size();j++) {
                           
                           
                           if(Patients[i] < Patients[j]) {
                                   
                                   Patient P2 = Patients[i];
                                   Patients[i] = Patients[j];
                                   Patients[j] = P2;
                                   
                           }
                           
                           
                   }
                   
           }
      }
      void Hospital::sort_doctor_by_id() {
          
           for(int i=0;i<Doctors.size();i++) {
                   
                   for(int j=i;j<Doctors.size();j++) {
                           
                           
                           if(Doctors[i] < Doctors[j]) {
                                   
                                   Doctor D2 = Doctors[i];
                                   Doctors[i] = Doctors[j];
                                   Doctors[j] = D2;
                                   
                           }
                           
                           
                   }
                   
           }
          
      }
#include "Person.h"
#include "Patient.h"
#include "Doctor.h"
#include "Hospital.h"
#include "Visitor.h"
#include "Inventory.h"
#include <fstream>

void load(Hospital H[],int index);
void save(Hospital H[],int index);
void display_hospitals(Hospital H[]);
void erase_person(Hospital H[],int index);
void edit_person(Hospital H[],int index);





void Menu();

int main()
{
        
    int choice;
    
    Hospital H[5]; // Five different hospital at country
    
    H[0].set_name_hospital("Kosevo Hospital");
    H[1].set_name_hospital("Travnik Medical Center");
    H[2].set_name_hospital("Sarajevo Clinic");
    H[3].set_name_hospital("KCUS");
    H[4].set_name_hospital("Hospital from South");
    
    
    
    
    
    
    do {
        Menu();
        cout<<"Your choice: ";
        cin>>choice;
        
        
        switch(choice) {
                
                
                case 1: {
                        
                        cout<<"In which hospital you want to add a patients from the file:\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                      
                      bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                      
                                    
                                 save(H,i);
                                 check = true;
                                cout<<"Saving finished. Now exiting...\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                      
                         
                        
                        
                        break;
                }
                
                
                case 2: {
                      cout<<"In which hospital you want to add a patients from the file:\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                        bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                      
                                    
                                 load(H,i);
                                 check = true;
                                cout<<"Loading finished. Now exiting...\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                      
                        
                        
                        break;
                }
                
                case 3: {
                    cout<<"In which hospital you want to delete (patients,employee or supplies) from the file:\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                        bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                      
                                    
                                 erase_person(H,i);
                                 check = true;
                                cout<<"Deleting finished. Now exiting...\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                           
                       
                        
                        
                        
                        
                        break;
                }
                
                
                case 4: {
                        
                          cout<<"In which hospital you want to edit (patients,employee or supplies) from the file:\n";
                       display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                        bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                      
                                    
                                 edit_person(H,i);
                                 check = true;
                                cout<<"Editing finished. Now exiting...\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                           
                       
                        
                        
                        
                        
                        break;
                }
                
                
                case 5: {
                       cout<<"From which hospital you want to display patients? :\n";
                       display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                        bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  cout<<"List of patients in this hospital: \n\n\n";
                                  
                                  H[i].display_patients();
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                      
                          
                        break;
                        
                }
                case 6: {
                     cout<<"From which hospital you want to display employees? :\n";
                     display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  cout<<"List of employees in this hospital: \n\n\n";
                                  
                                  H[i].display_doctors();
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                      
                          
                        
                        
                        break;
                }
                
                
                case 7: {
                        cout<<"From which hospital you want to display supplies? :\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  cout<<"List of patients in this hospital: \n\n\n";
                                  
                                  H[i].display_inventory();
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                      
                          
                        
                        
                        
                        
                        break;
                }
                
                
                
                case 8: {
                      cout<<"To which hospital you want to add a patient? :\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       cin.ignore(1000,'\n');
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  string s1,s2,s3,s4,s5,s6,s7;
                                  int id,phone_number,em_contact;
                                  cout<<"Input name: ";
                                  getline(cin,s1);
                                  cout<<"Input surname: ";
                                  getline(cin,s2);
                                  cout<<"Input id: ";
                                  cin>>id;
                                  cout<<"Input phone number: ";
                                  cin>>phone_number;
                                  cout<<"Input mail: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s3);
                                  cout<<"Input emergency phone number contact: ";
                                  cin>>em_contact;
                                  cout<<"Input emergency mail contact: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s4);
                                  
                                  cout<<"Input medical history: ";
                                  getline(cin,s5);
                                  
                                  cout<<"Input  location(floor,bed,wing,room): ";
                                  getline(cin,s6);
                                  
                                  cout<<"Input condition: ";
                                  getline(cin,s7);
                                  
                                  Patient P2(s1,s2,phone_number,s3,em_contact,s4);
                                  P2.set_patient_id(id);
                                  P2.set_medical_history(s5);
                                  P2.set_location(s6);
                                  P2.set_patients_condition(s7);
                                  
                                  H[i].insert_patients(P2);
                                  
                                  cout<<"Patient has been added to the hospital, going back to menu."<<endl<<endl;
                                  
                                  
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                        
                        
                             
                        
                        
                        
                        break;
                }
                
                
                case 9: {
                       cout<<"To which hospital you want to add an employee? :\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                                              cin.ignore(1000,'\n');
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  string s1,s2,s3,s4,s5,s6,s7;
                                  int id,phone_number,em_contact;
                                  cout<<"Input  name: ";
                                  getline(cin,s1);
                                  cout<<"Input  surname: ";
                                  getline(cin,s2);
                                  cout<<"Input  id: ";
                                  cin>>id;
                                  cout<<"Input  phone number: ";
                                  cin>>phone_number;
                                  cout<<"Input  mail: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s3);
                                  cout<<"Input  emergency phone number contact: ";
                                  cin>>em_contact;
                                  cout<<"Input  emergency mail contact: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s4);
                                  
                                 
                                  
                                  Doctor D2(s1,s2,phone_number,s3,em_contact,s4);
                                  cout<<"Does this employee have a patient?(Y/N): ";
                                  char o;
                                  cin>>o;
                                  if(o == 'Y') {
                                       D2.set_patient(true);   
                                  }
                                 else {
                                         D2.set_patient(false);
                                 }
                                  
                                  
                                 
                                 
                                  
                                  H[i].insert_doctors(D2);
                                  
                                  cout<<"Doctor has been added to the hospital, going back to menu."<<endl<<endl;
                                  
                                  
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                        
                        
                        break;
                }
                
                
                case 10: {
                         cout<<"To which hospital you want to add supply? :\n";
                     display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       cin.ignore(1000,'\n');
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  string s1,s2;
                                  int q;
                                  cout<<"Enter the name of the supply: ";
                                  getline(cin,s1);
                                  
                                  cout<<"Enter the type of the supply: ";
                                  getline(cin,s2);
                                  
                                  cout<<"Enter quantity: ";
                                  cin>>q;
                                  Inventory P2(q,s1,s2);
                                  H[i].insert_supply(P2);
                                  
                                  cout<<"Supply has been added to the hospital, going back to menu."<<endl<<endl;
                                  
                                  
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                         
                        
                        
                        break;
                }
                
                
                case 11: {
                   cout<<"To which hospital you want to add an visitor? :\n";
                    display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       cin.ignore(1000,'\n');
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                  string s1,s2,s3,s4,s5,s6,s7;
                                  int id,phone_number,em_contact;
                                  cout<<"Input visitors name: ";
                                  getline(cin,s1);
                                  cout<<"Input visitors surname: ";
                                  getline(cin,s2);
                                  cout<<"Input visitors id: ";
                                  cin>>id;
                                  cout<<"Input visitors phone number: ";
                                  cin>>phone_number;
                                  cout<<"Input visitors mail: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s3);
                                  cout<<"Input visitors emergency phone number contact: ";
                                  cin>>em_contact;
                                  cout<<"Input visitors emergency mail contact: ";
                                  cin.ignore(1000,'\n');
                                  getline(cin,s4);
                                  
                                 
                                  
                                  Visitor P2(s1,s2,phone_number,s3,em_contact,s4);
                                 
                                  
                                  
                                  P2.set_id(id);
                                 
                                  
                                  H[i].insert_visitors(P2);
                                  
                                  cout<<"Visitor has been added to the hospital, going back to menu."<<endl<<endl;
                                  
                                  
                                    
                                 
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                             
                        
                        
                }
                
                
                
                case 12: {
                        cout<<"In which hospital you want to sort patients by ID? :\n";
                     display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                
                                  H[i].sort_patients_by_id();  
                                 cout<<"Sorting patients by id is done..."<<endl;
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                               
                        
                        
                        break;
                }
                
                
                case 13 : {
                      
                          cout<<"In which hospital you want to sort patients by ID? :\n";
                      display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                
                                  H[i].sort_doctor_by_id();  
                                 cout<<"Sorting employees by id is done..."<<endl;
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                              
                        
                        
                        break;
                        
                }
                
                
                case 14: {
                      
                             cout<<"In which hospital you want to sort patients by ID? :\n";
                     display_hospitals(H);
                       int hospital_number;
                       cin>>hospital_number;
                       bool check = false;
                      for(int i=0;i<5;i++) {
                              
                              if(i == hospital_number) {
                                  
                                
                                  H[i].sort_patients_by_location();  
                                 cout<<"Sorting patients by location is done..."<<endl;
                                 check = true;
                                cout<<"\n";
                                     break; 
                              }
                              
                      }
                      if(check == false) {
                      cout<<"That hospital doesn't exit try again!"<<endl;
                      }
                         
                              
                      
                        
                        
                        break;
                }
                case 15: {
                        
                        
                        
                        
                        
                        cout<<"Your program is finished\n";
                        cout<<"Thank you for using program, see you next time!\n";
                        break;
                }
                
                
                default : {
                        
                        cout<<"Wrong option, try again!\n";
                        break;
                }
                
        }

        

    }while(choice != 15);
    
    
    return 0;
}


void Menu() {
        
        cout<<"---------------------------------------------------\n\n\n";
        cout<<"EDITING"<<endl;
        cout<<"---------------------------------------------------\n\n\n";

        cout<<"[1] Save patients information to the file\n";
        cout<<"[2] Load patients information from the file\n";
        cout<<"[3] Delete information (patients,employee or medical inventory)\n";
        cout<<"[4] Edit patients or doctors's information to the file\n";
        
        cout<<"---------------------------------------------------\n\n\n";

        cout<<"DISPLAYING"<<endl;
        cout<<"---------------------------------------------------\n\n\n";


        cout<<"---------------------------------------------------\n\n\n";

        cout<<"[5] Display patient information \n";
        cout<<"[6] Display employee information \n";
        cout<<"[7] Display medical inventory\n";


        cout<<"---------------------------------------------------\n\n\n";
        cout<<"INSERTING"<<endl;

        cout<<"---------------------------------------------------\n\n\n";


        cout<<"[8] Insert patient\n";
        cout<<"[9] Insert doctor\n";
        cout<<"[10] Insert supply\n";
        cout<<"[11] Add visitor\n";
        cout<<"---------------------------------------------------\n\n\n";
        cout<<"---------------------------------------------------\n\n\n";

        
        cout<<"SORTING"<<endl;
        cout<<"---------------------------------------------------\n\n\n";

        cout<<"[12] Sort patients by id\n";
        cout<<"[13] Sort employees by id\n";
        cout<<"[14] Sort patients by location\n";
        cout<<"---------------------------------------------------\n\n\n";

        cout<<"QUITTING"<<endl;
        cout<<"---------------------------------------------------\n\n\n";

        cout<<"[15] Exit\n";       


        cout<<"---------------------------------------------------\n\n\n";
        
}

void load(Hospital H[],int index) {
    
                                     ifstream file;
                                     file.open("pts.txt");
                                     int id;
                                     int number;
                                     int cont_num;
                                     
                                     string name;
                                     string surname;
                                     string cont_mail;
                                     string em_mail;
                                     string report;
                                     string location;
                                     string condition;
                                     
                                     
                                     int em_num;
                                     
                                     
                                     
                                     while(!file.eof()) {
                                         
                                        getline(file,name);
                                        getline(file,surname);
                                        
                                        file>>id;
                                       
                                        file>>cont_num;
                                        
                                        file.ignore(1000,'\n');
                                        getline(file,cont_mail);
                                        
                                        file>>em_num;
                                        file.ignore(1000,'\n');
                                        getline(file,em_mail);
                                        getline(file,report);
                                        getline(file,location);
                                        getline(file,condition);
                                        
                                        Patient P(name,surname,cont_num,cont_mail,em_num,em_mail);
                                        
                                        P.set_medical_history(report);
                                        P.set_location(location);
                                        P.set_patients_condition(condition);
                                        P.set_patient_id(id);
                                             
                                        H[index].insert_patients(P);     
                                             
                                     }  
                                     
                                     file.close();
}






void display_hospitals(Hospital H[]) {
        
        for(int i=0;i<5;i++) {
                
                cout<<"["<<i<<"] "<<H[i].get_name_hospital()<<endl;
                
        }
        cout<<endl;
}

void save(Hospital H[],int index) {
        
         ofstream file;
                                     file.open("pts2.txt");
                                     string name;
                                     string surname;
                                     int id;
                                     int number;
                                     int cont_num;
                                     string cont_mail;
                                     int em_num;
                                     string em_mail;
                                     string report;
                                     string location;
                                     string condition;
                                     
                                     
                                     for(int i=0;i<H[index].get_patients().size();i++) {
                                         
                                         file<<H[index].get_patients()[i].get_name()<<"\n";
                                         file<<H[index].get_patients()[i].get_surname()<<"\n";
                                         file<<H[index].get_patients()[i].get_patient_id()<<"\n";
                                         file<<H[index].get_patients()[i].get_phone_number()<<"\n";
                                         file<<H[index].get_patients()[i].get_mail()<<"\n";
                                         file<<H[index].get_patients()[i].get_emergency_phone_number()<<"\n";
                                         file<<H[index].get_patients()[i].get_emergency_mail()<<"\n";
                                         file<<H[index].get_patients()[i].get_medical_history()<<"\n";
                                         file<<H[index].get_patients()[i].get_location()<<"\n";
                                         file<<H[index].get_patients()[i].get_patients_condition()<<"\n";
                                         
                                             
                                     }  
        
        
        
}




void erase_person(Hospital H[],int index) {
        
        cout<<"Which one of these you want to delete: "<<endl;
        cout<<"1. Patient"<<endl;
        cout<<"2. Employee"<<endl;
        cout<<"3. Supplies"<<endl;
        int option;
        cin>>option;
        switch(option) {
                
                
                case 1: {
                     
                     H[index].display_patients();
                     int option;
                     cout<<"Choose a patient that you want to delete: "<<endl;
                     cin>>option;
                        
                        H[index].patients_delete(option);
                        
                        cout<<"Patient has been deleted form the system, going back to the menu..."<<endl<<endl;
                        
                        break;
                }
                
                
                case 2: {
                        
                   H[index].display_doctors();
                     int option;
                     cout<<"Choose a doctor that you want to delete: "<<endl;
                     cin>>option;
                        
                        H[index].doctor_delete(option);
                        
                        cout<<"Doctor has been deleted from the system, going back to the menu..."<<endl<<endl;
                        
                            
                        
                        break;
                }
                
                case 3: {
                      
                    H[index].display_inventory();
                     int option;
                     cout<<"Choose an supply that you want to delete: "<<endl;
                     cin>>option;
                        
                        H[index].inventory_delete(option);
                        
                        cout<<"Supply has been deleted from the system, going back to the menu..."<<endl<<endl;
                        
                            
                      
                      
                        
                        break;
                        
                }
                
                default : {
                        
                        cout<<"Wrong input, returning to main menu!"<<endl;
                        break;
                }
                
        }
        
        
}


void edit_person(Hospital H[],int index) {
          cout<<"Which one of these you want to edit: "<<endl;
        cout<<"1. Patient"<<endl;
        cout<<"2. Doctor"<<endl;
        cout<<"3. Supplies"<<endl;
        int option;
        cin>>option;
        switch(option) {
                
                
                case 1: {
                     
                     H[index].display_patients();
                     int option;
                     cout<<"Choose a patient that you want to edit: "<<endl;
                     cin>>option;
                        
                        H[index].patients_edit(option);
                        
                        cout<<"Patient has been edited in the system, going back to the menu..."<<endl<<endl;
                        
                        break;
                }
                
                
                case 2: {
                        
                   H[index].display_doctors();
                     int option;
                     cout<<"Choose an employee that you want to delete: "<<endl;
                     cin>>option;
                        
                        H[index].doctors_edit(option);
                        
                        cout<<"Employee has been edited in the system, going back to the menu..."<<endl<<endl;
                        
                            
                        
                        break;
                }
                
                case 3: {
                      
                    H[index].display_inventory();
                     int option;
                     cout<<"Choose an supply that you want to edit: "<<endl;
                     cin>>option;
                        
                        H[index].inventory_edit(option);
                        
                        cout<<"Supply has been edited in the system, going back to the menu..."<<endl<<endl;
                        
                            
                      
                      
                        
                        break;
                        
                }
                
                default : {
                        
                        cout<<"Wrong input, returning to main menu!"<<endl;
                        break;
                }
                
        }
        
        
        
}





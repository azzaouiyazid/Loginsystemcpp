#include <iostream>
#include <fstream>
#include <string>

using namespace std ; 

bool Logged()

{
  string username , password , user , pass ; 

     cout <<"enter username :";
    cin>> username ; 
    cout <<"Enter password :";
    cin>>password ;

  ifstream read("file.txt");

     getline(read , user );
     getline(read , pass) ; 
              
               
            if (username == user  && password==pass)
             {
                 return true ; 
             }
             else 
             {
                 return false ; 
             }
}

int main()
{
    int choice ; 
    cout<<"1:Register\n2:Login\ntype your choice :";
    cin>>choice ; 
      
      if(choice == 1)
      {
          string password , username ; 

        cout<<"select a username : ";
          cin>>username ; 
        cout<<"select a password : ";
          cin>>password ; 

          ofstream file ;   
          
          file.open("file.txt");  

          file<<username<<endl ;
          file<<password ; 

          file.close() ;

         main();
         
      }
      else if (choice==2)
      {
          bool status=Logged() ; 
           
           if (!status)
           {
               cout<<"incorrect username or password , please check again ."<<endl; 
               system("PAUSE");
               return 0 ; 
           }
           else 
           {
               cout<<"Succesfully logged in ."<<endl; 
               system("PAUSE");
               return 1 ; 
           }

      }
}
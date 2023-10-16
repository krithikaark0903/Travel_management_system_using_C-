#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;


void menu();

class ManageMenu
{
protected:
    string userName;

public:



    ManageMenu()
    {
        system("color 0A");
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("CLS");
        menu();
    }

    ~ManageMenu(){}
};


class customer
{
   public:

   string name,gender,address;
   int age,mobno;
   static int id;
   char all[999];

   void getdetails()
   {
    ofstream out("old-customer.txt",ios::app);

     {

     cout<<"Enter customer ID:"<<endl;
     cin>>id;
     cout<<"Enter customer Name:"<<endl;
     cin>>name;
     cout<<"Enter customer Age:"<<endl;
     cin>>age;
     cout<<"Enter customer Address:"<<endl;
     cin>>address;
     cout<<"Enter Gender:"<<endl;
     cin>>gender;
     cout<<"Enter customer Mobile Number:"<<endl;
     cin>>mobno;
     }
     out << "\n Customer ID:" << id<<endl;
     out << "\n Customer Name:" << name<<endl;
     out << "\n Customer Age:" << age<<endl;
     out << "\n Customer Mobile Number:" <<mobno <<endl;
     out << "\n Customer Address:" <<address<<endl;
     out << "\n Customer Gender: " <<gender<<endl;
     out.close();
     cout<<" Saved Details for future purposed"<<endl;

   }
   void showdetails()
    {
        ifstream in("old-customer.txt");
          {
            if(!in)
            {
             cout<<"file error!"<<endl;
            }
            while(!(in.eof()))
            {
              in.getline(all,999);
              cout<< all <<endl;
            }

            in.close();

         }
       }
};

int customer :: id;

class cabs
{
    public:
       int cabch,kilometers;
       float cost;
       static float cabcost;

        void cabdetails()
         {
            cout<<"--------------XYZ CABS------------"<<endl;
            cout<<"   Your safety is our priority.   "<<endl;
            cout<<"1.Rent a standard cab:- Rs.15 per km"<<endl;
            cout<<"2.rent a Prime sedan :- Rs.25 per km"<<endl;

            cout<<"Enter the choice for your cab journey(1 or 2):"<<endl;
            cin>>cabch;
            cout<<"enter the number of kilometers you travelled:"<<endl;
            cin>>kilometers;

            int hirecab;

             if(cabch==1)
             {
              cost=kilometers*15;
              cout<<"total cost of journey for standard cab="<<cost<<endl;
              cout<<"Press 1 to hire cab or press 2 to select another cab:"<<endl;
              cin>>hirecab;

              system("CLS");
              if(hirecab==1)
                {
                  cabcost=cost;
                  cout<<"CAB HIRED SUCESSFULLY! Your cab will be in the pick up location un few minutes."<<endl;
                  cout<<"Go to Menu and recieve the reciept."<<endl;
                }
                else if(hirecab==2)
                 {
                    cabdetails();
                 }
                 else
                 {
                  cout<<"Wrong input. you will be redirected to the previous menu shortly"<<endl;
                  Sleep(1100);
                  system("CLS");
                  cabdetails();
                 }

             }
             else if(cabch==2)
             {
              cost=kilometers*25;
              cout<<"total cost of journey for standard cab="<<cost<<endl;
              cout<<"Press 1 to hire cab or press 2 to select another cab:"<<endl;
              cin>>hirecab;

              system("CLS");
              if(hirecab==1)
                {
                  cabcost=cost;
                  cout<<"CAB HIRED SUCESSFULLY! Your cab will be in the pick up location un few minutes."<<endl;
                  cout<<"Go to Menu and recieve the reciept."<<endl;
                }
                else if(hirecab==2)
                 {
                    cabdetails();
                 }
                 else
                 {
                  cout<<"Wrong input. you will be redirected to the previous menu shortly"<<endl;
                  Sleep(1100);
                  system("CLS");
                  cabdetails();
                 }

             }
             else
             {
             cout<<"Invalid input!We will redirect you to the main menu shortly."<<endl;
             Sleep(1100);
             system("CLS");
             menu();

             }
             cout<<"\n Press 1 to redirect to main menu."<<endl;
             cin>>hirecab;
             system("CLS");
               if(hirecab==1)
               {
                 menu();
               }
               else
               {
                menu();
               }


         }





};

 float cabs::cabcost;

class booking
{

  public:

  int hotelch,packagech,gotomenu;
  static float hcost;

   void hotels()
     {
      string hotelno[] = { "Ephiphany", "Euphoria" , "Paradise" };
      for(int a=0;a<3;a++)
          {
         cout<< (a+1) << "." << hotelno[a] <<endl;

           }
         cout<<"\n We are currently collaborating with the above hotels "<<endl;

         cout<<"\n Press any key to go back or \n Enter the hotel choices (1,2 or 3 only) to book"<<endl;
         cin>>hotelch;

         system("CLS");

          if(hotelch==1)
           {
            cout << "-------WELCOME TO HOTEL EPIPHANY-------\n" << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Epiphany:\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Epiphany: Rs.15000.00" << endl;

            cout<<"\n Press any key to go back or \n Enter the hotel choices (1,2 or 3 only) to select a package"<<endl;
            cin>>packagech;

             if (packagech == 1){
                hcost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Epiphany" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 2){
                hcost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Epiphany" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 3){
                hcost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Epiphany" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

           }
           cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotomenu;
            system("CLS");
            if(gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }

        }
        if(hotelch==2)
           {
            cout << "-------WELCOME TO HOTEL EUPHORIA-------\n" << endl;
            cout << "Swimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;
            cout << "Packages offered by Euphoria:\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.7000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.15000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Euphoria: Rs.20000.00" << endl;


            cout<<"\n Press any key to go back or \n Enter the hotel choices (1,2 or 3 only) to select a package"<<endl;
            cin>>packagech;

             if (packagech == 1)
             {
                hcost = 7000.00;
                cout << "\nYou have successfully booked Standard Pack at Euphoria" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 2)
            {
                hcost = 15000.00;
                cout << "\nYou have successfully booked Premium Pack at Euphoria" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 3)
            {
                hcost = 20000.00;
                cout << "\nYou have successfully booked Luxury Pack at Euphoria" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

           }
           cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotomenu;
            system("CLS");
            if(gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }

         }
        if(hotelch==3)
           {
            cout << "-------WELCOME TO HOTEL PARADISE-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants"<< endl;
            cout << "Packages offered by Paradise:\n" << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.15000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.25000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Paradise: Rs.35000.00" << endl;


            cout<<"\n Press any key to go back or \n Enter the hotel choices (1,2 or 3 only) to select a package"<<endl;
            cin>>packagech;

             if (packagech == 1){
                hcost = 15000.00;
                cout << "\nYou have successfully booked Standard Pack at Paradise" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 2){
                hcost = 25000.00;
                cout << "\nYou have successfully booked Premium Pack at Paradise" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packagech == 3){
                hcost = 35000.00;
                cout << "\nYou have successfully booked Luxury Pack at Paradise" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();

           }
           cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotomenu;
            system("CLS");
            if(gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }


}
};

float booking::hcost;

class charge : public booking,cabs,customer
{
  public:
        void printBill()
    {
        ofstream outf("receipt.txt"); //receipt for bought items
        {
            outf << "--------XYZ Travel Agency--------" << endl;
            outf << "-------------Receipt-------------" << endl;
            outf << "_________________________________" << endl;

            outf << "Customer ID: " << customer::id << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel cost:\t\t " << fixed << setprecision(2) << booking::hcost << endl;
            outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << cabs::cabcost << endl;

            outf << "_________________________________" << endl;
            outf << "Total Charge:\t\t " << fixed << setprecision(2) << booking::hcost+cabs::cabcost << endl;
            outf << "_________________________________" << endl;
            outf << "------------THANK YOU------------" << endl;
        }
        outf.close();

    }

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }

};
void menu()
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t      * XYZ Travels *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;

    cout << "\t|\t1.Customer Record     \t\t|" << endl;
    cout << "\t|\t2.Cabs Booking        \t\t|" << endl;
    cout << "\t|\t3.Hotel Booking       \t\t|" << endl;
    cout << "\t|\t4.Total Charges & Bill       \t|" << endl;
    cout << "\t|\t5.Exit                 \t\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    customer a2;
    cabs a3;
    booking a4;
    charge a5;

    if(mainChoice == 1)
    {
        cout << "------Customers------\n" << endl;
        cout << "1. Enter New Customer"<< endl;
        cout << "2. See Old Customers"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getdetails();
        }
        else if(inChoice == 2)
        {
            a2.showdetails();

        }
        else
        {
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if(mainChoice == 2)
    {
        a3.cabdetails();
    }
    else if(mainChoice == 3)
    {
        cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
        a4.hotels();
    }
    else if(mainChoice == 4)
    {
        cout << "-->Get your receipt<--\n" << endl;
        a5.printBill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");

            a5.showBill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 5){
        cout << "\n\n\t--THANK YOU!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu Please Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}

int main()
{
 ManageMenu startObj;
return 0;
}

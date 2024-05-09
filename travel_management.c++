#include<iostream>
#include<fstream> // file handling
#include<iomanip> // showing floating point values
#include<Windows.h>

using namespace std;



void menu();
class ManageMenu
{
protected:
    string userName; //hide admin name

public:

    //virtual void menu(){}

    ManageMenu()
    {
        system("color 0A"); //change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("CLS");
        menu(); //call to main function to load after executing the constructr
    }

    ~ManageMenu(){} //de
};


class Customers
{
    // addding 
    public:
        string name, gender, address;
        int age, mobileNO;
        static int cusID;
        char all[999];

        void getDetails()
        {

            ofstream out("old-customer.txt", ios::app);
            {
                cout << "Enter Customer ID: ";
                cin >> cusID;
                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter MobileNO: ";
                cin >> mobileNO;
                cout << "Enter Address: ";
                cin >> address;
                cout << "Enter Gender : ";
                cin >> gender;
            }

            out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobileNO: " << mobileNO <<"\nAddress: " << address << "\ngender: " << gender << endl;
            out.close();
            cout << "\nSAVED \nNOTE: We saved your details record for future purpose\n" << endl;
        }

        void showDetails()
        {
            ifstream in("old-customer.txt");
            {
                if(!in)
                {
                    cout << "File Error!" <<endl;
                }
                while(!(in.eof()))
                {
                    in.getline(all, 999);
                    cout << all << endl;
                }
                in.close();
            }
        }
};

int Customers::cusID;
class Cabs
{
    public:
        int cabChoice;
        int kilometers;
        float cabCost;
        static float lastcabCost;

        void cabDetails()
        {
            cout << "We colllaborated with fastest, safest and smartest cab service arround the country" <<endl;
            cout << "------------Harsha Cabs------------" << endl;
            cout << "1. Rent a standard Cab - Rs.15 for 1KM" <<endl;
            cout << "2. Rent a Luxury Cab - Rs.25 per 1KM" <<endl;


            cout << "\nTo Calculate the cost for your journey: " <<endl;
            cout << "Enter which kind of cab you need:" <<endl;
            cin >> cabChoice;
            cout << "Enter kilometers you have to travel:" <<endl;
            cin >> kilometers;


            int hireCab;

            if(cabChoice == 1)
            {
                cabCost = kilometers*15;
                cout << "\nYour tour cost " << cabCost <<"rupees for a Standard Cab" << endl;
                cout << "Press 1 to hire this cab: or" <<endl;
                cout << "Press 2 select another cab: " << endl;
                cin >> hireCab;

                system("CLS");

                if(hireCab == 1)
                {
                    lastcabCost = cabCost;
                    cout << "\nYou have successfully hired a Standard cab" <<endl;
                    cout <<"Goto Menu and take the receipt" << endl;
                }
                else if(hireCab == 2)
                {
                    cabDetails();
                }
                else
                {
                    cout << "Invalid Input! Redirecting to previous menu \nPlease Wail!" <<endl;
                    Sleep(999);
                    system("CLS");
                    cabDetails();
                }
            }

            else if(cabChoice == 2)
            {
                cabCost = kilometers*15;
                cout << "\nYour tour cost " << cabCost <<"rupees for a Standard Cab" << endl;
                cout << "Press 1 to hire this cab: or" <<endl;
                cout << "Press 2 select another cab: " << endl;
                cin >> hireCab;

                system("CLS");

                if(hireCab == 1)
                {
                    lastcabCost = cabCost;
                    cout << "\nYou have successfully hired a Standard cab" <<endl;
                    cout <<"Goto Menu and take the receipt" << endl;
                }
                else if(hireCab == 2)
                {
                    cabDetails();
                }
                else
                {
                    cout << "Invalid Input! Redirecting to Previous menu \nPlease Wail!" <<endl;
                    Sleep(999);
                    system("CLS");
                    cabDetails();
                }
            }
            else
            {
                cout << "Invalid Input! Redirecting to Main menu \nPlease Wail!" <<endl;
                Sleep(1100);
                system("CLS");
                menu();
            }

            cout << "\nPress 1 to Rediresct Main menu: ";
            cin >> hireCab ;
            system("CLS");
            if(hireCab ==  1)
            {
                menu();
            } 
            else{
                menu();
            }
        }
};

float Cabs::lastcabCost;

class Booking{
    public:
        int choiceHotel;
        int packChoice;
        static float hotelCost;

        void hotels()
        {
            string hotelNo[] = {"Novotel", "JW", "NewClass"};

            for(int i = 0; i < 3; i++)
            {
                cout << (i+1) << ". Hotel" << hotelNo[i] << endl;
            }

            cout << "\nCurrently we collaborated with above hotels!" << endl;
            cout << "Press anyy key to back or\n Enter number of the hotel you wantto book"  << endl;
            cin >> choiceHotel;

            system("CLS");

            if(choiceHotel == 1)
            {
                cout << "-------WELCOME TO HOTEL NOVOTEL-------\n" <<endl;
                cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the sun." <<endl;
                cout <<  "Packages offered by Novotel:\n" <<endl;

                cout << "1. Standard Pack" <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00" <<endl;
                cout << "2. Premium Pack" << endl;
                cout << "\tEnjoy Premium: Rs.10000.00" << endl;
                cout << "3. Luxury Pack" <<endl;
                cout << "\tLive a Luxury at Novotel: Rs.20000" <<endl;


                cout << "\nPress another key to back or \nEnter package number you want to book: " <<endl;
                cin >>  packChoice;



                if(packChoice == 1)
                {
                    hotelCost = 5000.00;
                    cout << "\nyou have successfully booked Standaerd Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                    
                }
                else if(packChoice == 2)
                {
                    hotelCost = 10000.00;
                    cout << "\nyou have successfully booked Premium Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;      
                }
                else if(packChoice == 3)
                {
                    hotelCost = 20000.00;
                    cout << "\nyou have successfully booked Luxury Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }
                int gotoMenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotoMenu;

                if(gotoMenu == 1)
                {
                    menu();
                }
                else
                {
                   menu();
                }

            }
            
            else if(choiceHotel == 2)
            {
                cout << "-------WELCOME TO HOTEL NOVOTEL-------\n" <<endl;
                cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the sun." <<endl;
                cout <<  "Packages offered by Novotel:\n" <<endl;

                cout << "1. Standard Pack" <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00" <<endl;
                cout << "2. Premium Pack" << endl;
                cout << "\tEnjoy Premium: Rs.10000.00" << endl;
                cout << "3. Luxury Pack" <<endl;
                cout << "\tLive a Luxury at Novotel: Rs.20000" <<endl;


                cout << "\nPress another key to back or \nEnter package number you want to book: " <<endl;
                cin >>  packChoice;



                if(packChoice == 1)
                {
                    hotelCost = 5000.00;
                    cout << "\nyou have successfully booked Standaerd Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                    
                }
                else if(packChoice == 2)
                {
                    hotelCost = 10000.00;
                    cout << "\nyou have successfully booked Premium Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;      
                }
                else if(packChoice == 3)
                {
                    hotelCost = 20000.00;
                    cout << "\nyou have successfully booked Luxury Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }

                int gotoMenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotoMenu;

                if(gotoMenu == 1)
                {
                    menu();
                }
                else
                {
                   menu();
                }


            }

            else if(choiceHotel == 3)
            {
                cout << "-------WELCOME TO HOTEL NOVOTEL-------\n" <<endl;
                cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the sun." <<endl;
                cout <<  "Packages offered by Novotel:\n" <<endl;

                cout << "1. Standard Pack" <<endl;
                cout << "\tAll basic facilities you need just for: Rs.5000.00" <<endl;
                cout << "2. Premium Pack" << endl;
                cout << "\tEnjoy Premium: Rs.10000.00" << endl;
                cout << "3. Luxury Pack" <<endl;
                cout << "\tLive a Luxury at Novotel: Rs.20000" <<endl;


                cout << "\nPress another key to back or \nEnter package number you want to book: " <<endl;
                cin >>  packChoice;



                if(packChoice == 1)
                {
                    hotelCost = 5000.00;
                    cout << "\nyou have successfully booked Standaerd Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                    
                }
                else if(packChoice == 2)
                {
                    hotelCost = 10000.00;
                    cout << "\nyou have successfully booked Premium Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;      
                }
                else if(packChoice == 3)
                {
                    hotelCost = 20000.00;
                    cout << "\nyou have successfully booked Luxury Pack at Novotel" << endl;
                    cout << "Goto Menu and take the receipt" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }

                int gotoMenu;
                cout << "\nPress 1 to redirect main menu: ";
                cin >> gotoMenu;

                if(gotoMenu == 1)
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

float Booking::hotelCost;

class Charges : public Booking, Cabs, Customers{
    public:
        void printBill()
        {

            ofstream outf("receipt.txt");
            {
                outf <<"-------Harsha Agency-------" <<endl;
                outf <<"----------Receipt----------" <<endl;
                outf <<"___________________________" <<endl;

                outf <<"Customer ID:" <<Customers::cusID <<endl <<endl;
                outf <<"Description\t\t Total" <<endl;
                outf <<"Hotel cost:\t\t" << fixed << setprecision(2) << Booking::hotelCost << endl;
                outf <<"Travel (Cab) cost:\t" << setprecision(2) <<Cabs::lastcabCost <<endl;

                outf <<"___________________________" <<endl;
                outf <<"Total Charge:\t\t" << fixed << setprecision(2) << Booking::hotelCost+Cabs::lastcabCost << endl;
                outf <<"___________________________" <<endl;
                outf <<"---------THANK YOU---------" <<endl;
             }

             outf.close();
        }

        void showBill()
        {
            ifstream inf("receipt.txt");
            {
                if(!inf)
                {
                    cout << "File opening error" <<endl;
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

    cout << "\t\t      * Harsha Travels *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    //cout << "\t|\tAgency System Management -> 0" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> mainChoice;
    int inChoice;
    int gotoMenu;

    system("CLS");

    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if(mainChoice == 1){
        cout << "------Customers------\n" << endl;
        cout << "1. Enter New Customer"<< endl;
        cout << "2. See Old Customers"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getDetails();
        }
        else if(inChoice == 2){
            a2.showDetails();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
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
    else if(mainChoice == 2){
        a3.cabDetails();
    }
    else if(mainChoice == 3){
        cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
        a4.hotels();
    }
    else if(mainChoice == 4){
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
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
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
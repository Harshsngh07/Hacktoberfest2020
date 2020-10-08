#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include<Windows.h>
using namespace std;
int main()
{
    
    int  input, cycle = 0, bike = 0, riksha = 0, car = 0, bus = 0; // Variables for Entry
    start :
        system("cls");
        int status = cycle*5 + bike*10 + riksha*15 + car*20 + bus*25;
        cout << "                       \t\t\t\t\t\t\t\t Welcome to the CJ Parking Management Tool\n\n\n\n\n\n\n\n                      \t\t\t\t Choose your option:\n\n1. Cycle \n2. Bike/Scooter\n3. Auto/Riksha\n4. Car \n5. Bus\n6. Check Status \n7. Delete Entry \n8. Exit" << endl << endl;
        cin>>input; //Taking the input
        switch(input)
        {
            case 1 :
                cycle++;
                system("cls");
                cout<<"Entry Done!"<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 2 :
                bike++;
                system("cls");
                cout<<"Entry Done!"<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 3 :
                riksha++;
                system("cls");
                cout<<"Entry Done!"<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 4 :
                car++;
                system("cls");
                cout<<"Entry Done!"<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 5 :
                bus++;
                system("cls");
                cout<<"Entry Done!"<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 6 :
                system("cls");
                cout<<"Lodaing Status";
                for (int i = 0; i < 5; i++)
                {
                    cout<<".";
                    Sleep(700);
                }
                system("cls");
                cout<< endl << "Total Cycles registered are : " << cycle << endl << "Total Bikes/Scooters registered are : " << bike << endl << "Total Autos/Rikshas registered are : " << riksha << endl <<"Total Cars registered are : " << car << endl << "Total Busses registered are : " << bus << endl << endl << "Total Amount Gained is : Rs." << status << endl << endl <<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 7 :
                cycle = 0;
                bike = 0;
                riksha = 0; 
                car = 0; 
                bus = 0;
                system("cls");
                cout<<"All Entries Reset Done!"<<endl<<endl<<"Press enter to continue"<<endl;
                cin.get();
                cin.get();
                break;
            case 8 : 
                goto end;

            default :
                system("cls");
                cout<< "Sorry Input not Valid" << endl <<"Please Try again" <<endl;
                cin.get();
                cin.get(); 
        }
        goto start;
    end :
        system("cls");
        cout<<"Thanks For Using"<<endl;
    getch();
    return 0;
}

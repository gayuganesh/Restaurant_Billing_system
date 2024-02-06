#include <iostream>

using namespace std;

class menu
{
    private:

    string name;
    long phnno;
    struct order
    {
        int order;
        int dish,quantity,price;
    };

    order customer[100];
    int count=1;
    int total=0;



    public:


    void getdetails()

    {

    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<"                  WELCOME TO DATTA'S DOSA                       "<<endl;
    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;

    cout<<"Pls enter your name :- ";
    cin>>name;

    cout<<"Pls enter your number :- ";
    cin>>phnno;
    cout<<endl;

    cout<<"Here's the menu avaliable!!!"<<endl;
    cout<<endl;
    }

    void menudetails()
    {

    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<endl;
    cout<<"                  MENU                       "<<endl;
    cout<<endl;

    cout<<"S.NO:        DISHES:         PRICE:          "<<endl;

    cout<<"1.           SET DOSA                55          "<<endl;
    cout<<"2.           PLAIN DOSA              60          "<<endl;
    cout<<"3.           PANNER DOSA             80          "<<endl;
    cout<<"4.           PAPER DOSA              130         "<<endl;
    cout<<"5.           CHEESE DOSA             160         "<<endl;
    cout<<"6.           KAL DOSA                66          "<<endl;
    cout<<"7.           ONION DOSA              90          "<<endl;
    cout<<"8.           CONE DOSA               120         "<<endl;
    cout<<"9.           CHEESE ONION DOSA       110         "<<endl;
    cout<<"10.          CONE CHEESE DOSA        160         "<<endl;
    cout<<"11.          CHOCOLATE DOSA          120         "<<endl;
    cout<<"12.          MAGGI DOSA              100         "<<endl;
    cout<<endl;

    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<endl;
    }


    void dishorder()
    {

        char more;
        for(int i=0;i<count;i++)
        {
        cout<<"Pls enter the S.NO of the dish you wish to order:- ";
        cin>>customer[i].order;
        cout<<"How many plates do you want:- ";
        cin>>customer[i].quantity;
        cout<<endl;

        cout<<"If you want to order more pls press Y if you want to stop pls press N:- ";
        cin>>more;
        cout<<endl;
        if(more=='y'||more=='Y')
        {
            count++;
        }
        else
        {
            cout<<"Thanks for ordering!!"<<endl;
            break;
        }

        }

    }    

    void printbill()
    {

        cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
        cout<<endl;
        cout<<"                  YOUR BILL                    "<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"PHONE NUMBER:"<<phnno<<endl;
        cout<<endl;
        cout<<"S.NO:        DISHES:         PRICE:          QTY:       TOTAL:   "<<endl;

        for(int i=0; i<count; i++)
        {
            switch(customer[i].order)
            {
               case 1: cout << i+1 << "\tSET DOSA" << "\t\t55" << "\t" << customer[i].quantity;
        customer[i].price = 55 * customer[i].quantity;
        cout << "\t" << "\t\t" << customer[i].price << endl;
        break;

        case 2: cout << i+1 << "\tPLAIN DOSA" << "\t\t60" << "\t" << customer[i].quantity;
        customer[i].price = 60 * customer[i].quantity;
        cout << "\t" << "\t\t" << customer[i].price << endl;
        break;

        case 3: cout << i+1 << "\tPANNER DOSA" << "\t\t80" << "\t" << customer[i].quantity;
        customer[i].price = 80 * customer[i].quantity;
        cout << "\t" << "\t\t" << customer[i].price << endl;
        break;

        case 4: cout << i+1 << "\tPAPER DOSA" << "\t\t130" << "\t" << customer[i].quantity;
        customer[i].price = 130 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;
        break;

        case 5: cout << i+1 << "\tCHEESE DOSA" << "\t\t160" << "\t" << customer[i].quantity;
        customer[i].price = 160 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;    
        break;

        case 6: cout << i+1 << "\tKAL DOSA" << "\t\t66" << "\t" << customer[i].quantity;
        customer[i].price = 66 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;
        break;

        case 7: cout << i+1 << "\tONION DOSA" << "\t\t90" << "\t" << customer[i].quantity;
        customer[i].price = 90 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;
        break;

        case 8: cout << i+1 << "\tCONE DOSA" << "\t\t120" << "\t" << customer[i].quantity;
        customer[i].price = 120 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;
        break;

        case 9: cout << i+1 << "\tCHEESE ONION DOSA" << "\t\t110" << "\t" << customer[i].quantity;
        customer[i].price = 110 * customer[i].quantity;
        cout << "\t" << customer[i].price << "\t\t" << endl;
        break;

         case 10: cout << i+1 << "\tCONE CHEESE DOSA" << "\t\t160" << "\t" << customer[i].quantity;
         customer[i].price = 160 * customer[i].quantity;
         cout << "\t" << customer[i].price << "\t\t" << endl;
         break;

         case 11: cout << i+1 << "\tCHOCOLATE DOSA" << "\t\t120" << "\t" << customer[i].quantity;
         customer[i].price = 120 * customer[i].quantity;
         cout << "\t" << customer[i].price << "\t\t" << endl;
         break;

         case 12: cout << i+1 << "\tMAGGI DOSA" << "\t\t100" << "\t" << customer[i].quantity;
         customer[i].price = 100 * customer[i].quantity;
         cout << "\t" << customer[i].price<<"\t\t"<< endl;
         break;

            }
            total+=customer[i].price;
        }
        cout<<"total: "<<total<<endl;
    }

 };
int main()
{
    menu order;
    order.getdetails();
    order.menudetails();
    order.dishorder();
    order.printbill();
    cout<<endl;
    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<endl;
    cout<<"* * * THANKS FOR COMING* * *";
    return 0;
}

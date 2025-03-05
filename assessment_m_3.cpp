#include <iostream>
using namespace std;

class FoodOrder 
{
private:
	
    string name;
    int choice, sub_Choice, quantity, total=0, price;
    char continue_Order;

public:
    
    void get_User_Name() 
	{
        cout << "\n\n\t-----------Tops Tech. Fast Food-----------\n";
        cout << "\n\n\t Please Enter Your Name: ";
        cin >> name;
        
        cout << "\n\n\t Hello " << name;
    }

    void display_Menu() 
	{
        cout << "\n\n\t What would you like to order?";
        cout << "\n\n\t--------Menu--------\n";
        cout << "\n\n\t 1) Pizzas";
        cout << "\n\n\t 2) Burgers";
        cout << "\n\n\t 3) Sandwich";
        cout << "\n\n\t 4) Rolls";
        cout << "\n\n\t 5) Biryani";
    }

    void display_Sandwich_Menu() 
	{
        cout << "\n\n\t 1. Club Sandwich Rs.240";
        cout << "\n\n\t 2. Veg. Crispy Sandwich Rs.160";
        cout << "\n\n\t 3. Extreme Veg Sandwich Rs.100";
    }

    int getPrice(int foodChoice, int subChoice) 
	{
        if (foodChoice == 3) 
		{
            switch (subChoice) 
			{
                case 1: 
			return 240;
                case 2: 
			return 160;
                case 3: 
			return 100;
                default:
			return 0;
            }
        }
        return 0;
    }

    void take_Order() 
	{
        do 
		{
            display_Menu();
            cout << "\n\n\t Please Enter your Choice: ";
            cin >> choice;

            if (choice == 3) 
			{ 
                display_Sandwich_Menu();
                cout << "\n\n\t Please Enter which Sandwich you would like to have?: ";
                cin >> sub_Choice;

                cout << "\n\n\t Please Enter Quantity: ";
                cin >> quantity;

                price = getPrice(choice, sub_Choice);
                total += price * quantity;

                cout << "\n\n\t --------Your Order--------";
                cout << "\n\n\t Total Bill is Rs = " << total;
                cout << "\n\n\t Your Order Will be delivered in 40 Minutes.";
                cout << "\n\n\t Thank you For Ordering From Tops Tech Fast Food!";
            }

            cout << "\n\n\t Would you like to order anything else? (Y/N): ";
            cin >> continue_Order;

        } while (continue_Order == 'Y' || continue_Order == 'y');
    }

    void display_Final_Message() 
	{
        cout << "\n\n\t Thank you for your order. Have a great day!\n";
    }
};

 main() 
 {
    FoodOrder o;
    o.get_User_Name();
    o.take_Order();
    o.display_Final_Message();

}

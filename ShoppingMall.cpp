 #include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//
// void Game()
// {
//     srand(time(0));
// 	int secretNumber= rand()%20+1;
// 	int guess;
	
// 	cout<<"Guess the number between 1 and 20 To get 15% discount on your purchase (0r enter to quite)\n";
// 	for(int i=1;i<=5;i++)
//    {
// 		cin>>guess;
	
// 	 if (guess==-1)
// 	                 {
// 	                 	cout<<"You chose to quite. Goodby!\n";
//                       break;
// 	                 }
// 	else if (guess==secretNumber)
// 	                {
// 	                	cout<<"congratulations you will get 15% discount on your purchase .\n";
// 	                	break;
// 	                }
// 	else if(guess<secretNumber)
// 	                {
// 	                	cout<<"Too low ! try again :";
// 	                }
// 	 else if(guess>secretNumber)
// 	                {
// 	                	cout<<"Too high ! try again:";
// 	                }
// 	else
// 	                 {
// 	                 	cout<<"you missed the chance !";
// 	                 }
//     }
// 	// return 0;
// }


void UserGuide() {
    cout << "Parking area Basement.\n";
    cout << "1st floor sections: (Play a Guess number game to get discount on Cosmetics)\n";
    cout << "                 (Garments, Shoes, Cosmetics, Grocery, Fruits).\n";
    cout << "2nd floor sections:\n";
    cout << "                 (Fast foods special offer, ChyKhana, IceCream, Grocery, Dry Fruits).\n";
    
}

void garmentsManew() {
    cout << "                             Welcome to MTJ\n";
    cout << "Men's Collection\n";
    cout << "   1. T-Shirts: Casual=$20, Polo=$20\n";
    cout << "   2. Dress Shirts: Formal=$25, Casual=$30, Linen=$40\n";
    cout << "   3. Pants: Jeans=$30, Chinos=$40, Trousers=$50\n";
    cout << "   4. Suits: Dress Pants=$60, Waistcoats=$150\n";
    cout << "   5. Outerwear: Jackets=$50, Coats=$70, Hoodies=$100\n";
    cout << "Women's Collection\n";
    cout << "   6. Tops: Tank Tops=$15, T-Shirts=$30\n";
    cout << "   7. Dresses: Casual=$40, Formal=$40, Evening Gowns=$100\n";
    cout << "   8. Bottoms: Skirts=$30, Jeans=$20, Leggings=$45\n";
    cout << "   9. Outerwear: Jackets=$60, Coats=$50, Cardigans=$120\n";
    cout << "  10. Accessories: Hats=$10, Jewelry=$50\n";
    cout << "Kid's Collection\n";
    cout << "  11. Tops: T-Shirts=$15, Shirts=$10, Sweaters=$25\n";
    cout << "  12. Bottoms: Shorts=$15, Pants=$20, Skirts=$30\n";
    cout << "  13. Dresses: Casual=$20, Party=$30, Formal=$50\n";
}

float addToTotalOfGarments(int choice, float& total) 
{
    switch (choice) {
        case 1: total += 20; break; // T-Shirts: Casual=$20
        
        case 2: 
        {
            int shirtChoice;
            cout << "   Choose type: 1. Formal ($25) 2. Casual ($30) 3. Linen ($40): ";
            cin >> shirtChoice;
            if (shirtChoice == 1) total += 25;    // Formal Shirt
            else if (shirtChoice == 2) total += 30; // Casual Shirt
            else if (shirtChoice == 3) total += 40; // Linen Shirt
            break;
        }
        case 3: {
            int pantsChoice;
            cout << "   Choose type: 1. Jeans ($30) 2. Chinos ($40) 3. Trousers ($50): ";
            cin >> pantsChoice;
            if (pantsChoice == 1) total += 30;    // Jeans
            else if (pantsChoice == 2) total += 40; // Chinos
            else if (pantsChoice == 3) total += 50; // Trousers
            break;
        }
        case 4: {
            int suitChoice;
            cout << "   Choose type: 1. Dress Pants ($60) 2. Waistcoat ($150): ";
            cin >> suitChoice;
            if (suitChoice == 1) total += 60;    // Dress Pants
            else if (suitChoice == 2) total += 150; // Waistcoat
            break;
        }
        case 5: {
            int outerwearChoice;
            cout << "   Choose type: 1. Jackets ($50) 2. Coats ($70) 3. Hoodies ($100): ";
            cin >> outerwearChoice;
            if (outerwearChoice == 1) total += 50;  // Jackets
            else if (outerwearChoice == 2) total += 70; // Coats
            else if (outerwearChoice == 3) total += 100; // Hoodies
            break;
        }
        case 6: {
            int womensTopChoice;
            cout << "   Choose type: 1. Tank Tops ($15) 2. T-Shirts ($30): ";
            cin >> womensTopChoice;
            if (womensTopChoice == 1) total += 15;   // Tank Tops
            else if (womensTopChoice == 2) total += 30; // T-Shirts
            break;
        }
        case 7: {
            int dressChoice;
            cout << "   Choose type: 1. Casual ($40) 2. Formal ($40) 3. Evening Gowns ($100): ";
            cin >> dressChoice;
            if (dressChoice == 1) total += 40;    // Casual Dress
            else if (dressChoice == 2) total += 40; // Formal Dress
            else if (dressChoice == 3) total += 100; // Evening Gown
            break;
        }
        case 8: {
            int bottomChoice;
            cout << "   Choose type: 1. Skirts ($30) 2. Jeans ($20) 3. Leggings ($45): ";
            cin >> bottomChoice;
            if (bottomChoice == 1) total += 30;   // Skirts
            else if (bottomChoice == 2) total += 20; // Jeans
            else if (bottomChoice == 3) total += 45; // Leggings
            break;
        }
        case 9: {
            int womensOuterwearChoice;
            cout << "   Choose type: 1. Jackets ($60) 2. Coats ($50) 3. Cardigans ($120): ";
            cin >> womensOuterwearChoice;
            if (womensOuterwearChoice == 1) total += 60;  // Jackets
            else if (womensOuterwearChoice == 2) total += 50; // Coats
            else if (womensOuterwearChoice == 3) total += 120; // Cardigans
            break;
        }
        case 10: {
            int accessoryChoice;
            cout << "   Choose type: 1. Hats ($10) 2. Jewelry ($50): ";
            cin >> accessoryChoice;
            if (accessoryChoice == 1) total += 10;   // Hats
            else if (accessoryChoice == 2) total += 50; // Jewelry
            break;
        }
        case 11: {
            int kidsTopChoice;
            cout << "   Choose type: 1. T-Shirts ($15) 2. Shirts ($10) 3. Sweaters ($25): ";
            cin >> kidsTopChoice;
            if (kidsTopChoice == 1) total += 15;   // T-Shirts
            else if (kidsTopChoice == 2) total += 10; // Shirts
            else if (kidsTopChoice == 3) total += 25; // Sweaters
            break;
        }
        case 12: {
            int bottomChoiceKid;
            cout << "   Choose type: 1. Shorts ($15) 2. Pants ($20) 3. Skirts ($30): ";
            cin >> bottomChoiceKid;
            if (bottomChoiceKid == 1) total += 15;    // Shorts
            else if (bottomChoiceKid == 2) total += 20; // Pants
            else if (bottomChoiceKid == 3) total += 30; // Skirts
            break;
        }
        case 13: {
            int dressChoiceKid;
            cout << "   Choose type: 1. Casual ($20) 2. Party ($30) 3. Formal ($50): ";
            cin >> dressChoiceKid;
            if (dressChoiceKid == 1) total += 20;    // Casual Dress
            else if (dressChoiceKid == 2) total += 30; // Party Dress
            else if (dressChoiceKid == 3) total += 50; // Formal Dress
            break;
        }
        default: cout << "Invalid choice\n"; break;
    }
    return total;
}
// Khawaja Adnan make add below it shoe function

 void groceryMenu() {
    cout << "Welcome to Grocery Store\n";
    cout << "Menu:\n";
    cout << "Fruits:\n";
    cout << "1. Apples ($3 each)\n";
    cout << "2. Bananas ($2 each)\n";
    cout << "3. Oranges ($3 each)\n";
    cout << "Vegetables:\n";
    cout << "4. Potatoes ($1 per kg)\n";
    cout << "5. Tomatoes ($2 per kg)\n";
    cout << "6. Carrots ($3 per kg)\n";
    cout << "Dairy:\n";
    cout << "7. Milk ($3 per liter)\n";
    cout << "8. Cheese ($5 per pack)\n";
    cout << "9. Butter ($6 per pack)\n";
    cout << "Snacks:\n";
    cout << "10. Chips ($3 per bag)\n";
    cout << "11. Cookies ($4 per pack)\n";
    cout << "Beverages:\n";
    cout << "12. Water ($1 per bottle)\n";
    cout << "13. Juice ($3 per bottle)\n";
    cout << "Bakery:\n";
    cout << "14. Bread ($2 per loaf)\n";
    cout << "15. Croissants ($5 per pack)\n";
}
int grocerymain() {
    int grocerytotal = 0;  // Total bill
    int choice;     // User's choice
    int quantity;   // Quantity of items
    char moreItems; // Ask if the user wants to buy more

    do {
        groceryMenu();
        bool validChoice = false; // Flag to validate user choice

        // Keep asking until user enters a valid choice
        while (!validChoice) {
            cout << "Enter the item number you want to buy: ";
            cin >> choice;

            if (choice >= 1 && choice <= 15) {
                validChoice = true; // Valid choice
            } else {
                cout << "Invalid choice. Please select a valid item number.\n";
            }
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        // Add cost based on user choice
        if (choice == 1)     grocerytotal+= 3 * quantity;    // Apples
        else if (choice == 2)grocerytotal+= 2 * quantity; // Bananas
        else if (choice == 3)grocerytotal+= 3 * quantity; // Oranges
        else if (choice == 4)grocerytotal+= 1 * quantity; // Potatoes
        else if (choice == 5)grocerytotal+= 2 * quantity; // Tomatoes
        else if (choice == 6)grocerytotal+= 3 * quantity; // Carrots
        else if (choice == 7)grocerytotal+= 3 * quantity; // Milk
        else if (choice == 8)grocerytotal+= 5 * quantity; // Cheese
        else if (choice == 9)grocerytotal+= 6 * quantity; // Butter
        else if (choice == 10)grocerytotal += 3 * quantity; // Chips
        else if (choice == 11)grocerytotal += 4 * quantity; // Cookies
        else if (choice == 12)grocerytotal += 1 * quantity; // Water
        else if (choice == 13)grocerytotal += 3 * quantity; // Juice
        else if (choice == 14)grocerytotal += 2 * quantity; // Bread
        else if (choice == 15) grocerytotal += 5 * quantity; // Croissants

        cout << "Current Total: $" << grocerytotal << "\n";
        cout << "Do you want to buy more items? (y/n): ";
        cin >> moreItems;

    } while (moreItems == 'y' || moreItems == 'Y');

    cout << "Thank you for shopping! Your total bill is: $" << grocerytotal << endl;
    return grocerytotal;
}



//floor selection menu
int floorselection_MENU() 
                   {
                            int floorChoice;
                            do {
                                cout << "Select the floor*" << endl;
                                cout << "1. Parking Area (basement)" << endl;
                                cout << "2. 1st floor" << endl;
                                cout << "3. 2nd floor" << endl;
                                cout << "4. 3rd floor" << endl;
                                cin >> floorChoice;

                                if (floorChoice < 1 || floorChoice > 4)
                                        {
                                            cout << "Invalid floor choice. Please select from available floors.\n";
                                        }
                            } 
                            while (floorChoice < 1 || floorChoice > 4);

                            cout << "You have selected floor " << floorChoice << ".\n";
                            return floorChoice;
                   }
                   //aurangzeb add below this parking function.
                   // add kar deya ab our keya kar na hai



void displayMenu() {
    cout << "****** Do you want to use parking? ******" << endl;
    cout << "1. Yes, want to use parking." << endl;
    cout << "2. Exit" << endl;
}

 void displayChargeConditions() {
    cout << "\n****** Parking Charges Conditions ******" << endl;
    cout << "1. Parking charges are free for the first 2 hours." << endl;
    cout << "2. After 2 hours, each additional hour up to 5 hours costs $5 per hour." << endl;
    cout << "3. After 5 hours, each additional hour costs $10 per hour." << endl;
}

float Parking_Expences() {
    int vehicles, hours, cost, choice;
    int totalParkingCost = 0;  // Variable to store the total cost of parking
    while (true) {
        displayMenu();
        cout << "Please select an option: ";
        cin >> choice;

        if (choice == 1) {
            displayChargeConditions();
            cout << "\nEnter the number of vehicles: ";
            cin >> vehicles;

            

            for (int i = 1; i <= vehicles; i++) {
                cout << "Enter hours for vehicle " << i << ": ";
                cin >> hours;

                if (hours <= 2) {
                    cout << "Parking charges are free for vehicle " << i << "." << endl;
                    cost = 0;
                } else if (hours <= 5) {
                    cost = (hours - 2) * 5;
                    cout << "Parking charges for vehicle " << i << " are: $" << cost << "."<< endl;
                } else {
                    cost = (hours - 5) * 10 + (3 * 5);  // 3 hours at 5 units each
                    cout << "Parking charges for vehicle " << i << " are: $" << cost << "." << endl;
                }

                totalParkingCost += cost;  // Add current vehicle's charge to total
            }

            cout << "\nTotal parking charges for all vehicles: $" << totalParkingCost << "." << endl;

        } else if (choice == 2) {
            cout << "Exiting the program." << endl;
            cout<<"parking coast is: $"<<totalParkingCost<<endl;
            break;
        } else {
            cout << "Invalid option. Please select again." << endl;
        }
    }

    return totalParkingCost;
}

// add the cosmetics Store 
void cosmeticsMenu() {
    cout << "Welcome to Cosmetics Store\n";
    cout << "Menu:\n";
    cout << "Face Care:\n";
    cout << "1. Face Wash ($10 each)\n";
    cout << "2. Moisturizer ($20 each)\n";
    cout << "3. Sunscreen ($15 each)\n";
    cout << "Hair Care:\n";
    cout << "4. Shampoo ($8 per bottle)\n";
    cout << "5. Conditioner ($10 per bottle)\n";
    cout << "6. Hair Oil ($12 per bottle)\n";
    cout << "Makeup:\n";
    cout << "7. Lipstick ($15 each)\n";
    cout << "8. Foundation ($25 each)\n";
    cout << "9. Mascara ($18 each)\n";
    cout << "Perfumes:\n";
    cout << "10. Body Spray ($20 per bottle)\n";
    cout << "11. Perfume ($50 per bottle)\n";
    cout << "Nail Care:\n";
    cout << "12. Nail Polish ($5 per bottle)\n";
    cout << "13. Nail Polish Remover ($8 per bottle)\n";
    cout << "Beauty Tools:\n";
    cout << "14. Makeup Brushes ($30 per set)\n";
    cout << "15. Hair Straightener ($60 each)\n";
}

int Cosmeticsmain() {
    int CosmeticsTotal = 0;  // Total bill
    int choice;     // User's choice
    int quantity;   // Quantity of items
    char moreItems; // Ask if the user wants to buy more

    do {
        cosmeticsMenu();
        bool validChoice = false; // Flag to validate user choice

        // Keep asking until user enters a valid choice
        while (!validChoice) {
            cout << "Enter the item number you want to buy: ";
            cin >> choice;

            if (choice >= 1 && choice <= 15) {
                validChoice = true; // Valid choice
            } else {
                cout << "Invalid choice. Please select a valid item number.\n";
            }
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        // Add cost based on user choice
        if (choice == 1)        CosmeticsTotal += 10 * quantity;    // Face Wash
        else if (choice == 2)   CosmeticsTotal += 20 * quantity; // Moisturizer
        else if (choice == 3)   CosmeticsTotal += 15 * quantity; // Sunscreen
        else if (choice == 4)   CosmeticsTotal += 8 * quantity;  // Shampoo
        else if (choice == 5)   CosmeticsTotal += 10 * quantity; // Conditioner
        else if (choice == 6)   CosmeticsTotal += 12 * quantity; // Hair Oil
        else if (choice == 7)   CosmeticsTotal += 15 * quantity; // Lipstick
        else if (choice == 8)   CosmeticsTotal += 25 * quantity; // Foundation
        else if (choice == 9)   CosmeticsTotal += 18 * quantity; // Mascara
        else if (choice == 10)  CosmeticsTotal  += 20 * quantity; // Body Spray
        else if (choice == 11)  CosmeticsTotal  += 50 * quantity; // Perfume
        else if (choice == 12)  CosmeticsTotal  += 5 * quantity;  // Nail Polish
        else if (choice == 13)  CosmeticsTotal  += 8 * quantity;  // Nail Polish Remover
        else if (choice == 14)  CosmeticsTotal  += 30 * quantity; // Makeup Brushes
        else if (choice == 15)  CosmeticsTotal  += 60 * quantity; // Hair Straightener

        cout << "Current Total: $" << CosmeticsTotal<< "\n";
        cout << "Do you want to buy more items? (y/n): ";
        cin >> moreItems;

    } while (moreItems == 'y' || moreItems == 'Y');

    cout << "Thank you for shopping! Your total bill is: $" <<CosmeticsTotal<< endl;
    return CosmeticsTotal;
}
// this change by keya name hai os ka 

// now see this 


void shoesMenu() {
    cout << "Welcome to the Shoes Store\n";
    cout << "Menu:\n";
    cout << "1. Sneakers ($60)\n";
    cout << "2. Formal Shoes ($100)\n";
    cout << "3. Boots ($150)\n";
    cout << "4. Sandals ($20)\n";
    cout << "5. Casual Shoes ($50)\n";
}
float ShoeStoremain() {
    float ShoesTotal = 0;  // Total bill
    int choice;     // User's choice
    int quantity;   // Quantity of items
    char moreItems; // Ask if the user wants to buy more

    do {
        shoesMenu();
        bool validChoice = false; // Flag to validate user choice

        // Keep asking until user enters a valid choice
        while (!validChoice) {
            cout << "Enter the item number you want to buy: ";
            cin >> choice;

            if (choice >= 1 && choice <= 5) {
                validChoice = true; // Valid choice
            } else {
                cout << "Invalid choice. Please select a valid item number.\n";
            }
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        // Add cost based on user choice
        if (choice == 1)        ShoesTotal += 60 * quantity;    // Sneakers
        else if (choice == 2)   ShoesTotal += 100 * quantity;   // Formal Shoes
        else if (choice == 3)   ShoesTotal += 150 * quantity;   // Boots
        else if (choice == 4)   ShoesTotal += 20 * quantity;    // Sandals
        else if (choice == 5)   ShoesTotal += 50 * quantity;    // Casual Shoes

        cout << "Current Total: $" << ShoesTotal << "\n";
        cout << "Do you want to buy more items? (y/n): ";
        cin >> moreItems;

    } while (moreItems == 'y' || moreItems == 'Y');

    cout << "Thank you for shopping! Your total bill is: $" << ShoesTotal << endl;
    return ShoesTotal;
}

void firstFloorDetails(double &budget)
{
    cout << "Select the section where you want to go:\n";
    cout << "1. Garments\n";
    cout << "2. Shoes\n";
    cout << "3. Cosmetics\n"; 
    cout << "4. Grocery\n";
    cout << "5. Fruits\n";   
    int sectionSelection;
    cin >> sectionSelection;

    switch (sectionSelection) {
        case 1: 
        {
            float garmenttotal = 0;
            int choice;
            garmentsManew();
            cout << "Please select an item by number (0 to finish): ";
            cin >> choice;
    
            while (choice != 0) {
                addToTotalOfGarments(choice,  garmenttotal);
                cout << "Current total: $" <<  garmenttotal << "\n";
                cout << "Please select another item (0 to finish): ";
                cin >> choice;
            }
    
            cout << "Final total for your selection: $" << garmenttotal<< "\n";
            if ( garmenttotal > budget) {
                cout << "Your total exceeds your budget by $" << garmenttotal - budget << ". You can't afford this.\n";
            } else {
                budget -=  garmenttotal;
                cout << "Purchase successful! Remaining budget: $" << budget << "\n";
            }
            break;
            
        }
        case 2:
        {
            cout << "Welcome to the Shoes Section.\n";

            break;
        }
        default:
            cout << "Wrong section choice, please select from the above options.\n";
            break;
    }
}

int  main()
{   //variables used in main function
        double budget;

    cout << "*Welcome To Comprehensive Shopping Mall! Manage your calculations*\n";
                       //calling to user guide function
  UserGuide();
 //This is used to input budget

  cin >> budget;
  cout << "Your budget is: $" << budget << "\n";
  //floor selection menu
          int selected_floor = floorselection_MENU();
                 
  //floor choice switch case

   switch (selected_floor) {
        case 1: {
            cout << "Welcome to the basement(Parking Area).\n";
            float parkingCost = Parking_Expences();
            break;
        }
        default:
            cout << "";
            break;
        case 2: {
            cout << "Welcome to the first floor.\n";
            firstFloorDetails(budget);
            break;
        }
        
    }
    

    return 0;
}
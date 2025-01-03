#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//hgkudiytgchj
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
void UserGuide()
 {
                     cout<<" Parking area Basement.\n";
                  
                     cout<<"1st floor sections: (Play a Guess number game ro get discount on Cosmetics)\n";
                     cout<<"                 (Garments, Shoes, Cosmestics, Grocery,Fruits ).\n";
                  
                     cout<<"2nd floor sections:\n";
                     cout<<"                 (Fast foods special offer,ChyKhana, IceCream ,Grocery, Dry Fruits). \n";
                  
                     cout<<"3rd floor sections :\n";
                     cout<<"                    (Children play area, Throwing Ball Game).\n";
                  
                     cout<<"4th floor sections;\n";
                     cout<<"                   (Garments, Shoes, Sports Equepments ).\n";
                  
                     cout<<"You can Manage your calculations by entering your budget \n";
                  
                     cout<<"enter your budget:$ ";
                  
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
void addToTotal(int choice, int& total) {
    switch (choice) {
        case 1: total += 20; break;
        case 2: 
            int shirtChoice;
            cout << "   Choose type: 1. Formal 2. Casual 3. Linen: ";
            cin >> shirtChoice;
            if (shirtChoice == 1) total += 25;
            else if (shirtChoice == 2) total += 30;
            else if (shirtChoice == 3) total += 40;
            break;
        case 3: 
            int pantsChoice;
            cout << "   Choose type: 1. Jeans 2. Chinos 3. Trousers: ";
            cin >> pantsChoice;
            if (pantsChoice == 1) total += 30;
            else if (pantsChoice == 2) total += 40;
            else if (pantsChoice == 3) total += 50;
            break;
         case 4: total += 60; break; // Dress Pants
         case 5: total += 70; break; // Coats
         case 6: total += 15; break; // Tank Tops
         case 7: total += 40; break; // Casual Dresses
         case 8: total += 30; break; // Skirts
         case 9: total += 60; break; // Jackets
         case 10: total += 10; break; // Hats
         case 11: total += 15; break; // T-Shirts
         case 12: total += 15; break; // Shorts
         case 13: total += 20; break; // Casual Kid's Dresses
         default: cout << "Invalid choice\n"; break;
    }
}  
void firstFloorDetails()
{
                                       cout<<"select the section where you want to go.\n";
	                                   cout<<"1. garments\n";
	                                   cout<<"2.Shoes\n";
                                       cout<<"3.Cosmetics\n"; 
	                                   cout<<"4.Grocery\n";
                                       cout<<"5.Fruits\n";   
	int sectionSelection;
	cin>>sectionSelection;

	switch (sectionSelection)
	{
	case 1: 
	   {

        {
                int total = 0;
                int choice;
    
                garmentsManew();
    
                   cout << "Please select an item by number (0 to finish): ";
                   cin >> choice;
    
                   while (choice != 0)
                {
                   addToTotal(choice, total);
                   cout << "Current total: $" << total << "\n";
                   cout << "Please select another item (0 to finish): ";
                   cin >> choice;
                }
    
           cout << "Final total: $" << total << "\n";
    
              // return 0;
        }
		break;
	
	default:
	{
		cout<<"Wrong section choice please select from above ";
	}
		break;
	}




 }
}

int main()



{
	double budget;
	cout<<"Welcome To comprehensive Shopping Mall & Manage your calculations \n";
	UserGuide();
	cin>>budget;
	cout<<"Select the floor (1,2,3,4):";
	
    int floorChoice;
	cin>>floorChoice;
	switch (floorChoice)
	{
		case 1:
		{
			cout<<"WellCome on the first floor";
			firstFloorDetails();

			break;
		}
	
	
	}

}



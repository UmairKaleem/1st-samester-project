
// // void Game()
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
// // 	// return 0;
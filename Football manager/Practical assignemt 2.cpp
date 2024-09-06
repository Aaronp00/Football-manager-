#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string.h>
#include <string>


using namespace std;

class staff {
	
public:
	string acName,hcName, phName ;
	string acPhoneNumber,hcPhoneNumber,phPhoneNumber;
	string acEmail,hcEmail,phEmail;
	string CoachExpert;
	string PhysioExpert;
	string Headcoach;

	   void CreateAssistantCoach() {
		cout << "Assistant Coaches Name:" << endl;
		cin >> acName;

		cout << "Assistant Coaches email:" << endl;
		cin >> acEmail  ;

		cout << "Assistant Coaches Phone Number:" << endl;
		cin >> acPhoneNumber  ;

		cout << "Assistant Coaches Expertise:" << endl;
		cin >> CoachExpert  ;

		
	   }

	   void PrintAssistantCoach() {

		cout << "********** ASSISTANT COACH **********" << endl << endl;

		cout << "Name:" << acName << endl;
		cout << "Email address:" << acEmail << endl;
		cout << "Contact Number:" << acPhoneNumber << endl;
		cout << "Expertise:" << CoachExpert << endl << endl;
	   }
  


	void CreatePhysio() {
		cout << "Physio's Name:" << endl;
		cin >> phName ;

		cout << "Physio's email:" << endl;
		cin >> phEmail ;

		cout << "Physio's Phone Number:" << endl;
		cin >> phPhoneNumber  ;

		cout << "Physio's Expertise:" << endl;
		cin >> PhysioExpert ;
	}

	void PrintPhysio() {

		cout << "********** PHYSIO **********" << endl << endl;

		cout << "Name:" << phName << endl;
		cout << "Email address:" << phEmail << endl;
		cout << "Contact Number:" << phPhoneNumber << endl;
		cout << "Expertise:" << PhysioExpert << endl << endl;
	}
		
	

	void CreateHeadCoach() {
		cout << "Head Coaches Name:" << endl;
		cin >> hcName;

		cout << "Head Coaches email:" << endl;
		cin >> hcEmail ;

		cout << "Head Coaches Phone Number:" << endl;
		cin >> hcPhoneNumber ;

	}


	void PrintHeadCoach (){
		cout<< "********** HEAD COACH **********" << endl << endl;
		cout << "Name:" << hcName << endl;
		cout << "Email address:" << hcEmail << endl;
		cout << "Contact Number:" << hcPhoneNumber << endl << endl;
	}
};

class Players {
 
public: 
   string PlayerName;
   string PlayerPosition;
   string AverageRating;
   string Availability;
   string Injury;
   string Result ;



	void CreatePlayer()
	{
		cout << "Players Name:" << endl;
		cin >> PlayerName;
		cout << "players Position(ST= STRIKER/MID= MIDFILDER/DEF=DEFENDER):" << endl;
		cin >> PlayerPosition;
		cout << "Average Rating of player (1-10):" << endl;
		cin >> AverageRating;
		cout << " Players avalibility:" << endl;
		cin >> Availability;
		cout << "Is the player injured (YES=Y / No = N ):" << endl;
		cin >> Injury;



	}


		void PrintPlayer() 
		{
			cout << "********** NEW PLAYER **********" << endl << endl;
			cout << "Name:" << PlayerName << endl;
			cout << "players Position:" << PlayerPosition << endl;
			cout << "Average Rating:" << AverageRating << endl;
			cout << "Avalibility:" << Availability << endl;
			cout << "Injured:" << Injury << endl;
		}
};

class Team{
	
	
public:
	string RecentMatch;
	string Headcoach;
	void CreateTeam() {
		cout << " what recent matches have you played " << endl;
		cin>>RecentMatch;
		cout << " The team Head Coach :" << endl;
		cin>>Headcoach;
	}
		void PrintTeam()
		{
			cout << "The recent matches:" << RecentMatch << endl;
			cout << "The Head coach:" << Headcoach << endl;
		}


	
};

class MatchDay {
public:
	string Oponent;
	string OponentScore;
	string  TeamScore;
	string ACformatch;
	string Pformatch;
	string TeamCaptain;
	

	


	void CreateMatch()
	{
		cout << " Who is your oponent ?:" << endl;
		cin >> Oponent ;
		cout << "The Physio for the game :" << endl;
		cin >> Pformatch;
		cout << "The Assistant Coach for the game :" << endl;
		cin >> ACformatch ;
		cout << "The Team captain for the match:"<<endl;
		cin >> TeamCaptain;
		cout << " How many goals did the oponments score:" << endl;
		cin >> OponentScore ;
		cout << "How many goals did the team score :" << endl;
		cin >> TeamScore ;
		 
		 
	}


	void PrintMatch() {


		{
			cout << "********** MATCH DAY **********" << endl;
			cout << "The Oponent:" << Oponent << endl;
			cout << "The Physio:" << Pformatch << endl;
			cout << "The Assistant Coach " << ACformatch << endl;
			cout << "The Team captain" << TeamCaptain << endl;
			cout << " After 90 minutesof football, the game came to a " << OponentScore << endl;

		}
	}



	void finish() {
		cout << "***************************************" << endl;
		cout << "Thankyou for using football manager" << endl;
		cout << " ***************************************" << endl;

	}

	



};
	

string TeamName;

int main() {
	

	cout << "  Enter team name  "  <<  endl;
	cin >> TeamName ;

	int B;
	string i;
	string back;

	
   { 
	A://
		system("cls");//
		//
	cout << "            WELCOME TO " << TeamName << " FOOTBALL CLUB!!!!!!" << endl << endl;
	cout << "************************************************************************************************" << endl;
	cout << "INFORMATION " << endl;
	cout << "      1 : Add Player " << endl;
	cout << "      2 : Information of Players " << endl;
	cout << "      3 : Add Team Information " << endl;
	cout << "      4 : Add new Support Staff " << endl;
	cout << "      5 : Information on support Staff" << endl;
	cout << "      6 : Add a match" << endl;
	cout << "      7 : Information of the Match " << endl;
	cout << "      0 : Save & Quite " << endl << endl;
	cout << "************************************************************************************************" << endl;
	cin >> B;
	}
	
	
	

	if (B == 1)
	
	{
		system("cls");
		//
		{	Players get ;
		string PlayerName;
		string PlayerPosition;
		string AverageRating;
		string Availability;
		string Injury;
		string Result;

	//
		cout << "Players Name:" << endl;
		cin >> PlayerName;
		cout << "players Position(ST= STRIKER/MID= MIDFILDER/DEF=DEFENDER):" << endl;
		cin >> PlayerPosition;
		cout << "Average Rating of player (1-10):" << endl;
		cin >> AverageRating;
		cout << " Players avalibility:" << endl;
		cin >> Availability;
		cout << "Is the player injured (YES=Y / No = N ):" << endl;
		cin >> Injury;

		//
	  fstream CreatePlayer;
	  CreatePlayer.open("PLAYERS.txt",ios::app);
	  CreatePlayer<< "********** NEW PLAYER **********" << endl << endl;
	  CreatePlayer << "Name:" << PlayerName << endl;
	  CreatePlayer << "players Position:" << PlayerPosition << endl;
	  CreatePlayer << "Average Rating:" << AverageRating << endl;
	  CreatePlayer << "Avalibility:" << Availability << endl;
	  CreatePlayer << "Injured:" << Injury << endl;
	    
	  CreatePlayer.close();  

  }
	
		cout << "TYPE back to return to menu" << endl;
		string back;
		cin >> back;
		if (back == "back")
		{
			goto A;
		}
   }
  
	

	
		 
	else  if (B == 2)
	{system("cls");
		{
		
		ifstream readfile("PLAYERS.txt");
		if (readfile.is_open()) 
		{
			
				
				
				
				readfile.close();
		}


		}


		
		
		
		
	    
		
		}

	    
			cout << "TYPE back to return to menu" << endl;
			string back;
			cin >> back;
			if
				(back == "back")
			{
				goto A;
			}


	   


	  }




	else if (B == 3)
	{
		system("cls");
       
		{    Team b;
		  string RecentMatch;
		  string Headcoach;

			cout << " what recent matches have you played " << endl;
            cin >> RecentMatch;
          cout << " The team Head Coach :" << endl;
           cin >> Headcoach;

		   fstream CreateTeam;
		    CreateTeam.open("TEAM.txt",ios::app);

			CreateTeam << "The recent matches:" << RecentMatch << endl;
			CreateTeam << "The Head coach:" << Headcoach << endl;

			CreateTeam.close();
           
        }
		
		cout << "TYPE back to return to menu" << endl;
		string back;
		cin >> back;
		if(back == "back")
		{
			goto A;
		}


	}
		




	else if (B == 4) 
  {
	 system("cls");

	 {staff a;
	 string acName, hcName, phName;
	 string acPhoneNumber, hcPhoneNumber, phPhoneNumber;
	 string acEmail, hcEmail, phEmail;
	 string CoachExpert;
	 string PhysioExpert;
	 string Headcoach;
	 //
	 cout << "Assistant Coaches Name:" << endl;
	 cin >> acName;
	 cout << "Assistant Coaches email:" << endl;
	 cin >> acEmail;
	 cout << "Assistant Coaches Phone Number:" << endl;
	 cin >> acPhoneNumber;
	 cout << "Assistant Coaches Expertise:" << endl;
	 cin >> CoachExpert;
	 //

	 cout << "Physio's Name:" << endl;
	 cin >> phName;
	 cout << "Physio's email:" << endl;
	 cin >> phEmail;
	 cout << "Physio's Phone Number:" << endl;
	 cin >> phPhoneNumber;
	 cout << "Physio's Expertise:" << endl;
	 cin >> PhysioExpert;
	 //

	 cout << "Head Coaches Name:" << endl;
	 cin >> hcName;
	 cout << "Head Coaches email:" << endl;
	 cin >> hcEmail;
	 cout << "Head Coaches Phone Number:" << endl;
	 cin >> hcPhoneNumber;



	 

	 fstream CreateSuppotStaff;
	 CreateSuppotStaff.open("SUPPORTSTAFF.txt", ios::app);
	 //
	 CreateSuppotStaff << "********** ASSISTANT COACH **********" << endl << endl;
	 CreateSuppotStaff << "Name:" << acName << endl;
	 CreateSuppotStaff << "Email address:" << acEmail << endl;
	 CreateSuppotStaff << "Contact Number:" << acPhoneNumber << endl;
	 CreateSuppotStaff << "Expertise:" << CoachExpert << endl << endl;
	 //
	 CreateSuppotStaff << "********** PHYSIO **********" << endl << endl;
	 CreateSuppotStaff << "Name:" << phName << endl;
	 CreateSuppotStaff << "Email address:" << phEmail << endl;
	 CreateSuppotStaff << "Contact Number:" << phPhoneNumber << endl;
	 CreateSuppotStaff << "Expertise:" << PhysioExpert << endl << endl;
	//
	 CreateSuppotStaff << "********** HEAD COACH **********" << endl << endl;
	 CreateSuppotStaff << "Name:" << hcName << endl;
	 CreateSuppotStaff << "Email address:" << hcEmail << endl;
	 CreateSuppotStaff << "Contact Number:" << hcPhoneNumber << endl << endl;

	  
	 CreateSuppotStaff.close();
     }
		cout << "TYPE back to return to menu" << endl;
		string back;
		cin >> back;
		if
			(back == "back")
		{
			goto A;
		}	
		 
  }
	




	else if (B == 5)	
	
 { 

	system("cls");

	{staff a;
	    
	   ifstream cin;
		a.PrintAssistantCoach();
		a.PrintPhysio();
		a.PrintHeadCoach();

	   cin.open("SUPPORTSTAFF.txt");
	   while (cin.eof());
	}
	
		
	


	
		cout << "TYPE back to return to menu" << endl;
		string back;
		cin >> back;
		if
			(back == "back")
		{
			goto A;
		}


	
  }

	



	else if (B==6)
	{
		
		system("cls");

		

		{MatchDay b;

		string Oponent;
		string OponentScore;
		string  TeamScore;
		string ACformatch;
		string Pformatch;
		string TeamCaptain;
		

		//
		

		

		cout << " Who is your oponent ?:" << endl;
		cin >> Oponent;
		cout << "The Physio for the game :" << endl;
		cin >> Pformatch;
		cout << "The Assistant Coach for the game :" << endl;
		cin >> ACformatch;
		cout << "The Team captain for the match:" << endl;
		cin >> TeamCaptain;
		cout << " How many goals did the oponments score:" << endl;
		cin >> OponentScore;
		cout << "How many goals did the team score :" << endl;
		cin >> TeamScore;

		//
		


		fstream CreateMatch;
		CreateMatch.open("MATCHDAY.txt", ios::app);
		CreateMatch << "********** MATCH DAY **********" << endl;
		CreateMatch << "The Oponent:" << Oponent << endl;
		CreateMatch << "The Physio:" << Pformatch << endl;
		CreateMatch << "The Assistant Coach " << ACformatch << endl;
		CreateMatch << "The Team captain" << TeamCaptain << endl;
		CreateMatch << " After 90 minutesof football, the game came to a score of " << OponentScore << "V" << TeamScore << endl;

		
		CreateMatch.close();

		}
		

		
			cout << "TYPE back to return to menu" << endl;
			string back;
			cin >> back;
			if
				(back == "back")
			{
				goto A;
			}
		
			
	}
	


	

	else if (B==7)
   {
		
		
	system("cls");

  {   MatchDay b;
	  b.PrintMatch();
	  ifstream cin;
	  cin.open("MATCHDAY.txt");
	  while (cin.eof());

  }
    
	   cout << "TYPE back to return to menu" << endl;
	   string back;
	   cin >> back;
	  if
		(back == "back")
	  {
		goto A;
	  }
	
    }


	else if (B == 0) 
	{
		system("cls");
		MatchDay b;
		b.finish();

		{
			return 0;
		}


	}


	
	 
	   

	

	   
	
  

	
	




		
		
	};
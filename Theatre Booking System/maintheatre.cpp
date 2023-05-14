#include "theatre.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
 
int main()
{
  /* The vector events is to store the booking added by the user */
  std::vector<Event*> events;
  std::vector<Event*> eventLists;
  std::string menuNum = "-1";
  std::string musicUserName;
  std::string musicUserNum;
  std::string artistName;
  std::string musicDuration;
  std::string comedyUserName;
  std::string comedyUserNum;
  std::string comedianName;
  std::string comedyDuration;
  std::string filmUserName;
  std::string filmUserNum;
  std::string filmName;
  std::string dimension;
  std::string filmDuration;
  std::string eventList;
  int musicAvailable = 300;
  int comedyAvailable = 200;
  int filmAvailable = 200;
  int i = 0;
  int c , j, len;
  


/* This while loop will display the main menu*/
  while (menuNum != "0")
  {
    std::string optionNum = "-1";
    std::string menuBooking = "-1";
    std::cout << "\nTheatre Menu" << std::endl;
    std::cout << "Enter a number that matches the following option:" << std::endl;
    std::cout << "1 - Add a booking." << std::endl;
    std::cout << "2 - List all events." << std::endl;
    std::cout << "3 - List details and availability of a given event." << std::endl;
    std::cout << "4 - Save all the data to data.txt." << std::endl;
    std::cout << "5 - Load all the data from data.txt." << std::endl;
    std::cout << "0 - Exit." << std::endl;

    std::cout << "Choose an option:" << std::endl;
    std::cin >> menuNum;
    /* Validation in case the user enters the wrong number or letter by mistake.*/
    while (menuNum != "1" && menuNum != "2" && menuNum != "3" && menuNum != "4" && menuNum != "5" &&
	menuNum != "0"){
      std::cout << "Please Enter a valid number:" << std::endl;
      std::cin >> menuNum;
    }
    /* Menu to add a booking on an event*/
    if (menuNum == "1"){
      while (menuBooking != "0")
      {
        std::string cancelBooking = "-1";
        std::cout << "\nAdd Booking" << std::endl;
	    std::cout << "Enter a number that matches the following option:" << std::endl;
	    std::cout << "1 - Add booking for live music." << std::endl;
	    std::cout << "2 - Add booking for stand-up comedy." << std::endl;
	    std::cout << "3 - Add booking for film." << std::endl;
	    std::cout << "0 - Go back to main menu." << std::endl;

	    std::cout << "Choose an option:" << std::endl;
	    std::cin >> menuBooking;

    	while (menuBooking != "1" && menuBooking != "2" && menuBooking != "3" &&
    	    menuBooking != "0"){
    	  std::cout << "Please enter a valid number:" << std::endl;
    	  std::cin >> menuBooking;
    	}
        /* This will allow the user to enter the booking of someone for the live music event */
    	if (menuBooking == "1")
    	{   
    	    c = 0;
    	    
            std::cout << "Enter a username:" << std::endl;
            std::cin >> musicUserName;
            
            std::cout << "Enter a user number:" << std::endl;
            std::cin >> musicUserNum;
            
            std::cout << "Enter the name of the music artist or group:" << std::endl;
            std::cin >> artistName;
            
            std::cout << "Enter the duration of the live music in minute:" << std::endl;
            std::cin >> musicDuration;
            
            len = musicDuration.length();
            /* Validation in case the user types a character instead of a number
               Moreover, the user has to enter at least a 2 digit number*/
            while (c != len || len < 2){
                for(j = 0; j < len; j++){
                    if(musicDuration[j] >= '0' && musicDuration[j] <= '9')
                    {
                        c = c + 1;
                    }
                }
                if (c != len || len == 1){
                    std::cout << "Please enter a valid number:" << std::endl;
                    std::cin >> musicDuration;
                    len = musicDuration.length();
                    c = 0;
                }
            }
            
            /* This will tell the user whether to cancel the booking or not.*/
            while (cancelBooking != "0"){
                std::cout << "Cancel the booking?" << std::endl;
                std::cout << "1 - Yes" << std::endl;
                std::cout << "2 - No" << std::endl;
                std::cout << "Choose an option:" << std::endl;
                std::cin >> cancelBooking;

    	        while (cancelBooking != "1" && cancelBooking != "2" && cancelBooking != "0"){
    	            std::cout << "Please Enter a valid number:" << std::endl;
    	            std::cin >> cancelBooking;
    	        }
    	        /* If the user cancels the booking, it will redirect him/her to the booking menu.*/
                if (cancelBooking == "1"){
                    break;
                }
                /* If the user does not cancel the booking, the booking will be added to the vector
                 events, and it will display the booking added. */
                if (cancelBooking == "2"){
                    cancelBooking = "0";
                    std::cout << std::endl;
                    std::cout << "Booking added." << std::endl;                    
                    events.push_back(new Music(musicUserName, musicUserNum, artistName, musicDuration));
                    std::cout << events[i]->addBooking() << std::endl;
                    musicAvailable = musicAvailable - 1;
                    i = i + 1;
                }    	        
            }
    	}
        /* This will allow the user to enter the booking of someone for the stand-up comedy event. */
    	if (menuBooking == "2")
    	{   
    	    c = 0;
    	    
            std::cout << "Enter a username:" << std::endl;
            std::cin >> comedyUserName;
        
            std::cout << "Enter a user number:" << std::endl;
            std::cin >> comedyUserNum;
            
            std::cout << "Enter the name of the comedian:" << std::endl;
            std::cin >> comedianName;
            
            std::cout << "Enter the duration of the stand-up comedy in minute:" << std::endl;
            std::cin >> comedyDuration;

            len = comedyDuration.length();
            while (c != len || len < 2){
                for(j = 0; j < len; j++){
                    if(comedyDuration[j] >= '0' && comedyDuration[j] <= '9')
                    {
                        c = c + 1;
                    }
                }
                if (c != len || len == 1){
                    std::cout << "Please enter a valid number:" << std::endl;
                    std::cin >> comedyDuration;
                    len = comedyDuration.length();
                    c = 0;
                }
            }
            
            while (cancelBooking != "0"){
                std::cout << "Cancel the booking?" << std::endl;
                std::cout << "1 - Yes" << std::endl;
                std::cout << "2 - No" << std::endl;
                std::cout << "Choose an option:" << std::endl;
                std::cin >> cancelBooking;
    	        while (cancelBooking != "1" && cancelBooking != "2" && cancelBooking != "0"){
    	            std::cout << "Please Enter a valid number:" << std::endl;
    	            std::cin >> cancelBooking;
    	        }
                if (cancelBooking == "1"){
                    break;
                }
                if (cancelBooking == "2"){
                    cancelBooking = "0";
                    std::cout << std::endl;
                    std::cout << "Booking added." << std::endl;                    
                    events.push_back(new Comedy(comedyUserName, comedyUserNum, comedianName, comedyDuration));
                    std::cout << events[i]->addBooking() << std::endl;
                    comedyAvailable = comedyAvailable - 1;
                    i = i + 1;
                }
            }
            
    	}
        /* This will allow the user to enter the booking of someone for the film event */
        if (menuBooking == "3")
        {   
            c = 0;
            
            std::cout << "Enter a username:" << std::endl;
            std::cin >> filmUserName;
            
            std::cout << "Enter a user number:" << std::endl;
            std::cin >> filmUserNum;
            
            std::cout << "Enter the name of the film:" << std::endl;
            std::cin >> filmName;
            
            std::cout << "The film will be in 2D or 3D:" << std::endl;
            std::cin >> dimension;
            /* Validation to make sure that the user enters either 2D or 3D.*/
            while(dimension != "2D" && dimension != "3D"){
                std::cout << "Please Enter either 2D or 3D:" << std::endl;
                std::cin >> dimension;
            }
            
            std::cout << "Enter the duration of the film in minute:" << std::endl;
            std::cin >> filmDuration;

            len = filmDuration.length();
            while (c != len || len < 2){
                for(j = 0; j < len; j++){
                    if(filmDuration[j] >= '0' && filmDuration[j] <= '9')
                    {
                        c = c + 1;
                    }
                }
                if (c != len || len == 1){
                    std::cout << "Please enter a valid number:" << std::endl;
                    std::cin >> filmDuration;
                    len = filmDuration.length();
                    c = 0;
                }
            }
            

            
            while (cancelBooking != "0"){
                std::cout << "Cancel the booking?" << std::endl;
                std::cout << "1 - Yes" << std::endl;
                std::cout << "2 - No" << std::endl;
                std::cout << "Choose an option:" << std::endl;
                std::cin >> cancelBooking;
    	        while (cancelBooking != "1" && cancelBooking != "2" && cancelBooking != "0"){
    	            std::cout << "Please Enter a valid number:" << std::endl;
    	            std::cin >> cancelBooking;
    	        }
                if (cancelBooking == "1"){
                    break;
                }
                if (cancelBooking == "2"){
                    cancelBooking = "0";
                    std::cout << std::endl;  
                    std::cout << "Booking added." << std::endl;
                    events.push_back(new Film(filmUserName, filmUserNum, filmName, dimension, filmDuration));
                    std::cout << events[i]->addBooking() << std::endl;
                    filmAvailable = filmAvailable - 1;
                    i = i + 1;
                }
            }
        }
      }      
    }
    /* This will call the function printEvents from the class Event.*/
    if (menuNum == "2") {
        eventLists.push_back(new Event(eventList));
        eventLists[0]->printEvents(eventList);
 
    }
    /* This will display a menu to let the user choose which event details to print with its availability */
    if (menuNum == "3") {
        while (optionNum != "0")
        {
            std::cout << "\nEvent Details and availability" << std::endl;
            std::cout << "Enter a number that matches the following option: " << std::endl;
            std::cout << "1 - Details about live music." << std::endl;
            std::cout << "2 - Details about stand-up comedy." << std::endl;
            std::cout << "3 - Details about film." << std::endl;
            std::cout << "0 - Go back to main menu." << std::endl;
        	std::cout << "Choose an option:" << std::endl;
        	std::cin >> optionNum;
            while (optionNum != "1" && optionNum != "2" && optionNum != "3" &&
        	   optionNum != "0"){
                std::cout << "Please enter a valid number:" << std::endl;
                std::cin >> optionNum;
            }
            if (optionNum == "1"){
                std::cout << std::endl;
                std::cout << "Live music" << std::endl;
                std::cout << "The event is standing only with a capacity of 300 standings." << std::endl;
                std::cout << "Available standings: " << musicAvailable << std::endl;
                std::cout << std::endl;
            }
            if (optionNum == "2"){
                std::cout << std::endl;   
                std::cout << "Stand-up comedy" << std::endl;
                std::cout << "The event is seated and have allocated seating with a capacity of 200 seated." << std::endl;
                std::cout << "Available seats: " << comedyAvailable << std::endl;
                std::cout << std::endl;
            }
            if (optionNum == "3"){
                std::cout << std::endl;  
                std::cout << "Film" << std::endl;
                std::cout << "The event is seated and do not have allocated seating but can be either in 2D or 3D with a capacity of 200 seated." << std::endl;
                std::cout << "Available seats: " << filmAvailable << std::endl;
                std::cout << std::endl; 
            }
        }
    }
    /* This will create a file.
    It will also add all the bookings that were added by the user to the file.*/
    if (menuNum == "4"){
        ofstream writeBookingFile("data.txt");
        int b = 1;
        for(int k = 0; k < events.size(); k++){
            std::cout << std::endl;
            writeBookingFile << "Booking - " << b << "\n";
            writeBookingFile << events[k]->addBooking();
            writeBookingFile << "\n";
            b = b + 1;
        }
        writeBookingFile << "Standings available for live music: " << musicAvailable << "\n";
        writeBookingFile << "Seated available for stand-up comedy: " << comedyAvailable << "\n";
        writeBookingFile << "Seated available for film: " << filmAvailable << "\n";
        std::cout << "\nAll the data was added to data.txt." << std::endl;
        std::cout << std::endl;
        writeBookingFile.close();
    }
    /* This will display all the data in the file data.txt*/
    if (menuNum == "5"){
        std::string dataText;
        ifstream readBookingFile("data.txt");
        std::cout << std::endl;
        while (getline (readBookingFile, dataText)){
            std::cout << dataText << std::endl;
        }
        readBookingFile.close();
    }

  }
  
  
 for (Event* e : events)
    {
      delete e;
    }
  events.clear();
  
  
  for (Event* el : eventLists)
    {
        delete el;
    }
  eventLists.clear();
 
}

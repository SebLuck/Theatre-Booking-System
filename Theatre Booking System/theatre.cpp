#include "theatre.h"
#include <iostream>
#include <string>

Event::Event(std::string name)
{
  this->name = name;
}


Event::~Event()
{
}


/* This will list all the events*/
void Event::printEvents(std::string eventList){
  std::cout << std::endl;
  std::cout << "\nList of events:" << std::endl;
  std::cout << "1. Live music." << std::endl;
  std::cout << "2. stand-up comedy." << std::endl;
  std::cout << "3. Film." << std::endl;
  std::cout << std::endl;
}

Music::Music(std::string musicUserName, std::string musicUserNum,std::string artistName,
	     std::string musicDuration) : Event("Music")
{
  this->musicUserName = musicUserName;
  this->musicUserNum = musicUserNum;
  this->artistName = artistName;
  this->musicDuration = musicDuration;
}

Comedy::Comedy(std::string comedyUserName, std::string comedyUserNum,std::string comedianName,
	     std::string comedyDuration) : Event("Comedy")
{
  this->comedyUserName = comedyUserName;
  this->comedyUserNum = comedyUserNum;
  this->comedianName = comedianName;
  this->comedyDuration = comedyDuration;
}

Film::Film(std::string filmUserName, std::string filmUserNum, std::string filmName,
	     std::string dimension, std::string filmDuration) : Event("Film")
{
  this->filmUserName = filmUserName;
  this->filmUserNum = filmUserNum;
  this->filmName = filmName;
  this->dimension = dimension;
  this->filmDuration = filmDuration;
}

/* The function addBooking for the derived class Music*/

std::string Music::addBooking(){
    
    return  "Event name: live music \nUsername: " + musicUserName + "\n"
        + "User number: " + musicUserNum + "\n"
        + "Artist name: " + artistName + "\n"
        + "Duration: " + musicDuration + " minutes" + "\n";
}

/* The function addBooking for the derived class Comedy*/

std::string Comedy::addBooking(){
    
    return "Event name: stand-up comedy \nUsername: " + comedyUserName + "\n"
        + "User number: " + comedyUserNum + "\n"
        + "Comedian name: " + comedianName + "\n"
        + "Duration: " + comedyDuration + " minutes" + "\n";
}

/* The function addBooking for the derived class Film*/

std::string Film::addBooking(){
    
    return "Event name: film \nUsername: " + filmUserName + "\n"
        + "User number: " + filmUserNum + "\n"
        + "Film name: " + filmName + "\n"
        + "Dimension: " + dimension + "\n"
        + "Duration: " + filmDuration + " minutes" + "\n";
}


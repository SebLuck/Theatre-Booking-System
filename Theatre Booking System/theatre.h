#ifndef _THEATRE_H_
#define _THEATRE_H_
#include <iostream>
#include <string>

class Event{
  private:
      std::string name; 
      std::string eventList;
  public:
      Event(std::string name);
      virtual ~Event();
      virtual std::string addBooking() {return "Event";}
      void printEvents(std::string eventList);
  
};

class Music : public Event{
 private:
  std::string musicUserName;
  std::string musicUserNum;
  std::string artistName;
  std::string musicDuration;  
 public:
  Music(std::string musicUserName, std::string musicUserNum, std::string artistName, std::string musicDuration);
  std::string addBooking();
  
};

class Comedy : public Event {
 private:
  std::string comedyUserName;
  std::string comedyUserNum;
  std::string comedianName;
  std::string comedyDuration;
 public:
  Comedy(std::string comedyUserName, std::string comedyUserNum, std::string comedianName, std::string comedyDuration);
  std::string addBooking();
  
 };

class Film : public Event{
 private:
  std::string filmUserName;
  std::string filmUserNum;
  std::string filmName;
  std::string dimension;
  std::string filmDuration; 
 public:
  Film(std::string filmUserName, std::string filmUserNum, std::string filmName, std::string dimension, std::string filmDuration);
  std::string addBooking();
  
};

#endif

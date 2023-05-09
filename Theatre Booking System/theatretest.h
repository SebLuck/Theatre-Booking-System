#include <iostream>
#include <string>

std::string menu(std::string menuNum){
  if (menuNum == "1"){
    return "Valid input";
  }
  if (menuNum == "2"){
    return "Valid input";
  }
  if (menuNum == "3"){
    return "Valid input";
  }
  if (menuNum == "4"){
    return "Valid input";
  }
  if (menuNum == "5"){
    return "Valid input";
  }
  if (menuNum == "0"){
    return "Valid input";
  }
  if (menuNum != "1" && menuNum != "2" && menuNum != "3" && menuNum != "4" && menuNum != "5" &&
      menuNum != "0"){
    return "Invalid input";
  }
}

std::string bookingMenu(std::string menuBooking){
  if (menuBooking == "1"){
    return "Valid input";
  }
  if (menuBooking == "2"){
    return "Valid input";
  }
  if (menuBooking == "3"){
    return "Valid input";
  }
  if (menuBooking == "0"){
    return "Valid input";
  }
  if (menuBooking != "1" && menuBooking != "2" && menuBooking != "3" && menuBooking != "0"){
    return "Invalid input";
  }
}

std::string eventDuration(std::string duration){
    int c , j, len;
    len = duration.length();
   
    for(j = 0; j < len; j++){
      if(duration[j] >= '0' && duration[j] <= '9')
      {
      	c = c + 1;
      }
    }
    if (c == len && len >= 2){
      return "Valid input";
    }
    if (c != len || len == 1){
      return "Invalid input";
    }  
}

std::string filmDimension(std::string dimension){
  if(dimension != "2D" && dimension != "3D"){
    return "Invalid input";
      }else{
    return "Valid input";
  }
}



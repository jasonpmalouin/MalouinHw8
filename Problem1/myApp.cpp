
//By Jason Malouin
//Usage: ./ledApp <command>
//Commands: on, off, flash, status
#include<iostream>
#include<string>
#include "derek_LED.h"
using namespace std;
int main(int argc, char* argv[]){
   if(argc!=2){
	cout << "Usage is makeLEDs <command>" << endl;
        cout << "   command is one of: on, off, flash or status" << endl;
	cout << " e.g. makeLEDs flash" << endl;
	return 2;
   }
   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}

#!/bin/bash
echo "Building Application"
g++ -Wall derek_LED.cpp myBlink.cpp -o blinkApp
echo "Build Complete"

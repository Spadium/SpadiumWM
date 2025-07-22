#!/bin/sh
make all

_DISPLAY=:99

#Xephyr -br -ac -noreset -screen 1024x768 $_DISPLAY
DISPLAY=$_DISPLAY

exec ./a.out

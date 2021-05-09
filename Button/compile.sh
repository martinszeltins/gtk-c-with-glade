#!/bin/bash

gcc -Wno-format -o button.bin main.c -Wno-deprecated-declarations -Wno-format-security -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic

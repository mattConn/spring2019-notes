#!/bin/bash

# Matthew Connelly
# Runs Lab5 in bg for  10, 15, 20 and 30s and records time

echo Runnin lab5 program for 10s in background
time ./lab5 10 &

echo Runnin lab5 program for 15s in background
time ./lab5 15 &

echo Runnin lab5 program for 20s in background
time ./lab5 20 &

echo Runnin lab5 program for 30s in background
time ./lab5 30 &

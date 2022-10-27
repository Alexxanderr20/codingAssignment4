/*
Edward Alexander Munoz
CSE-1320-004
10.17.22
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "DrawTool.h"
#include "DrawTool.c"

int main(void)
{
  //char Delimiters = ",";
  //char *Token = NULL;
  // char point
  char *Delimiters = "(),";
  char *token = NULL;
  //char TokenPhrase[PHRASELEN] = {};
  char point[2] = {};
  char horizontal[2] = {};
  char vertical[2] = {};
  char quit[2] = {};
  char buf[25];
  int myMapSize = 0;
  int *myMapSizePtr = &myMapSize;
  char Map[MAXMAPSIZE][MAXMAPSIZE];

  InitializeMap(Map, myMapSizePtr);
  PrintInstructions();
  PrintMap(Map, myMapSize);

  printf("Enter draw command (enter Q to quit) ");
  fgets(buf, 25, stdin);


  // token = strtok(buf, "(),");
  // strcpy(quit, token);

  token = strtok(buf, "(),");
  strcpy(point, token);
  strtok(NULL, "(),");
  token = strtok(buf, "(),");
  strcpy(horizontal, token);
  strtok(NULL, "(),");

  token = strtok(buf, "(),");
  strcpy(vertical, token);

  printf("%s %s %s \n",  point, vertical, horizontal);



  // while(buf == Q)
  // {
  //
  // }
}

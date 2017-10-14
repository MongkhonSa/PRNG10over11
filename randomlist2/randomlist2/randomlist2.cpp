// randomlist1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "time.h"
#include <stdlib.h>

int main()
{
	int k = 0; // set k=0
	__int64 modulus = 4294967296;
	__int64 a = 1664525;
	__int64 c = 1013904223;
	//Numerical Recipes reference
	__int64 seed = 1057; //set seed initial 
	__int64 freq[101] = { 0 };//figured array to get frequency 100 array
	__int64 count = 0;//set count =0
	while (count <= 100000000000) {// loop until count = 10 ^ 11
		if (count % 1000000000== 0)//if count mod 10^9 =0
		{
			printf("%d\n", k);//print k figure k is percent 
			k = k + 1;// increase k by 1
		}
		seed = (a * seed + c) % modulus;// random number by linear congruential generator
		freq[seed % 101]++;//get random to freq array
		count++;// increase count by 1
	}
	FILE *fp; //set point file to fp
	fp = fopen("randomlist2.txt", "w"); //open file
	for (int i = 0; i < 101; i++) { //loop 100 to get data in txt
		fprintf(fp, "%d\n", freq[i]);
	}
	fclose(fp); //close file
	getchar(); // wait a key
}



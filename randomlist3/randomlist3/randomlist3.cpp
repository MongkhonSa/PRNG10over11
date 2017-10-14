#include "stdafx.h"
#include "time.h"
#include <stdlib.h>
// import library
int main()
{
	
	int k = 0; // set k=0
	__int64   x=3172,y=9814,z=20125; // initial nummber to random
	 double seed = 0;//seed initial
	// Some integer arithmetic required
	
	__int64 freq[101] = { 0 };//figured array to get frequency 100 array
	__int64 count = 0;//set count =0
	srand(time(NULL));// random by tim
	while (count <= 100000000000) {
		if (count % 1000000000 == 0)
		{
			printf("%d\n", k);
			k = k + 1;
		}
		x = rand() % 30000;
		y = rand() % 30000;
		z = rand() % 30000;
		//random x y z
		
		
		if (x < 0) { //if x below 0
			x = x + 30269; // set x= x-30269
		}
		x = 171 * (x % 177) - 2 * (x / 177); // set new x by old x

		if (y < 0) {//if y below 0
			y = y + 30307;// set y= y-30307
		}
		y = 172 * (x % 176) - 35 * (y / 176);// set new x by old y
		if (z < 0) {//if z below 0
			z = z + 30323;// set y= y-30323
		}
		z = 170 * (x % 178) - 63 * (z / 178); // set new x by old z
		seed = (x*1.0 / 30269 + y *1.0/ 30307 + z*1.0 / 30323); // random number by wichmann-hill generator
		//printf("%d\n", int(seed*1000) %101);
		freq[int(seed*10000) % 101]++; // get random to freq array
		count++;// increase count by 1
	}
	FILE *fp; //set point file to fp
	fp = fopen("randomlist3.txt", "w"); //open file
	for (int i = 0; i < 101; i++) { //loop 100 to get data in txt
		fprintf(fp, "%d\n", freq[i]);
	}
	fclose(fp); //close file
	getchar(); // wait a key
}


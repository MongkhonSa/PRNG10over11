#include "stdafx.h"
#include "time.h"
#include <stdlib.h>
//import  library
int main()
{
	int k = 0; //set k =0
	__int64 freq[101]= {0}; //figured array to get frequency 100 array
	memset(freq, 0, sizeof freq);//set value to 0 to every array in freg
	__int64 count = 0; //set count =0
	srand(time(NULL)); //random by time
	while (count<=100000000000) { //loop until count =10^11
		if(count% 1000000000 == 0)//if count mod 10^9 =0
		{
			printf("%d\n", k); //print k figure k is percent 
			k=	k + 1; // increase k by 1
		}
		int random_number = rand();//random number by c language
		freq[random_number % 101]++; //get random to freq array
		count++; // increase count by 1
	}
	FILE *fp; //set point file to fp
	fp = fopen("randomlist1.txt", "w"); //open file
	for (int i = 0; i < 101; i++) { //loop 100 to get data in txt
		fprintf(fp,"%d\n",freq[i]);
	}
	fclose(fp); //close file
	getchar(); // wait a key
}


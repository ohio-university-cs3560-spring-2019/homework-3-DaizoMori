/*****
*
* Daizo Mori
* 2/11/2019
* CS3560 HW3
*
******/

#include <iostream>
#include <vector>
#include <cmath>

//! \brief {Function computes the standard deviation}
//!	\param <int* a> {Array of integers }
//!	\param <int n> {Numbers in the array (a) }
//!	\return {Returns double which is the standard deviation for the set}

double deviation( int* a, int n ){
	int sum = 0;
	for(size_t i = 0; i <= n - 1; i++){
		sum += a[i];
	}
    double mean = sum /= (n - 1); 
    double stddev = 0; 
    for(size_t i = 0; i <= n - 2; i++){
		stddev += (a[i] - mean) * (a[i] - mean);
    }
    stddev /= (n - 1);
    if(stddev == 0){
        std::cout << "Sigma is zero." << std::endl;
    }
	return sqrt(stddev);
}
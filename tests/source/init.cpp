#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = sum(a,b);
    
	REQUIRE( rv == 24.0 );
}
SCENARIO("calculator sub", "[sub]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = sub(a,b);
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator multip", "[multip]") {
    double a = 16.0;
    double b = 8.0;
    int c = 3;
    
    double rv = multip(a,b);
    
	REQUIRE( rv == 128.0 );
}
SCENARIO("calculator di", "[di]") {
    double a = 16.0;
    double b = 4.0;	
    
    double rv = di(a,b);
    
	REQUIRE( rv == 4 );
}
SCENARIO("calculator dizero", "[dizero]") {
    float a = 1.0;
    float b = 0.0;
    int* c = (int*)malloc(sizeof(int));
    
    double *rv = div( a, b, c );
    
	REQUIRE( rv == nullptr );
}
SCENARIO("calculator power", "[power]") {
    float a = 2.0;
    float b = 1.0;
    int* extent = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));
    *extent = -1;
    
    double rv = pow( a, extent, c );
    
	REQUIRE( rv == 0.5 );
}
SCENARIO("calculator powera", "[powera]") {
    double a = 16.0;
    int c = -3;
	
    double rv = power(a,c);
    
	REQUIRE( rv == 0.000244 );
}
SCENARIO("calculator squareroot", "[squareroot]") {
    double a = 16.0;
    
    double rv = squareroot(a);
    	
REQUIRE( rv == 4 );
}
SCENARIO("calculator squareroota", "[squareroota]") {
    float a = -9.0;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double *rv = sq( a, c );  
	REQUIRE( rv == nullptr );
}

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
    double a = 16.0;
    double b = 0.0;	
    
    double rv = di(a,b);
    
	REQUIRE( rv == NULL );
}
SCENARIO("calculator power", "[power]") {
    double a = 16.0;
    int c = 3;
	
    double rv = power(a,c);
    
	REQUIRE( rv == 4096.0 );
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
    double a = -16.0;
    
    double rv = squareroot(a);
    	
REQUIRE( rv == NULL );
}

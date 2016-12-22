#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 7.0;
    float b = 3.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 10.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 7.0;
    float b = 3.0;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 4.0 );
}
SCENARIO("calculator multiplication", "[mult]") {
    float a = 7.0;
    float b = 3.0;
    
    double rv = multip( a, b );
    
	REQUIRE( rv == 21.0 );
}
SCENARIO("calculator di", "[di]") {
    float a = 7.0;
    float b = 0.0;
    int* c = (int*)malloc(sizeof(int));
    
    double *rv = di( a, b, c );
    
	REQUIRE( rv == nullptr );
}
SCENARIO("calculator di", "[di]") {
    float a = 8.0;
    float b = 4.0;
    int* c = (int*)malloc(sizeof(int));
    
    double rv = di( a, b, c );
    
	REQUIRE( rv == 2 );
}
SCENARIO("calculator power", "[power]") {
    float a = 3.0;
    float b = 1.0;
    int* ext = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));
    *ext = 2;
    
    double rv = power( a, ext, c );
    
	REQUIRE( rv == 9 );
}
SCENARIO("calculator power", "[power]") {
    float a = 4.0;
    float b = 1.0;
    int* ext = (int*)malloc(sizeof(int));
    int* c = (int*)malloc(sizeof(int));
    *ext = -1;
    
    double rv = power( a, ext, c );
    
	REQUIRE( rv == 0.25 );
}
SCENARIO("calculator squareroot", "[squareroot]") {
    float a = 4;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double *rv = squareroot( a, c );
    
	REQUIRE( rv == 2 );
}
SCENARIO("calculator squareroot", "[squareroot]") {
    float a = -7.0;
    float b = 1.0;
    int* c = (int*)malloc(sizeof(int));
    
    double *rv = squareroot( a, c );
    
	REQUIRE( rv == nullptr );
}

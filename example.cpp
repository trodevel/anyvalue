#include <iostream>         // cout

#include "value.h"          // FsmManager

#include "str_helper.h"     // StrHelper

void test_1()
{
    anyvalue::Value v( true );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;
}

void test_2()
{
    anyvalue::Value v( 3 );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;
}

void test_3()
{
    anyvalue::Value v( 1.2 );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;
}

void test_4()
{
    anyvalue::Value v( "hello" );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;
}

void test_5()
{
    anyvalue::Value v( std::string( "world" ) );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;
}


int main( int argc, char **argv )
{
    std::cout << "Hello, world" << std::endl;

    test_1();
    test_2();
    test_3();
    test_4();
    test_5();

    return EXIT_SUCCESS;
}

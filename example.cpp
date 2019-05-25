#include <iostream>         // cout

#include "value.h"          // FsmManager

#include "str_helper.h"     // StrHelper
#include "serializer.h"     // Serializer

void print_serialized( const anyvalue::Value & v )
{
    std::ostringstream os;

    anyvalue::Serializer::save( os, v );

    std::cout << "serialized: " << os.str() << std::endl;
}
template <class T>
void test_t( const T & val )
{
    anyvalue::Value v( val );

    std::cout << anyvalue::StrHelper::to_string( v ) << std::endl;

    print_serialized( v );
}

int main( int argc, char **argv )
{
    std::cout << "Hello, world" << std::endl;

    test_t( true );
    test_t( false );
    test_t( 0 );
    test_t( 1 );
    test_t( -3 );
    test_t( 0.0 );
    test_t( 1.25 );
    test_t( -1.25 );
    test_t( "hello" );
    test_t( std::string( "world" ) );
    test_t( "hello world" );

    return EXIT_SUCCESS;
}

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

void test_deserialization( const char * s )
{
    std::istringstream is( s );

    anyvalue::Value v;

    anyvalue::Serializer::load( is, &v );

    std::cout << "deserialized: " << anyvalue::StrHelper::to_string( v ) << std::endl;
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

    test_deserialization( "1 1 1" );
    test_deserialization( "1 2 -3" );
    test_deserialization( "1 3 1.25" );
    test_deserialization( "1 4 hello=20world" );

    return EXIT_SUCCESS;
}

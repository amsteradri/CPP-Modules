#include "Realtype.hpp"

Base*   generate( void )
{
    if ( std::rand() % 3 == 0 )
        return ( new A );
    else if ( std::rand() % 3 == 1 )
        return ( new B );
    else
        return ( new C );
}

void    identify( Base* p ) 
{
    if (dynamic_cast< A* >( p ))
        std::cout << "A" << std::endl;
    else if (dynamic_cast< B* >( p ))
        std::cout << "B" << std::endl;
    else if (dynamic_cast< C* >( p ))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void    identify( Base& p ) 
{
    try
    {
        A& a = dynamic_cast< A& >( p );
        std::cout << "A" << std::endl;
        (void)a;
    } catch(const std::exception& e) {}
    try
    {
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
    } catch( const std::exception& e ) {}
    try
    {
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
    } catch( const std::exception& e ) {}
}


int     main( void )
{
    {
        Base*   a = generate();
        Base*   b = generate();
        Base*   c = generate();
        Base*   d = generate();

        std::cout << "/* **************************************** */" << std::endl;

        std::cout << "a* = "; identify( a );
        std::cout << "a& = "; identify( *a ); std::cout << std::endl;

        std::cout << "b* = "; identify( b );
        std::cout << "b& = "; identify( *b ); std::cout << std::endl;

        std::cout << "c* = "; identify( c );
        std::cout << "c& = "; identify( *c ); std::cout << std::endl;

        std::cout << "d* = "; identify( d );
        std::cout << "d& = "; identify( *d ); std::cout << std::endl;

        std::cout << "/* ***************************************** */" << std::endl;


        delete a;
        delete b;
        delete c;
        delete d;

    }
    {
         std::srand(static_cast<unsigned>(std::time(NULL))); // Inicializar la semilla una sola vez

        Base* obj = generate();
        if (dynamic_cast<A*>(obj)) std::cout << "Generated: A" << std::endl;
        else if (dynamic_cast<B*>(obj)) std::cout << "Generated: B" << std::endl;
        else if (dynamic_cast<C*>(obj)) std::cout << "Generated: C" << std::endl;

        delete obj; // Liberar memoria
        return 0;
    }
    return 0;
}
#include <iostream>
#include <thread> //here is here we add the header <thread> the function and classes for managing threads are declared
//in <thread>.

// Here the code for writing the message have been moved to a separate function, this is done because every MUST have
//have an initial function, this is where the new thread of execution begins. For the initial thread application this
//resides in main(), however in every other thread it's specified in the constructor of std::thread, in this case the
//std::thread object named t
void hello()
{
    std::cout << "Hello concurrent world\n";
}

int main()
{
    //Here is the new initial function, rather than just writing directly to the standard output or calling hello()
    //from main(), this program launches a whole new thread to do it bridging the thread count to two, the initial
    // thread that starts at main() and the new thread that starts at hello(). After the new thread has launched, the
    //initial thread continues execution.If it does not wait for the new thread to finish it would continue to the end
    //of main() and thus end the program and possibly before the the new thread had had a chance to to run. This is why
    //the call to join() is here. This causes the calling thread (in main()) to wait for the thread associated with
    // the std::thread object, in this case, t
    std::thread t(hello);
    t.join();
}

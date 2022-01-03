// C++20 code demonstrates jthread
// Remember to enable compiler settings for C++20
// (some versions of g++ may require you to add -pthread)

#include <thread>
#include <stop_token>
#include <iostream>
using namespace std;

void ThreadFunction(std::stop_token stopSoon)
{
   while (true)
   {
      cout << "Worker thread: Hello!\n";
      std::this_thread::sleep_for(1s);

      if (stopSoon.stop_requested())
      {
         cout << "Worker thread: asked to end, bye\n";
         break;
      }
   }
}

int main()
{
   cout << "Main thread: Starting a worker thread\n";

   // Construct a thread object (it starts execution too)
   jthread thSayHello(ThreadFunction);

   // pause the main thread for 5 seconds
   this_thread::sleep_for(5s);

   cout << "Main thread: Sending a stop request to worker\n";
   // send a stop "request" to child thread (not a kill)
   thSayHello.request_stop();

   if (thSayHello.joinable())
   {
      cout << "Main thread: Waiting on worker to end\n";
      thSayHello.join(); // waiting on thread to end
      cout << "Main thread: wait has ended. Exiting now\n";
   }

   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream> // std::cout
#include <thread>   // std::thread
using namespace std;

void thread_task() {
	    cout << "hello thread" << endl;
}

/*
 * ===  FUNCTION  =========================================================
  *         Name:  main
   *  Description:  program entry routine.
    * ========================================================================
     */
     int main(int argc, const char *argv[])
     {
	         thread t(thread_task);
		     t.join();

		         return EXIT_SUCCESS;
     }  /* ----------  end of function main  ---------- */
     




using System;

namespace Debug
{
    class DebugExample
    {
        static void Main(string[] args)
        {
            int x = 10;

            Console.Write("The value of " + x + " factorial is ");

            // loop to determine x factorial, contains logic error
            for (int i = x; i >= 0; i--) 
                x *= i;

            Console.Write(x);

            Console.ReadLine(); // delay program exit

        }  // end main

    }   // end class DebugExample
}   // end namespace Debug
// Fig. D.21: DebugClass.cs
// Console application to demonstrate object debugging.

using System;


namespace ClassDebug
{
    
// creates array containing three different classes
    public class DebugEntry
     {
         public int someInteger = 123;
         private int[] integerArray = { 74, 101, 102, 102 };
         private DebugClass debugClass;
         private Random randomObject;
         private object[] list = new object[3];

        // constructor
         public DebugEntry()
         {
             randomObject = new Random();
             debugClass = new DebugClass( "Hello World",
                 new object () );
            
             list[0] = integerArray;
             list[1] = debugClass;
             list[2] = randomObject;
         }

        // display values retrieved from three objects
        public void DisplayValues()
        {
            Console.WriteLine(randomObject.Next());
            Console.WriteLine(debugClass.SomeString);
            Console.WriteLine(integerArray[0]);
         }

        // main entry point for application
        [STAThread]
        public static void Main()
        {
          DebugEntry entry = new DebugEntry();
          entry.DisplayValues();
          }
        } // end class DebugEntry

        // demonstrates class debugging
        public class DebugClass
        {
             // private variables
             private string someString;
             private object privateObject;

            // constructor
            public DebugClass(string stringData,
            object objectData)
            {
              someString = stringData;
              privateObject = objectData;
            }

            // accessor property for someString
            public string SomeString
            {
              get
              {
                  return someString;
              }
             
              set
              {
                  someString = value;
                  }
              } // end property SomeString

        } // end class DebugClass

} // end namespace ClassDebug
//===
    // The syntax for templates for functions:
    // The function declaration:
    template <typename T>  //tell the compiler we are using a template

    //T represents the variable type.
    //Since we want it to be for any type, we use T
    T  functionName (T parameter1,T parameter2, ...);

    // The function definition:

    template <typename T>
    T functionName (T  parameter1,T  parameter2,...)
    {
        function statements;
    }

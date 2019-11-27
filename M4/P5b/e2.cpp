/*
    Example of do while loop syntax:
*/
//
do {
    /* code */
} while(/* condition */);
//
/*
    Example: do while loop:
    Note:
        in a do while loop the statement(s) are executed
        on each iteration before the condition is checked
*/
//
int main()
{
    int count = 0;

    /*
        In this do..while loop example, the statements
        will be executed until; count = 5.
    */
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    } while(count < 5);

    int otherCount = 6;
    /*
        In this do..while loop the statements will execute once.
        Even though otherCount > 5.
    */
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);

    return 0;
}
// Output:
/*
    Count = 0
    Count = 1
    Count = 2
    Count = 3
    Count = 4
    othercount = 6
*/

/*
    Write a program that asks a user for five numbers.
    Print out the sum and average of the five numbers.
*/
//

int main()
{
    std::string input;
    float input;
    float sum;

    for(int i=0;i<5;i++)
    {
        std::cout<<"Enter five numbers?\n";
        std::getline (std::cin, input);
        std::stringstream(string) >> input;
        std::cin>>input;
        sum = sum + input;
    }
    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}

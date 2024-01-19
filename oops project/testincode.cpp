#include <iostream>
#include <sstream>
#include <cassert>

// Include your classes here

void simulateUserInput(const std::string &input)
{
    std::istringstream input_stream(input);
    std::cin.rdbuf(input_stream.rdbuf());
}

int main()
{
    // Test case 1: Simulate a user logging in, creating a project, and performing task operations
    simulateUserInput("2\nuser123\npassword123\n1\nProject1\n1\nTask1\n2\n4\n");

    Management c;
    c.run();

    // Add assertions based on the expected output or state of your program
    // For example, you can check if the project and task were created successfully

    return 0;
}

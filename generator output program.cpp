#include <iostream>
#include <iomanip>

int main() {
    // Number of generators and test results
    const int numGenerators = 5;
    const int numTests = 3;

    // Generator test results
    double testResults[numGenerators][numTests] = {
        {122.5, 122.7, 123.0},
        {120.2, 127.0, 125.1},
        {121.7, 124.9, 126.0},
        {122.9, 123.8, 126.7},
        {121.5, 124.7, 122.6}
    };

    // Variables to store averages
    double generatorAverages[numGenerators] = {0.0};
    double totalSum = 0.0;

    // Calculate averages for each generator
    for (int i = 0; i < numGenerators; ++i) {
        double sum = 0.0;
        for (int j = 0; j < numTests; ++j) {
            sum += testResults[i][j];
        }
        generatorAverages[i] = sum / numTests;
        totalSum += sum;
    }

    // Display results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average voltages for each generator:\n";
    for (int i = 0; i < numGenerators; ++i) {
        std::cout << "Generator " << i + 1 << ": " << generatorAverages[i] << " V\n";
    }

    // Calculate and display overall average
    double overallAverage = totalSum / (numGenerators * numTests);
    std::cout << "\nOverall average voltage: " << overallAverage << " V\n";

    return 0;
}


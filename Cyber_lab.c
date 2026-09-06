#include <iostream>
int main() {
    char labName[100];
    int numComputers, numNetworkDevices, numSecurityTools;
    float costPerComputer, costPerNetworkDevice, softwareCost;
    float computerCost, networkCost, totalInvestment;

    printf("Enter Lab Name: ");
    scanf(" %[^\n]", labName);

    printf("Enter number of computers: ");
    scanf("%d", &numComputers);

    printf("Enter number of network devices: ");
    scanf("%d", &numNetworkDevices);

    printf("Enter number of security tools: ");
    scanf("%d", &numSecurityTools);

    printf("Enter cost per computer: ");
    scanf("%f", &costPerComputer);

    printf("Enter cost per network device: ");
    scanf("%f", &costPerNetworkDevice);

    printf("Enter annual security software cost: ");
    scanf("%f", &softwareCost);
    
    computerCost = numComputers * costPerComputer;
    networkCost = numNetworkDevices * costPerNetworkDevice;
    totalInvestment = computerCost + networkCost + softwareCost;

    printf("\n\n");
    printf("\n------------------------");
    printf("\nCYBERSECURITY LAB REPORT");
    printf("\n------------------------");
    printf("\nLab Name           : %s\n", labName);
    printf("Computers          : %d\n", numComputers);
    printf("Network Devices    : %d\n", numNetworkDevices);
    printf("Security Tools     : %d\n\n", numSecurityTools);

    printf("Computer Cost      : %.2f\n", computerCost);
    printf("Network Device Cost: %.2f\n", networkCost);
    printf("Software Cost      : %.2f\n\n", softwareCost);

    printf("Total Lab Investment: %.2f\n", totalInvestment);
    return 0;
}
}

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int sizeTable, char * phoneNumberToFind);

    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int sizeTable, double salaryToFind);
  
    //defined in employeeTable.c 

    extern Employee EmployeeTable[];

    extern const int EmployeeTableEntries; 

 

    PtrToEmployee matchPtr;//Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 

    if (matchPtr != NULL) 
    {

    
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    }
    else 
    {
        printf("Employee ID is NOT found in the record\n"); 
    }
 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 
    {
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    }
    else 
    {
        printf("Employee Tony Bobcat is NOT found in the record\n"); 
    }
    
    //Example Not found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable,EmployeeTableEntries, "909-333-4444");

    if(matchPtr != NULL)
    {
        printf("Employee with number 909-559-2134 is in the record %d\n", matchPtr-EmployeeTable);
    }
    else
    {
        printf("Employee with number 909-559-2134 is NOT found in the record\n");
    }

    //example found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable,EmployeeTableEntries, "213-555-1212");

    if(matchPtr != NULL)
    {
        printf("Employee with number 213-555-1212 is in the record %d\n", matchPtr-EmployeeTable);
    }
    else
    {
        printf("Employee with number 213-555-1212 is NOT found in the record\n");
    }


    //example NOT found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.20);

    if (matchPtr != NULL) 
    {
        printf("Employee salary 6.20 is in record %d\n", matchPtr - EmployeeTable); 
    }
    else 
    {
        printf("Employee salary is NOT found in the record\n"); 
    }




    //example was found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 5.20);

    if (matchPtr != NULL) 
    {
        printf("Employee salary 5.20 is in record %d\n", matchPtr - EmployeeTable); 
    }
    else 
    {
        printf("Employee salary is NOT found in the record\n"); 
    }

    return EXIT_SUCCESS; 
}

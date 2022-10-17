#include "employee.h"
EMPLOYEE* list_of_employees=NULL;

void printEmployee(EMPLOYEE e){
    printf("Name:", e.name, "Id:",e.id,"Payments:");
    if(e.payments == NULL)
    {
        printf("No payments");
    }
    else
    {
        printf("Date", "Amount");
        while(e.payments->next != NULL)
        {
            printf(e.payments->date, e.payments->amount);
            e.payments->next;
        }
    }
}

void addEmployee(int e_id, char* e_name){
    EMPLOYEE x; 
    x.id = e_id;
    x.name = e_name;
    x.next = list_of_employees->id;
}

void printEmployees(){
    while(list_of_employees->next != NULL)
    {
        printf("Name:", list_of_employees->name, "Payments:");
        if(list_of_employees->payments == NULL)
        {
            printf("No payments");
        } 
        else
        {
            printf("Date", "Amount");
            while(list_of_employees->payments->next != NULL)
            {
                printf(list_of_employees->payments->date, list_of_employees->payments->amount);
                list_of_employees->payments->next;
            }
        }
        list_of_employees->next;
    }
           
}


int addPayment(int e_id, char* p_date, float p_amount){
    while(list_of_employees->next != NULL){
        if(list_of_employees->id == e_id){
            PAYMENT p; 
            p.amount = p_amount; 
            p.date = p_date; 
            list_of_employees->payments->next = p.date;
            return 1;
        }
        else{
            list_of_employees->next;
        }
    }
    return 0; 
}

int deleteEmployee(int e_id, char* e_name){
    

}